#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
//CROSS-MODULE INCLUDE: SCCore GameFlowNextMap
#include "GameFlowNextMap.h"
#include "WGGameFlowNextMap.generated.h"

UCLASS()
class SIFU_API UWGGameFlowNextMap : public UGameFlowNextMap {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EMenuEnum m_eMenuToShow;
    
    UWGGameFlowNextMap();
};

