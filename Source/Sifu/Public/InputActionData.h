#pragma once
#include "CoreMinimal.h"
#include "InputActionData.generated.h"

USTRUCT(BlueprintType)
struct FInputActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float m_fStackLifeSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool m_bUseScaledTime;
    
    friend uint32 GetTypeHash(const FInputActionData& Other) {
        return GetTypeHash(Other.m_fStackLifeSpan);
    }

    SIFU_API FInputActionData();
};

