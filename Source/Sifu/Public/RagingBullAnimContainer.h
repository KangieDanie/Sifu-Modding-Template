#pragma once
#include "CoreMinimal.h"
#include "RagingBullAnimContainer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRagingBullAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_animation;
    
    UPROPERTY(EditAnywhere)
    float m_fAnimSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseRootMotion;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float m_fAnimPlayRate;
    
    SIFU_API FRagingBullAnimContainer();
};

