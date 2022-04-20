#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAnimInstance
#include "SCAnimInstance.h"
#include "PostProcessAnimInstance.generated.h"

UCLASS(NonTransient)
class SIFU_API UPostProcessAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseClothAnimDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ClothAnimDriveCurveName;
    
    UPostProcessAnimInstance();
};

