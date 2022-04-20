#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AIInfluenceNode.generated.h"

class UAIInfluenceNode;

UCLASS(Abstract)
class SIFU_API UAIInfluenceNode : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 m_iVerNum;
    
    UPROPERTY()
    TArray<UAIInfluenceNode*> m_LinkedNodes;
    
    UPROPERTY()
    int32 m_iNodeIndex;
    
public:
    UAIInfluenceNode();
};

