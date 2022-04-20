#pragma once
#include "CoreMinimal.h"
// CROSS-MODULE INCLUDE: Engine ActorComponent
// CROSS-MODULE INCLUDE: AIModule CrowdAgentInterface
// CROSS-MODULE INCLUDE: SCCore ECharacterGender
#include "PlayerGenderSpecificData.h"
#include "Navigation/CrowdAgentInterface.h"
#include "Components/ActorComponent.h"
#include "PlayerFightingComponent.generated.h"

class UEquipmentSelectionData;
class AActor;
class UBaseMovementDB;
class USkeletalMesh;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerFightingComponentOnDialogStatusChanged);
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerFightingComponentOnGenderChanged, ECharacterGender, _eNewGender);

UCLASS(BlueprintType)
class SIFU_API UPlayerFightingComponent : public UActorComponent, public ICrowdAgentInterface
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing = OnRep_Dialog)
    bool m_bIsInDialog;

    UPROPERTY(BlueprintAssignable)
    FPlayerFightingComponentOnDialogStatusChanged OnDialogStatusChanged;

    UPROPERTY(BlueprintAssignable)
    FPlayerFightingComponentOnGenderChanged OnGenderChanged;

private:
    UPROPERTY(EditAnywhere)
    UEquipmentSelectionData *m_DefaultEquipmentSelection;

    UPROPERTY(EditAnywhere)
    float m_fLockMoveFadeDuration;

    UPROPERTY(EditAnywhere)
    float m_fEnemyBehindDist;

    UPROPERTY(EditAnywhere)
    float m_fEnemyBehindCosAngle;

    UPROPERTY(EditAnywhere)
    FPlayerGenderSpecificData m_ByGenderData[2];

    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_ManSkeletalMeshPath;

    UPROPERTY()
    TSoftObjectPtr<USkeletalMesh> m_WomanSkeletalMeshPath;

    UPROPERTY()
    TSoftObjectPtr<UBaseMovementDB> m_ManBaseMovementDBPath;

    UPROPERTY()
    TSoftObjectPtr<UBaseMovementDB> m_WomanBaseMovementDBPath;

    UPROPERTY(EditDefaultsOnly)
    ECharacterGender m_eForcedGender;

    UPROPERTY(EditAnywhere)
    bool m_bFakePlayer;

    UPROPERTY(EditDefaultsOnly)
    FName m_PlayerPositionMPCParameterName;

public:
    UFUNCTION()
    void OnTargetChangedCallback(AActor *_oldTarget, AActor *_newTarget);

private:
    UFUNCTION()
    void OnStatsUpdated();

    UFUNCTION()
    void OnRep_Dialog();

    UFUNCTION()
    void OnLanded();

public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsInEndOfMovesetTutorial(bool _bActivate);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetIsInDialog(bool _bInDialog);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;

    UPlayerFightingComponent();

    // Fix for true pure virtual functions not being implemented
};
