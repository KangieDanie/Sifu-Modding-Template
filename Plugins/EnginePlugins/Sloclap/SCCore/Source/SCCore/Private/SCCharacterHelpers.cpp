#include "SCCharacterHelpers.h"

class ACharacter;

bool USCCharacterHelpers::BPF_TryGetRootBoneTransform(const ACharacter* _character, FTransform& _outBoneTransform, bool _bComponentSpace) {
    return false;
}

bool USCCharacterHelpers::BPF_TryGetPelvisBoneTransform(const ACharacter* _character, FTransform& _outPevlisTransform) {
    return false;
}

FVector USCCharacterHelpers::BPF_GetFloorNormal(const ACharacter* _character) {
    return FVector{};
}

USCCharacterHelpers::USCCharacterHelpers() {
}

