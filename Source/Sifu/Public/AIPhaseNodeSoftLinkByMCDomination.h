#pragma once
#include "CoreMinimal.h"
#include "AIPhaseNodeSoftLink.h"
#include "AIPhaseNodeSoftLinkByMCDomination.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAIPhaseNodeSoftLinkByMCDomination {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIPhaseNodeSoftLink m_PhaseLink;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiMCDominationFlags;
    
    FAIPhaseNodeSoftLinkByMCDomination();
};

