#pragma once
#include "CoreMinimal.h"
#include "SCPlayerStart.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "CheckPoint.generated.h"

class UBoxComponent;
class UPrimitiveComponent;
class AActor;

UCLASS()
class SIFU_API ACheckPoint : public ASCPlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* m_TriggerCheckpointEnter;
    
private:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetNewCheckPointInSave();
    
    ACheckPoint();
};

