#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CameraCollisionSideRaycast.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCameraCollisionSideRaycast {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vStartLocal;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vEndLocal;
    
    FCameraCollisionSideRaycast();
};

