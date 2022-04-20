#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ESCGameInstanceState
#include "ESCGameInstanceState.h"
//CROSS-MODULE INCLUDE: SCCore GameFlowNode
#include "GameFlowNode.h"
#include "EMenuEnum.h"
#include "WGGameFlowNode.generated.h"

UCLASS()
class SIFU_API UWGGameFlowNode : public UGameFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EMenuEnum m_eMenuToShow;
    
    UPROPERTY(VisibleAnywhere)
    ESCGameInstanceState m_eGameState;
    
    UWGGameFlowNode();
};

