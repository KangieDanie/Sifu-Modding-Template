#include "MappingEditorHelpers.h"

FString UMappingEditorHelpers::BPF_GetInputPriorityGroupDesc(const FInputPriorityGroup& _group) {
    return TEXT("");
}

bool UMappingEditorHelpers::BPF_GetInputMappingShowSlot(const FInputMappingKeySlotContainer& _slot) {
    return false;
}

bool UMappingEditorHelpers::BPF_GetInputMappingShowData(const FInputMappingKeySlotContainer& _slot) {
    return false;
}

FString UMappingEditorHelpers::BPF_GetInputMappingKeySlotDesc(const FInputMappingKeySlot& _slot) {
    return TEXT("");
}

FString UMappingEditorHelpers::BPF_GetInputMappingKeySlotContainerTitle(const FInputMappingKeySlotContainer& _slot) {
    return TEXT("");
}

FString UMappingEditorHelpers::BPF_GetInputMappingKeySlotContainerDesc(const FInputMappingKeySlotContainer& _slot) {
    return TEXT("");
}

FString UMappingEditorHelpers::BPF_GetInputMappingGroupTitle(const FInputMappingGroup& _mapping) {
    return TEXT("");
}

FString UMappingEditorHelpers::BPF_GetInputMappingGroupDesc(const FInputMappingGroup& _mapping) {
    return TEXT("");
}

FLinearColor UMappingEditorHelpers::BPF_GetInputMappingGroupColor(const FInputMappingGroup& _mapping) {
    return FLinearColor{};
}

FString UMappingEditorHelpers::BPF_GetInputMappingDataSlotDesc(const FInputMappingData& _data) {
    return TEXT("");
}

bool UMappingEditorHelpers::BPF_GetInputMappingDataShowSlot(const FInputMappingData& _slot) {
    return false;
}

bool UMappingEditorHelpers::BPF_FindInputProfileAvailableKey(FInputMappingProfileEnumHandler& _modifier, int32 _iIndex) {
    return false;
}

bool UMappingEditorHelpers::BPF_FindInputPresetAvailableKey(FInputPresetsEnumHandler& _modifier, int32 iIndex) {
    return false;
}

UMappingEditorHelpers::UMappingEditorHelpers() {
}

