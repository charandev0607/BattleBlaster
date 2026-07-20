// Fill out your copyright notice in the Description page of Project Settings.


#include "tank.h"
#include "Camera/CameraComponent.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
Atank::Atank()
{
	springarmcomp = CreateDefaultSubobject<USpringArmComponent>(TEXT("springarmcomp"));
	springarmcomp->SetupAttachment(capsulecomp);
	cameracomp = CreateDefaultSubobject<UCameraComponent>(TEXT("cameracomp"));
	cameracomp->SetupAttachment(springarmcomp);


}

// Called when the game starts or when spawned
void Atank::BeginPlay()
{
	Super::BeginPlay();
	playerisalive = true;
	playercontroller = Cast<APlayerController>(Controller);
	if (playercontroller) {
		if (ULocalPlayer* localplayer = playercontroller->GetLocalPlayer()) {
			if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(localplayer)) {
				subsystem->AddMappingContext(defaultmappingcontext, 0);
			}
		}
	}
}
// Called every frame
void Atank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	playercontroller = Cast<APlayerController>(GetController());
	if (playercontroller) {
		FHitResult hitresult;
		playercontroller->GetHitResultUnderCursor(ECC_Visibility,false,hitresult);
		rotateturrent(hitresult.ImpactPoint); 
	}
	

}

// Called to bind functionality to input
void Atank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* eic = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		eic->BindAction(moveaction, ETriggerEvent::Triggered, this, &Atank::moveinput);
		eic->BindAction(turnaction, ETriggerEvent::Triggered, this, &Atank::turninput);
		eic->BindAction(fireaction, ETriggerEvent::Started, this, &Abasepawn::fire);
	}
}

void Atank::moveinput(const FInputActionValue& value) {
	float inputvalue = value.Get<float>();
	FVector initiallocation =FVector(0.0f,0.0f,0.0f);
	initiallocation.X = speed * inputvalue *UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	AddActorLocalOffset(initiallocation, true);
}

void Atank::turninput(const FInputActionValue& value)
{
	float inputvalue = value.Get<float>();
	FRotator initialrotation = FRotator(0.0f, 0.0f, 0.0f);
	initialrotation.Yaw = turnspeed * inputvalue * UGameplayStatics::GetWorldDeltaSeconds(GetWorld());
	AddActorLocalRotation(initialrotation, true);
}

void Atank::handledestruction() {
	Super::handledestruction();
	SetActorHiddenInGame(true); 
	SetActorTickEnabled(false);
	setplayerenabled(false);
	playerisalive = false;
}

void Atank::setplayerenabled(bool enabled)
{
	if (playercontroller) {
		if (enabled) {
			EnableInput(playercontroller);
		}
		else {
			DisableInput(playercontroller);
		}
		playercontroller->bShowMouseCursor = enabled;
	}
}

