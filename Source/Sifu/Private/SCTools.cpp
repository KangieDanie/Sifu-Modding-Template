#include "SCTools.h"

class UGameInstance;
class UObject;
class UWorld;

EQuadrantTypes USCTools::GetAttackQuadrant(EQuadrantTypes _eQuadrant, bool _bIsMirror) {
    return EQuadrantTypes::FrontLeft;
}

void USCTools::BPF_ModifyObject(UObject* _object) {
}

bool USCTools::BPF_IsDesktopPlatform() {
    return false;
}

FString USCTools::BPF_GetMapPath(TSoftObjectPtr<UWorld> _map) {
    return TEXT("");
}

UGameInstance* USCTools::BPF_GetGameInstanceNoWarning(const UObject* _worldContextObject) {
    return NULL;
}

UObject* USCTools::BPF_GetDefaultObject(UClass* _ObjectClass) {
    return NULL;
}

//EPlatform USCTools::BPF_GetCurrentSubsystemPlatform(const UObject* _worldContextObject) {
//    return EPlatform::STEAM;
//}

void USCTools::BPF_FadeWithoutWait(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack) {
}

void USCTools::BPF_Fade(UObject* WorldContextObject, const float _fDuration, const bool _bToBlack, FLatentActionInfo LatentInfo) {
}

USCTools::USCTools() {
}

