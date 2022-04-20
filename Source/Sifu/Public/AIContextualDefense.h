#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "AIContextualDefense.generated.h"

class UAIInfluenceNode;

UCLASS()
class SIFU_API UAIContextualDefense : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UAIInfluenceNode*> m_Nodes;
    
    UAIContextualDefense();
};

