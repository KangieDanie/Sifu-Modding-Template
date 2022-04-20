#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "ETS_NextHitExtraInfos.generated.h"

USTRUCT(BlueprintType)
struct FETS_NextHitExtraInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fHitTime;
    
    SIFU_API FETS_NextHitExtraInfos();
};

