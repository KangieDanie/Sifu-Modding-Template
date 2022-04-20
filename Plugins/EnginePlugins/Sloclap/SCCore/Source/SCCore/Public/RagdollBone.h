#pragma once
#include "CoreMinimal.h"
#include "RagdollBone.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FRagdollBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    float m_fForceFactor;
    
    FRagdollBone(){};
};

