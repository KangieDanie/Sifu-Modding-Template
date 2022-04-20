#pragma once
#include "CoreMinimal.h"
#include "CameraCollisionSideRaycast.h"
#include "CameraCollisionSideRaycastList.generated.h"

USTRUCT()
struct SIFU_API FCameraCollisionSideRaycastList {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FCameraCollisionSideRaycast> m_ListOfRayCast;
    
    FCameraCollisionSideRaycastList();
};

