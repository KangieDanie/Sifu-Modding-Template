#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "EAIFidgetTypes.h"
#include "FidgetPlayerBTService.generated.h"

UCLASS()
class SIFU_API UFidgetPlayerBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EAIFidgetTypes m_eFidgetType;
    
    UPROPERTY(EditAnywhere)
    bool m_bRestoreTypeOnCeaseRelevant;
    
public:
    UFidgetPlayerBTService();
};

