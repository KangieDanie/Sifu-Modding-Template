#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionWait.generated.h"

UCLASS()
class SIFU_API UAIActionWait : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDuration;
    
    UAIActionWait();
};

