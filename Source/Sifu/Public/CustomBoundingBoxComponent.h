#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoxComponent
#include "Components/BoxComponent.h"
#include "CustomBoundingBoxComponent.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UCustomBoundingBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_UsableSides;
    
    UCustomBoundingBoxComponent();
};

