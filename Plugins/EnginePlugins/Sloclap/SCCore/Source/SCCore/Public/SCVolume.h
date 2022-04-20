#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SCVolume.generated.h"

class ASCVolume;
class UPrimitiveComponent;
class AActor;

UCLASS()
class SCCORE_API ASCVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<ASCVolume*> m_ChildrenVolumes;
    
private:
    UPROPERTY(Transient)
    ASCVolume* m_ParentVolume;
    
protected:
    UFUNCTION()
    void InternalOnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void InternalOnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
public:
    ASCVolume();
};

