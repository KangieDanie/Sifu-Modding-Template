#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DeltaTransformAudioStep.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "DeltaTransformAudioData.generated.h"

//class UAkAudioEvent;

UCLASS(BlueprintType)
class SIFU_API UDeltaTransformAudioData : public UDataAsset {
    GENERATED_BODY()
public:
   /* UPROPERTY(EditAnywhere)
    UAkAudioEvent* m_defaultAkEvent;*/
    
    UPROPERTY(EditAnywhere)
    TArray<FDeltaTransformAudioStep> m_Steps;
    
   /* UFUNCTION(BlueprintPure)
    UAkAudioEvent* GetAudioEvent(FTransform _from, FTransform _to) const;*/
    
    UDeltaTransformAudioData();
};

