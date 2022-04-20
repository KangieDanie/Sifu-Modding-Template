#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSequence.h"
#include "AnimContainer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct SCCORE_API FAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLoopable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fStartRatio;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 m_uiOrderID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPlayRate;
    
public:
    FAnimContainer() {};
};

