#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SkySphere.generated.h"

class UMaterialInstance;

UCLASS()
class SIFU_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstance* BaseMaterial;
    
    ASkySphere();
};

