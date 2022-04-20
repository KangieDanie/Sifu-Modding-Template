#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "TraversalAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FTraversalAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimPreExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimExitLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_AnimLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bHandleDamageOnAnimLanding;
    
    FTraversalAnimContainer();
};

