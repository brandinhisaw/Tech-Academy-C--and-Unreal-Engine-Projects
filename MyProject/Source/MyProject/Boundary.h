// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boundary.generated.h"

class UBoxComponent;

UCLASS()
class MYPROJECT_API ABoundary : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	ABoundary();


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Goal");
	bool isGoalTrigger = false;

private:
	UPROPERTY(VisibleAnywhere, Category = "Bounds")
	UBoxComponent* Bounds;
};
