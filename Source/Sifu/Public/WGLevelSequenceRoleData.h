#pragma once
#include "CoreMinimal.h"
#include "ELevelSequenceAIBehavior.h"
//CROSS-MODULE INCLUDE: SCCore SCLevelSequenceRoleData
#include "SCLevelSequenceRoleData.h"
#include "EQuadrantTypes.h"
#include "WGLevelSequenceRoleData.generated.h"

UCLASS()
class SIFU_API UWGLevelSequenceRoleData : public USCLevelSequenceRoleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EQuadrantTypes m_ForcedQuadrant;
    
    UPROPERTY(EditAnywhere)
    ELevelSequenceAIBehavior m_ForcedAIBehavior;
    
    UWGLevelSequenceRoleData();
};

