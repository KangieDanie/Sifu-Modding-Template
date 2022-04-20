#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine EPlatform
#include "ControllerKeyIcons.h"
#include "ControllerAxisIcons.h"
#include "ControllerIcons.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FControllerIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_Controllers;
    
   /* UPROPERTY(EditAnywhere)
    TArray<EPlatform> m_Platforms;*/
    
    UPROPERTY(EditAnywhere)
    TArray<FControllerKeyIcons> m_KeyIcons;
    
    UPROPERTY(EditAnywhere)
    TArray<FControllerAxisIcons> m_AxisIcons;
    
    FControllerIcons();
};

