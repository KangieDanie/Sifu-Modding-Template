#pragma once
#include "CoreMinimal.h"
#include "DamagedWeaponInfo.h"
#include "InteractiveDestructionComponent.h"
#include "WeaponDestructionComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponDestructionComponent_OnDamagedWeaponSwitch, int32, _iWeaponIdx);

UCLASS()
class SIFU_API UWeaponDestructionComponent : public UInteractiveDestructionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FWeaponDestructionComponent_OnDamagedWeaponSwitch m_OnDamagedWeaponSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDamagedWeaponInfo> m_DamagedWeaponInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDelayForCurrentOrderStop;
    
public:
    UFUNCTION(BlueprintPure)
    int32 BPF_GetNumDamagedWeaponIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDamagedWeaponIndex() const;
    
    UWeaponDestructionComponent();
};

