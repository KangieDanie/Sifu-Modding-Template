#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnim.h"
#include "NetOrderStructSnapAnim.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructSnapAnim : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool m_bIsSnapper;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bSnapOnTarget;
    
    UPROPERTY(BlueprintReadWrite)
    int32 m_iSyncID;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bIsInstigator;
    
    SIFU_API FNetOrderStructSnapAnim();
};

