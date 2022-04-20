#pragma once
#include "CoreMinimal.h"
#include "SCStreamingVolumeDependency.generated.h"

class ASCLevelStreamingVolume;

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingVolumeDependency {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ASCLevelStreamingVolume* m_Volume;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecursive;
    
    FSCStreamingVolumeDependency(){};
};

