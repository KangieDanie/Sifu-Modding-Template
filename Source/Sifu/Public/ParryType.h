#pragma once
#include "CoreMinimal.h"
#include "EParrySide.h"
#include "EParryDirection.h"
#include "EParryHeight.h"
#include "ParryType.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FParryType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EParryDirection m_eParryDirection;
    
    UPROPERTY(EditAnywhere)
    EParrySide m_eParrySide;
    
    UPROPERTY(EditAnywhere)
    EParryHeight m_eParryHeight;
    
    FParryType();
};

