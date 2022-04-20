#include "SCHelpers.h"
#include "Templates/SubclassOf.h"

class UCurveFloat;
class UObject;
class AActor;
class UWorld;
class UAbilityTask;

bool USCHelpers::BPF_TestExpressionInt(const FSCMathExpressionInteger& _expression, int32 _iInputValue) {
    return false;
}

bool USCHelpers::BPF_TestExpressionFloat(const FSCMathExpressionFloat& _expression, float _fInputValue) {
    return false;
}

void USCHelpers::BPF_SlowMotionFinisher(UObject* _context, UCurveFloat* _curve, FSCHelpersOnFinished _onFinished, float _fScale, bool _bIsRelevantForGameplay) {
}

void USCHelpers::BPF_SlowMotion(UObject* _context, UCurveFloat* _curve, float _fScale, bool _bIsRelevantForGameplay) {
}

void USCHelpers::BPF_SetLocalizationPreviewLanguage(const FString& _inCulture) {
}

bool USCHelpers::BPF_RandomBoolFromProbability(const float _fProba) {
    return false;
}

int32 USCHelpers::BPF_PushBlockSlowmotion(bool _bFreezeAnySlowmotion) {
    return 0;
}

void USCHelpers::BPF_PopBlockSlowmotion(int32 _iHandle, bool _bUnFreezeAnySlowmotion) {
}

bool USCHelpers::BPF_IsSlowMotionEnabled() {
    return false;
}

FSCTypedValue USCHelpers::BPF_IntToTypedValue(int32 _iValue) {
    return FSCTypedValue{};
}

bool USCHelpers::BPF_Int32RangeContains(const FInt32Range& _range, int32 _iValue) {
    return false;
}

void USCHelpers::BPF_InstantSlowMotion(UObject* _context, float _fScale, bool _bIsRelevantForGameplay) {
}

float USCHelpers::BPF_GetSlowMotionDebugUserValue() {
    return 0.0f;
}

float USCHelpers::BPF_GetSlowMotionDebugCoef() {
    return 0.0f;
}

TMap<FString, FText> USCHelpers::BPF_GetIsoCultureToDisplayName() {
    return TMap<FString, FText>();
}

UWorld* USCHelpers::BPF_GetEditorWorld() {
    return NULL;
}

AActor* USCHelpers::BPF_GetActorOfClassInWorld(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

FSCTypedValue USCHelpers::BPF_FloatToTypedValue(float _fValue) {
    return FSCTypedValue{};
}

void USCHelpers::BPF_EndTasks(const TArray<UAbilityTask*>& _tasks) {
}

bool USCHelpers::BPF_Contains(const FFloatRange& _FloatRange, float _fValue) {
    return false;
}

FSCTypedValue USCHelpers::BPF_BoolToTypedValue(bool _bValue) {
    return FSCTypedValue{};
}

void USCHelpers::BPF_AbortCurrentSlowMotion(UObject* _context, bool _bIsRelevantForGameplay) {
}

USCHelpers::USCHelpers() {
}

