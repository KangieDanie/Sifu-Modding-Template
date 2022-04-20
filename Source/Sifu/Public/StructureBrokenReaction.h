#pragma once
#include "CoreMinimal.h"
#include "BaseFightingStateBehavior.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "StructureBrokenReaction.generated.h"

USTRUCT(BlueprintType)
struct FStructureBrokenReaction : public FBaseFightingStateBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fDuration;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Loop;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorableLoop;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardCoefRecoveredAtEnd;
    
    UPROPERTY(EditAnywhere)
    float m_fGuardRecoveredAtEnd;
    
    SIFU_API FStructureBrokenReaction();
};

