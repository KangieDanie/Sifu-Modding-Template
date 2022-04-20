#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ActorClassCondition.generated.h"

class AActor;

UCLASS()
class SIFU_API UActorClassCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> m_Class;
    
    UActorClassCondition();
};

