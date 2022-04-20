#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ActorHasAttachedActorCondition.generated.h"

class AActor;

UCLASS()
class SIFU_API UActorHasAttachedActorCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> m_Class;
    
    UActorHasAttachedActorCondition();
};

