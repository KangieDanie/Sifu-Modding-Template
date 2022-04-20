#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine HitResult
#include "FakePhysicComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class SIFU_API UFakePhysicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fZImpulse;
    
    UPROPERTY(EditAnywhere)
    float m_fImpulseReduc;
    
    UPROPERTY(EditAnywhere)
    FVector m_vAngularImpulse;
    
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* m_OverlappingComponent;
    
protected:
    UFUNCTION()
    void NotifyBeginOverlap(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetOverlappingComponent(UPrimitiveComponent* _primComp);
    
public:
    UFakePhysicComponent();
};

