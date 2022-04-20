#include "CgSDKBlueprint.h"

bool UCgSDKBlueprint::ShowProgressBar(const FString& progressBarName) {
    return false;
}

bool UCgSDKBlueprint::SetStateWithKey(const FString& StateName, TEnumAsByte<FCgSdkLedId> Key) {
    return false;
}

bool UCgSDKBlueprint::SetState(const FString& StateName) {
    return false;
}

bool UCgSDKBlueprint::SetProgressBarValue(const FString& progressBarName, int32 Value) {
    return false;
}

bool UCgSDKBlueprint::SetGame(const FString& gameName) {
    return false;
}

bool UCgSDKBlueprint::SetEventWithKey(const FString& EventName, TEnumAsByte<FCgSdkLedId> Key) {
    return false;
}

bool UCgSDKBlueprint::SetEvent(const FString& EventName) {
    return false;
}

bool UCgSDKBlueprint::RequestControl() {
    return false;
}

bool UCgSDKBlueprint::ReleaseControl() {
    return false;
}

void UCgSDKBlueprint::PerformProtocolHandshake() {
}

bool UCgSDKBlueprint::HideProgressBar(const FString& progressBarName) {
    return false;
}

bool UCgSDKBlueprint::ClearStateWithKey(const FString& StateName, TEnumAsByte<FCgSdkLedId> Key) {
    return false;
}

bool UCgSDKBlueprint::ClearState(const FString& StateName) {
    return false;
}

bool UCgSDKBlueprint::ClearAllStates() {
    return false;
}

bool UCgSDKBlueprint::ClearAllEvents() {
    return false;
}

UCgSDKBlueprint::UCgSDKBlueprint() {
}

