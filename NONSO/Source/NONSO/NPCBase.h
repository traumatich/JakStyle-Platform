#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCBase.generated.h"

UCLASS()
class NONSO_API ANPCBase : public ACharacter
{
	GENERATED_BODY()

public:
	ANPCBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interazione")
	void Interact(AActor* Interactor);
	virtual void Interact_Implementation(AActor* Interactor);

};