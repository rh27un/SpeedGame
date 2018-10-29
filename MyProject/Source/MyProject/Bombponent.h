// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyProjectPawn.h"
#include "Bombponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UBombponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBombponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BombTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int TriggerSpeed;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	AMyProjectPawn* OwnerCar;
	FTimerHandle BombTimerHandle;
	bool bIsBombActive;
	bool bIsDead = false;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void OnExplode();
	
};
