#pragma once
#include "CoreMinimal.h"
#include "InputMappingKeySlotContainer.h"
#include "InputPriorityGroup.h"
//CROSS-MODULE INCLUDE: CoreUObject Class
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "InputMappingKeySlot.h"
#include "InputMappingGroup.h"
#include "InputMappingData.h"
#include "InputMappingProfileEnumHandler.h"
#include "InputPresetsEnumHandler.h"
#include "MappingEditorHelpers.generated.h"

UCLASS()
class UMappingEditorHelpers : public UClass {
    GENERATED_BODY()
public:
    UFUNCTION()
    static FString BPF_GetInputPriorityGroupDesc(const FInputPriorityGroup& _group);
    
    UFUNCTION()
    static bool BPF_GetInputMappingShowSlot(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION()
    static bool BPF_GetInputMappingShowData(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION()
    static FString BPF_GetInputMappingKeySlotDesc(const FInputMappingKeySlot& _slot);
    
    UFUNCTION()
    static FString BPF_GetInputMappingKeySlotContainerTitle(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION()
    static FString BPF_GetInputMappingKeySlotContainerDesc(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION()
    static FString BPF_GetInputMappingGroupTitle(const FInputMappingGroup& _mapping);
    
    UFUNCTION()
    static FString BPF_GetInputMappingGroupDesc(const FInputMappingGroup& _mapping);
    
    UFUNCTION()
    static FLinearColor BPF_GetInputMappingGroupColor(const FInputMappingGroup& _mapping);
    
    UFUNCTION()
    static FString BPF_GetInputMappingDataSlotDesc(const FInputMappingData& _data);
    
    UFUNCTION()
    static bool BPF_GetInputMappingDataShowSlot(const FInputMappingData& _slot);
    
    UFUNCTION()
    bool BPF_FindInputProfileAvailableKey(FInputMappingProfileEnumHandler& _modifier, int32 _iIndex);
    
    UFUNCTION()
    static bool BPF_FindInputPresetAvailableKey(FInputPresetsEnumHandler& _modifier, int32 iIndex);
    
    UMappingEditorHelpers();
};

