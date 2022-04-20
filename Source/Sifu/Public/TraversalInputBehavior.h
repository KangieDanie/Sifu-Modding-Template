#pragma once
#include "CoreMinimal.h"
#include "TraversalInputBehavior.generated.h"

USTRUCT(BlueprintType)
struct FTraversalInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bUseCharacterVelocityInsteadOfDirOnStick;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAngleBetweenVelocityAndStickDir;
    
    SIFU_API FTraversalInputBehavior();
};

