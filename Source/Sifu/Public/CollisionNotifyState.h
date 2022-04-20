#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "CollisionNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UCollisionNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_alName;
    
    UPROPERTY(EditAnywhere)
    bool m_bDisableCollisions;
    
    UCollisionNotifyState();
};

