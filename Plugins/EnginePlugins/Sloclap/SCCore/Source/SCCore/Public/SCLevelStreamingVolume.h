#pragma once
#include "CoreMinimal.h"
#include "SCPlayerVolumeNoPhysics.h"
#include "SCStreamingVolumeDependencies.h"
#include "SCLevelStreamingVolume.generated.h"

UCLASS()
class SCCORE_API ASCLevelStreamingVolume : public ASCPlayerVolumeNoPhysics {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bEnabled;
    
    UPROPERTY()
    FName m_LevelName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_LevelNames;
    
    UPROPERTY(EditAnywhere)
    FSCStreamingVolumeDependencies m_VolumeDependencies[3];
    
public:
    ASCLevelStreamingVolume();
};

