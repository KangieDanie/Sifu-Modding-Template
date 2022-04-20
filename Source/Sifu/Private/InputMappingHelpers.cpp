#include "InputMappingHelpers.h"

class ASCPlayerController;
class UInputMappingProfileDB;
class UGenericInputData;

bool UInputMappingHelpers::ValidateMappingForPreset(const FInputMappingProfileData& _mappingContext, const FInputMappingGroup& _context, const FInputPresetsEnumHandler& _preset, InputContext _eContext, const FInputMappingData& _mapping, TArray<FMappingValidationError>& _outErrors, bool _bDetectCollisions) {
    return false;
}

bool UInputMappingHelpers::EqualEqual_MappingID(const FMappingID& _ID1, const FMappingID& _ID2) {
    return false;
}

bool UInputMappingHelpers::EqualEqual_MappingData(const FInputMappingData& _data1, const FInputMappingData& _data2) {
    return false;
}

FText UInputMappingHelpers::Conv_MappingIDToText(const FMappingID& _ID) {
    return FText::GetEmpty();
}

FMappingID UInputMappingHelpers::Conv_InputPresetsEnumHandlerToMappingID(const FInputPresetsEnumHandler& _handler, InputContext _eContext) {
    return FMappingID{};
}

FMappingID UInputMappingHelpers::Conv_InputActionToMappingID(InputAction _action, InputContext _eContext) {
    return FMappingID{};
}

FInputMappingProfileEnumHandler UInputMappingHelpers::Conv_EnumToProfileID(const FSCUserDefinedEnumHandler& _ID) {
    return FInputMappingProfileEnumHandler{};
}

bool UInputMappingHelpers::BPF_ValidateMapping(const FInputMappingProfileData& _mappingContext, const FMappingID& _item, const FInputMappingData& _mapping, TArray<FMappingValidationError>& _outErrors, bool _bDetectCollisions) {
    return false;
}

bool UInputMappingHelpers::BPF_ValidateCompleteMapping(const FInputMappingProfileData& _mapping, TArray<FMappingValidationError>& _outErrors) {
    return false;
}

bool UInputMappingHelpers::BPF_SetMapping(FInputMappingProfileData& _inOutMappingContext, const FMappingID& _item, const FInputMappingData& _mapping) {
    return false;
}

void UInputMappingHelpers::BPF_SetHoldToggleEnabled(bool _bActivated) {
}

void UInputMappingHelpers::BPF_SetCurrentMappingProfile(ASCPlayerController* _controller, const FInputMappingProfileEnumHandler& _profile, bool _bGamePad) {
}

void UInputMappingHelpers::BPF_SaveCustomInputMapping(ASCPlayerController* _controller, FInputMappingProfileData& _mappingContext, bool _bGamePad) {
}

void UInputMappingHelpers::BPF_ResolveConflicts(FInputMappingProfileData& _inOutMappingContext, const FMappingID& _item, TArray<FMappingID>& _outResettedItems) {
}

FMappingID UInputMappingHelpers::BPF_MakeMappingID(const FInputPresetsEnumHandler& _PresetID, InputAction _eAction, InputContext _eContext) {
    return FMappingID{};
}

bool UInputMappingHelpers::BPF_IsValid(const FInputMappingData& _data, const FInputMappingProfileData& _mappingContext) {
    return false;
}

bool UInputMappingHelpers::BPF_IsEmpty(const FInputMappingData& _data, const FInputMappingProfileData& _mappingContext) {
    return false;
}

bool UInputMappingHelpers::BPF_IsDependencyBrokenWithPreset(const FInputMappingProfileData& _inOutRemapping, const FMappingID& _ID) {
    return false;
}

void UInputMappingHelpers::BPF_GetMappingResult(const FInputMappingProfileData& _mappingContext, const FMappingID& _ID, FInputMappingNode& _outResultNode) {
}

void UInputMappingHelpers::BPF_GetMappingProfiles(TMap<FInputMappingProfileEnumHandler, UInputMappingProfileDB*>& _outResult, bool _bGamePad) {
}

UInputMappingProfileDB* UInputMappingHelpers::BPF_GetMappingProfileDB(const FInputMappingProfileEnumHandler& _profileID) {
    return NULL;
}

void UInputMappingHelpers::BPF_GetMapping(const FInputMappingProfileData& _mappingContext, const FMappingID& _ID, FInputMappingData& _outMapping) {
}

EKeyboardLayout UInputMappingHelpers::BPF_GetKeyboardLayout() {
    return EKeyboardLayout::Azerty;
}

bool UInputMappingHelpers::BPF_GetHoldToggleEnabled() {
    return false;
}

void UInputMappingHelpers::BPF_GetDefaultMapping(const ASCPlayerController* _controller, FInputMappingProfileData& _mappingContext, bool _bGamePad) {
}

void UInputMappingHelpers::BPF_GetDefaultInputMapping(ASCPlayerController* _controller, const FMappingID& _ID, FInputMappingData& _outMapping, bool _bGamePad) {
}

FInputMappingProfileEnumHandler UInputMappingHelpers::BPF_GetCurrentMappingProfile(bool _bGamePad) {
    return FInputMappingProfileEnumHandler{};
}

void UInputMappingHelpers::BPF_GetCurrentMapping(FInputMappingProfileData& _outMappingContext, bool _bGamePad) {
}

void UInputMappingHelpers::BPF_GetAvailableInputDatas(const FInputMappingProfileData& _mappingContext, bool _bGamePad, const FMappingID& _mappingID, const FInputMappingData& _mappingData, TArray<UGenericInputData*>& _outAvailableInputData) {
}

FInt32Range UInputMappingHelpers::BPF_GetAuthorizedCombinationCount(const FMappingID& _mappingID, bool _bGamePad) {
    return FInt32Range{};
}

bool UInputMappingHelpers::BPF_CreateMappingFromSlots(const FInputMappingProfileData& _inMappingContext, const FMappingID& _item, const TArray<FInputMappingKeySlotContainer>& _slots, FInputMappingData& _outMapping, bool _bBreakDependencies, bool _bGamePad) {
    return false;
}

void UInputMappingHelpers::BPF_BuildContextFromProfile(FInputMappingProfileData& _outMappingContext, FInputMappingProfileEnumHandler _profile) {
}

void UInputMappingHelpers::BPF_BreakMappingID(const FMappingID& _mappingID, bool& _bOutUsePreset, InputAction& _eOutAction, FInputPresetsEnumHandler& _eOutPreset) {
}

FInputMappingData UInputMappingHelpers::BPF_BreakDependencyWithPreset(const FInputMappingProfileData& _inOutMappingContext, const FInputMappingData& _mapping) {
    return FInputMappingData{};
}

void UInputMappingHelpers::BPF_ApplyInputRemapping(ASCPlayerController* _controller, const FInputMappingProfileData& _mappingContext) {
}

void UInputMappingHelpers::BPF_ApplyCurrentInputMapping(ASCPlayerController* _controller) {
}

UInputMappingHelpers::UInputMappingHelpers() {
}

