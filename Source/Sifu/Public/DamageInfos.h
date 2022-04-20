#pragma once
#include "CoreMinimal.h"
#include "DamageInfos.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDamageInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bTakenDown;
    
    SIFU_API FDamageInfos();
};

