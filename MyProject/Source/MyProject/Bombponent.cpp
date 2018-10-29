// Fill out your copyright notice in the Description page of Project Settings.

#include "Bombponent.h"


// Sets default values for this component's properties
UBombponent::UBombponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	if (Cast<AMyProjectPawn>(GetOwner())) {
		OwnerCar = Cast<AMyProjectPawn>(GetOwner());
	}
}


void UBombponent::OnExplode()
{
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("kaboom"));
	Cast<UPrimitiveComponent>(OwnerCar->GetRootComponent())->AddImpulse(FVector::UpVector * 1000.f);
	bIsDead = true;
}

// Called when the game starts
void UBombponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	
}


// Called every frame
void UBombponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (bIsDead)
		return;

	if (!GetWorld()->GetTimerManager().IsTimerActive(BombTimerHandle)) {
		//if car speed is lower than trigger speed, start the bomb timer.
		if (OwnerCar->GetSpeedInKPH() < TriggerSpeed) {
			GetWorld()->GetTimerManager().SetTimer(BombTimerHandle, this, &UBombponent::OnExplode, BombTime, false);
			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("unsafe"));
		}
	}
	else {
		float timeLeft = GetWorld()->GetTimerManager().GetTimerRemaining(BombTimerHandle);
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("Time left: %f"), timeLeft));
		if (OwnerCar->GetSpeedInKPH() > TriggerSpeed) {
			//if car speed is higher than trigger speed, stop & reset the bomb timer.
			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Safe"));
			GetWorld()->GetTimerManager().ClearTimer(BombTimerHandle);
		}
	}
}

