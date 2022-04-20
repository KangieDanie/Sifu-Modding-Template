#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "SCPlayerVolume.generated.h"

class UPrimitiveComponent;
class AActor;


DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FourParams(FSCPlayerVolumeOnPlayerEndOverlap, ASCPlayerVolume, OnPlayerEndOverlap, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int, OtherBodyIndex);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_SixParams(FSCPlayerVolumeOnPlayerBeginOverlap, ASCPlayerVolume, OnPlayerBeginOverlap, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);


UCLASS()
class SCCORE_API ASCPlayerVolume : public ASCVolume {
    GENERATED_BODY()
public:

    

    UPROPERTY(BlueprintAssignable)
    FSCPlayerVolumeOnPlayerBeginOverlap OnPlayerBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FSCPlayerVolumeOnPlayerEndOverlap OnPlayerEndOverlap;
    
    ASCPlayerVolume();
};

