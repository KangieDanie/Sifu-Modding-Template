#pragma once
#include "CoreMinimal.h"
#include "UObject/SoftObjectPath.h"
#include "SCVolumeClusterMaterialsPath.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCVolumeClusterMaterialsPath {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_RootMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_ChildrenMaterial;
    
    FSCVolumeClusterMaterialsPath(){};
};

