// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

class UBoxComponent;

UCLASS()
class MYPROJECT_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	float scoreValue;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	UBoxComponent* Collision;

};
