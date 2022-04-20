#include "SCAnimationHelper.h"
#include "Templates/SubclassOf.h"

class UAnimSequenceBase;
class UAnimNotify;
class UAnimationAsset;
class UAnimNotifyState;
class UAnimSequence;

bool USCAnimationHelper::HasInvalidNotifies(UAnimSequenceBase* _sequence, const FString& _inNotifyName) {
    return false;
}

void USCAnimationHelper::GetValidUniqueMarkerNames(UAnimationAsset* _animationAsset, bool& _bOutHasValidMarkers, TArray<FName>& _outMarkerNames) {
}

float USCAnimationHelper::GetNotifyTriggerTime(const FAnimNotifyEvent& _notify) {
    return 0.0f;
}

float USCAnimationHelper::GetNotifyEndTriggerTime(const FAnimNotifyEvent& _notify) {
    return 0.0f;
}

float USCAnimationHelper::GetNotifyDuration(const FAnimNotifyEvent& _notify) {
    return 0.0f;
}

void USCAnimationHelper::FindNotifyStateByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotifyState> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound) {
}

void USCAnimationHelper::FindNotifyByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotify> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound) {
}

void USCAnimationHelper::FindNotifiesStateByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotifyState> _class, bool _bIncludeChildren, TArray<FAnimNotifyEvent>& _outFoundNotifies) {
}

FTransform USCAnimationHelper::BPF_ExtractRootTrackTransform(UAnimSequence* _sequence, float _fAnimRatio) {
    return FTransform{};
}

USCAnimationHelper::USCAnimationHelper() {
}

