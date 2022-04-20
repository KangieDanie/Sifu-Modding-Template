#pragma once
#include "CoreMinimal.h"
#include "AbstractCameraData.h"
#include "CameraNodeStruct.h"
#include "CameraData.generated.h"

class UCameraData;

UCLASS()
class SIFU_API UCameraData : public UAbstractCameraData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCameraNodeStruct m_CameraNodeStruct;
    
protected:
    UPROPERTY(EditAnywhere)
    UCameraData* m_ParentCamera;
    
public:
    UCameraData();
};

