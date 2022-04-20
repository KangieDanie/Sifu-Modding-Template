#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECameraDataModifierTickBehavior.h"
#include "CameraDataModifierWithBehavior.generated.h"

class UCameraDataModifier;

USTRUCT(BlueprintType)
struct SIFU_API FCameraDataModifierWithBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraDataModifier> m_Modifier;
    
    UPROPERTY(EditAnywhere)
    ECameraDataModifierTickBehavior m_eBehavior;
    
    FCameraDataModifierWithBehavior();
};

