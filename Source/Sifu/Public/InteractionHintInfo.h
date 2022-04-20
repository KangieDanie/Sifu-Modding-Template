#pragma once
#include "CoreMinimal.h"
#include "InteractionHintInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteractionHintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsVisible;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsUsable;
    
    friend uint32 GetTypeHash(const FInteractionHintInfo& Other) {
        return GetTypeHash(Other.m_bIsVisible) + GetTypeHash(Other.m_bIsUsable);
    }

    SIFU_API FInteractionHintInfo();
};

