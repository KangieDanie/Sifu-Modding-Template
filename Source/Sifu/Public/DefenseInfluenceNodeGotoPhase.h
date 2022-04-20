#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "AIPhaseNodeHardLink.h"
#include "DefenseInfluenceNodeGotoPhase.generated.h"

UCLASS()
class SIFU_API UDefenseInfluenceNodeGotoPhase : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIPhaseNodeHardLink m_phaseHardLink;
    
    UDefenseInfluenceNodeGotoPhase();
};

