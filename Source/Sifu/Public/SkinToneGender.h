#pragma once
#include "CoreMinimal.h"
#include "SkinToneGender.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSkinToneGender {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_SkinTones[2];
    
    SIFU_API FSkinToneGender();
};

