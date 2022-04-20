#pragma once
#include "CoreMinimal.h"
#include "VitalPointDataDefinition.h"
//CROSS-MODULE INCLUDE: SCCore SCActor
#include "SCActor.h"
#include "VitalPointActor.generated.h"

class AVitalPointActor;
class AAimingBillboardActor;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVitalPointActorOnSelectionChangedDyn, bool, _bSelected, AVitalPointActor*, vitalPoint);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVitalPointActorOnVitalPointValidated, AVitalPointActor*, vitalPoint);

UCLASS()
class SIFU_API AVitalPointActor : public ASCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FVitalPointActorOnSelectionChangedDyn OnSelectionChangedDyn;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FVitalPointActorOnVitalPointValidated OnVitalPointValidated;
    
private:
    UFUNCTION()
    void OnBillBoardSelectionChanged(bool _bSelected, AAimingBillboardActor* _billboard);
    
public:
    UFUNCTION(BlueprintPure)
    FVitalPointDataDefinition BPF_GetDefinition() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
    AVitalPointActor();
};

