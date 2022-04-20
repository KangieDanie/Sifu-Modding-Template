#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBySpeedStateStruct.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct FBlendProfileBySpeedStateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlendProfile* m_BlendProfileBySpeedState[4];
    
    SIFU_API FBlendProfileBySpeedStateStruct();
};

