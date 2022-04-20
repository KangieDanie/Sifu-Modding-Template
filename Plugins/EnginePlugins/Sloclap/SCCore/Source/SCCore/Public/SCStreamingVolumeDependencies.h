#pragma once
#include "CoreMinimal.h"
#include "SCStreamingVolumeDependency.h"
#include "SCStreamingVolumeDependencies.generated.h"

class ASCLevelStreamingVolume;

USTRUCT(BlueprintType)
struct SCCORE_API FSCStreamingVolumeDependencies {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ASCLevelStreamingVolume*> m_Volumes;
    
    UPROPERTY(EditAnywhere)
    TArray<FSCStreamingVolumeDependency> m_VolumeDependencies;
    
    FSCStreamingVolumeDependencies(){};
};

