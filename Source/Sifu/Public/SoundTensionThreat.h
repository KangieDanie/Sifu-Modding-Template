#pragma once
#include "CoreMinimal.h"
#include "SoundTensionThreat.generated.h"

class AAISituationActor;

USTRUCT(BlueprintType)
struct SIFU_API FSoundTensionThreat {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<AAISituationActor*> m_AiSituations;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iBehaviorsMask;
    
    FSoundTensionThreat();
};

