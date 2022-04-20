#pragma once
#include "CoreMinimal.h"
#include "MenuOptionData.generated.h"

USTRUCT(BlueprintType)
struct FMenuOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDefaultValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bApplyOnSet;
    
    SIFU_API FMenuOptionData();
};

