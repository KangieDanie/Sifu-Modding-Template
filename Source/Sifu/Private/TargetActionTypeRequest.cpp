#include "TargetActionTypeRequest.h"

class AActor;

EActionType UTargetActionTypeRequest::BPE_GetTargetActionType_Implementation(const AActor* _owner) const {
    return EActionType::LockMove;
}

UTargetActionTypeRequest::UTargetActionTypeRequest() {
}

