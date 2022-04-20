#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCAIComponent
#include "SCAIComponent.h"
//CROSS-MODULE INCLUDE: SCCore SCSoundSwitchValue
#include "SCSoundSwitchValue.h"
#include "EAlertedReason.h"
#include "EGlobalBehaviors.h"
#include "AIComponent.generated.h"

class UArchetypeAsset;
class AAISpawner;
class UBehaviorTree;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIComponentOnSpawned, AAISpawner*, Spawner);

UCLASS(BlueprintType)
class SIFU_API UAIComponent : public USCAIComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAIComponentOnSpawned OnSpawned;
    
protected:
    UPROPERTY(Transient)
    UArchetypeAsset* m_CurrentAIArchetype;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSCSoundSwitchValue> m_VoiceArchetypeSwitches;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Spawner)
    AAISpawner* m_Spawner;
    
private:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* m_Behavior;
    
protected:
    UFUNCTION()
    void OnRep_Spawner();
    
    UFUNCTION()
    void OnAIInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_TriggerBehaviorChange(AActor* _alertedBy, const EGlobalBehaviors _eNewBehavior, const EAlertedReason _eAlertedReason, bool _bSkipBark);
    
    UFUNCTION(BlueprintPure)
    FSCSoundSwitchValue BPF_GetVoiceArchetypeSwitch() const;
    
    UFUNCTION(BlueprintPure)
    AAISpawner* BPF_GetSpawner() const;
    
    UFUNCTION(BlueprintPure)
    UArchetypeAsset* BPF_GetArchetypeData() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UAIComponent();
};

