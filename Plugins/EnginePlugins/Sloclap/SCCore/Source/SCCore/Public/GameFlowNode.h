#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPath.h"
#include "GameFlowNode.generated.h"

class UGameFlowNextMap;

UCLASS()
class SCCORE_API UGameFlowNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UGameFlowNextMap*> m_potentialNextMaps;
    
    UPROPERTY(VisibleAnywhere)
    FSoftObjectPath m_Map;
    
    UPROPERTY(VisibleAnywhere)
    FName m_MapTag;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagContainer m_MapOptions;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bIsFirstPlayableMap;
    
    UGameFlowNode();
};

