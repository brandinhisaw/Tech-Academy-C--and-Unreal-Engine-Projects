// Fill out your copyright notice in the Description page of Project Settings.


#include "Boundary.h"
#include "Components/BoxComponent.h"

// Sets default values
ABoundary::ABoundary()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
}

