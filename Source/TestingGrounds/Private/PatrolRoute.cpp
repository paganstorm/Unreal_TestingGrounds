// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGrounds.h"
#include "public/PatrolRoute.h"

/* Getter for patrol points */
TArray<AActor*> UPatrolRoute::GetPatrolPoints() const { return PatrolPoints;}

// Sets default values for this component's properties
UPatrolRoute::UPatrolRoute()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UPatrolRoute::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UPatrolRoute::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

