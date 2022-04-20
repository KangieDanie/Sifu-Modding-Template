#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputMappingNode.h"
#include "InputMappingTree.generated.h"

USTRUCT()
struct FInputMappingTree {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<InputAction, FInputMappingNode> m_NodePerAction;
    
    SIFU_API FInputMappingTree();
};

