#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "IsInInteractiveDialogCondition.generated.h"

UCLASS()
class SIFU_API UIsInInteractiveDialogCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iMaxChoicesCount;
    
    UIsInInteractiveDialogCondition();
};

