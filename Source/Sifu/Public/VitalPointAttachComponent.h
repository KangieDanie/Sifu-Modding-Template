#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "VitalPointAttachComponent.generated.h"

class UVitalPointData;

UCLASS(BlueprintType)
class SIFU_API UVitalPointAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVitalPointData* m_VitalPointData;
    
    UVitalPointAttachComponent();
};

