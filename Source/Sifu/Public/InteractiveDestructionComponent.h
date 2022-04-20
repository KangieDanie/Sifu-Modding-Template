#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "DestructibleStateInfo.h"
#include "HealthComponent.h"
#include "FXInfo.h"
//CROSS-MODULE INCLUDE: Engine CollisionProfileName
#include "Engine/CollisionProfile.h"
#include "InteractiveDestructionComponent.generated.h"

class UStaticMesh;
class UMeshComponent;
class USkeletalMesh;
class UStaticMeshComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractiveDestructionComponentOnStateChanged, int32, _iNewState);

UCLASS()
class SIFU_API UInteractiveDestructionComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractiveDestructionComponentOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_iHitByCharaDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_iHitByObjectDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FDestructibleStateInfo> m_DestructibleStateInfo;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    TArray<UMeshComponent*> m_aOwnerMeshToSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* m_DestroyedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* m_DestroyedSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFXInfo m_ImpactParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFXInfo m_BreakParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    TArray<UStaticMeshComponent*> m_SimChunks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vRandomSpreadAmplitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseCustomCollisionProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionProfileName m_DeactivatedChunkCollisionProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fChunkDeactivationDelay;
    
public:
    UFUNCTION(BlueprintPure)
    int32 BPF_GetStateIndex() const;
    
    UInteractiveDestructionComponent();
};

