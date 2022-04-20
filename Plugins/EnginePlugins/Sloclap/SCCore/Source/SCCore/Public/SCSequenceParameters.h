#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SCSequenceParameters.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct SCCORE_API FSCSequenceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ULevelSequence* m_Sequence;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform m_Transform;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bAutoPlay;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bDestroyAtEnd;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bWantPushInputContext;
    
	FSCSequenceParameters(){};
};

