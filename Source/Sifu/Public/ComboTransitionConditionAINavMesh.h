#pragma once
#include "CoreMinimal.h"
#include "ComboTransitionConditionAICheckObstacles.h"
#include "NavMeshFreeRange.h"
#include "NavMeshFreeSquare.h"
#include "ComboTransitionConditionAINavMesh.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboTransitionConditionAINavMesh : public UComboTransitionConditionAICheckObstacles {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNavMeshFreeRange> m_FreeRanges;
    
    UPROPERTY(EditAnywhere)
    TArray<FNavMeshFreeSquare> m_FreeSquares;
    
    UComboTransitionConditionAINavMesh();
};

