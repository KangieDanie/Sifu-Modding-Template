#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshActor
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "Engine/StaticMeshActor.h"
#include "Engine/EngineTypes.h"
#include "Killzone.generated.h"

class UBoxComponent;
class UPrimitiveComponent;
class AFightingCharacter;
class AActor;

UCLASS()
class SIFU_API AKillzone : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UBoxComponent* m_BoxComponent;
    
    UFUNCTION()
    void OnBoxTouched(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPF_IsKillzoneActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnBoxTouched(AFightingCharacter* _Char, const FVector& _vImpactpoint);
    
    AKillzone();
};

