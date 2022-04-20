#pragma once
#include "CoreMinimal.h"
//#include "BaseTargetEvaluation.h"
#include "TE_CameraTarget.generated.h"

UCLASS()
class SIFU_API UTE_CameraTarget : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bOnlyRelevantForOneTarget;
    
    UTE_CameraTarget();
};

