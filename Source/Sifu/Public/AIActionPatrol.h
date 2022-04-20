#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionPatrol.generated.h"

class APathPatrol;

UCLASS()
class SIFU_API UAIActionPatrol : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APathPatrol* m_Patrol;
    
    UAIActionPatrol();
};

