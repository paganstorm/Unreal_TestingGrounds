// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGrounds.h"
#include "public/ChooseNextWaypoint.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {

	UE_LOG(LogTemp, Warning, TEXT("AI in C++ yaay"));
	return EBTNodeResult::Succeeded;
}