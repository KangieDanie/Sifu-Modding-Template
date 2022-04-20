#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EActionType.h"
#include "TargetActionTypeRequest.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTargetActionTypeRequest : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    EActionType BPE_GetTargetActionType(const AActor* _owner) const;
    
    UTargetActionTypeRequest();
};

