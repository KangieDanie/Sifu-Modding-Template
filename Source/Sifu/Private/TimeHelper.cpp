#include "TimeHelper.h"

class UWorld;
class UObject;

float UTimeHelper::GetDiffBetweenToDateTimeInSeconds(const FDateTime& _dateTimeA, const FDateTime& _dateTimeB) {
    return 0.0f;
}

FDateTime UTimeHelper::GetCurrentSynchedTimeInDateTime(const UWorld* _world) {
    return FDateTime{};
}

float UTimeHelper::BPF_GetDeltaTimeSlowMotionIndependant(UObject* _worldContextObject, float _fCurrentDt, float _fSlowMotionFactor) {
    return 0.0f;
}

FDateTime UTimeHelper::AddDelayToDateTime(const FDateTime& _dateTime, float _fDelayInSeconds) {
    return FDateTime{};
}

UTimeHelper::UTimeHelper() {
}

