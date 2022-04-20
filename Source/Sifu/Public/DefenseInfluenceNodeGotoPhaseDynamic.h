#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "AIPhaseNodeSoftLink.h"
#include "DefenseInfluenceNodeGotoPhaseDynamic.generated.h"

UCLASS()
class SIFU_API UDefenseInfluenceNodeGotoPhaseDynamic : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIPhaseNodeSoftLink m_phaseSoftLink;
    
    UDefenseInfluenceNodeGotoPhaseDynamic();
};

