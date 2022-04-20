#pragma once
#include "CoreMinimal.h"
#include "ETraversalPhase.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "AnimStructTraversal.h"
#include "TraversalAnimStructHelper.generated.h"

class UPlayerAnim;

UCLASS(BlueprintType)
class SIFU_API UTraversalAnimStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FAnimContainer BPF_GetAnimContainerFromPhase(UPlayerAnim* _playerAnim, const FAnimStructTraversal& _animStructTraversal, ETraversalPhase _eTraversalPhase);
    
    UTraversalAnimStructHelper();
};

