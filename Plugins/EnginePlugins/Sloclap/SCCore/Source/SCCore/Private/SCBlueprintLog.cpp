#include "SCBlueprintLog.h"

class UObject;

void USCBlueprintLog::BPFLogCategory(const FString& _text, FName _categoryName, DisplayLevel _eDisplayLevel) {
}

void USCBlueprintLog::BPFLog(const UObject* _targetSelf, const FString& _log, DisplayLevel _eDisplayLevel, bool _bViewportDisplay, FLinearColor _viewportColor) {
}

void USCBlueprintLog::BPF_VisualLogWithSpecificOwner(UObject* _owner, const FString& _category, DisplayLevel _eVerbosity, const FString& _inString) {
}

void USCBlueprintLog::BPF_VisualLogBox(UObject* _owner, const FString& _category, DisplayLevel _eVerbosity, const FVector& _position, float _size, const FColor& _color, const FString& _inString) {
}

void USCBlueprintLog::BPF_VisualLog(UObject* _worldContextObject, const FString& _category, DisplayLevel _eVerbosity, const FString& _inString) {
}

USCBlueprintLog::USCBlueprintLog() {
}

