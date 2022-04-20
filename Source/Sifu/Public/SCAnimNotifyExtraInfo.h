#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyExtraInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCAnimNotifyExtraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bMirrorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_iSubAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_uiTransitionGlobalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_uiOrderID;
    
    SIFU_API FSCAnimNotifyExtraInfo();
};

