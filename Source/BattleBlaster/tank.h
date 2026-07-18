#pragma once

#include "CoreMinimal.h"
#include "basepawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputActionValue.h"
#include "tank.generated.h"

class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UInputComponent;
class APlayerController;

UCLASS()
class BATTLEBLASTER_API Atank : public Abasepawn
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	Atank();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(
		class UInputComponent* PlayerInputComponent
	) override;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* defaultmappingcontext;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* moveaction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* turnaction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* fireaction;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* springarmcomp;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* cameracomp;

	void moveinput(const FInputActionValue& value);

	void turninput(const FInputActionValue& value);

	UPROPERTY(EditAnywhere)
	float speed = 600.0f;

	UPROPERTY(EditAnywhere)
	float turnspeed = 100.0f;

	bool playerisalive = true;

	APlayerController* playercontroller = nullptr;

	void handledestruction();

	void setplayerenabled(bool enabled);
};