#include "NPCBase.h"

ANPCBase::ANPCBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANPCBase::BeginPlay()
{
	Super::BeginPlay();
}

void ANPCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ANPCBase::Interact_Implementation(AActor* Interactor)
{
	// Implementazione di base vuota - i Blueprint figli sovrascriveranno questo comportamento
}