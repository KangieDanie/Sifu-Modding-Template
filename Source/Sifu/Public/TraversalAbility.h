#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "TraversalAbility.generated.h"

UCLASS()
class SIFU_API UTraversalAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_uiEntryTypes;
    
    UTraversalAbility();
};

