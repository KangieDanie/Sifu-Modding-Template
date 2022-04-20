#include "ReplaySpectatorPawnMovement.h"

void UReplaySpectatorPawnMovement::BPF_SetDirectionConstraintDelegate(FReplaySpectatorPawnMovementDelegate _delegate) {
}

FVector UReplaySpectatorPawnMovement::BPF_GetConstrainedDirection(const FVector& _vLeashOrigin, const FVector& _vLeashSize, const FVector& _vCurrentLocation, const FVector& _vDirection, bool& _bOutConstrained) const {
    return FVector{};
}

UReplaySpectatorPawnMovement::UReplaySpectatorPawnMovement() {
}

