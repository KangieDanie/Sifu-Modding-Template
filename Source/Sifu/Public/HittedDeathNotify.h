#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "HittedDeathNotify.generated.h"

class UAnimSequence;

UCLASS(CollapseCategories)
class SIFU_API UHittedDeathNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_DeathAnimation;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_DeathAnimType;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorDeathAnimation;
    
    UPROPERTY(EditAnywhere)
    bool m_bUnspawnNow;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiDeathTriggeredConditionMask;
    
    UHittedDeathNotify();
};

