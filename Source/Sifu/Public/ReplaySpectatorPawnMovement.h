#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SpectatorPawnMovement
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GameFramework/SpectatorPawnMovement.h"

#include "ReplaySpectatorPawnMovement.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FVector, FReplaySpectatorPawnMovementDelegate, const FVector&, _vDirection);

UCLASS()
class SIFU_API UReplaySpectatorPawnMovement : public USpectatorPawnMovement {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetDirectionConstraintDelegate(FReplaySpectatorPawnMovementDelegate _delegate);
    
    UFUNCTION(BlueprintPure)
    FVector BPF_GetConstrainedDirection(const FVector& _vLeashOrigin, const FVector& _vLeashSize, const FVector& _vCurrentLocation, const FVector& _vDirection, bool& _bOutConstrained) const;
    
public:
    UReplaySpectatorPawnMovement();
};

