#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "InputMappingGroup.h"
#include "InputMappingProfileData.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "InputPresetsEnumHandler.h"
#include "MappingID.h"
#include "InputMappingData.h"
#include "InputContext.h"
#include "MappingValidationError.h"
#include "InputAction.h"
#include "InputMappingProfileEnumHandler.h"
#include "InputMappingNode.h"
#include "EKeyboardLayout.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
#include "InputMappingKeySlotContainer.h"
#include "InputMappingHelpers.generated.h"

class ASCPlayerController;
class UInputMappingProfileDB;
class UGenericInputData;

UCLASS(BlueprintType)
class UInputMappingHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool ValidateMappingForPreset(const FInputMappingProfileData& _mappingContext, const FInputMappingGroup& _context, const FInputPresetsEnumHandler& _preset, InputContext _eContext, const FInputMappingData& _mapping, TArray<FMappingValidationError>& _outErrors, bool _bDetectCollisions);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_MappingID(const FMappingID& _ID1, const FMappingID& _ID2);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_MappingData(const FInputMappingData& _data1, const FInputMappingData& _data2);
    
    UFUNCTION(BlueprintPure)
    static FText Conv_MappingIDToText(const FMappingID& _ID);
    
    UFUNCTION(BlueprintPure)
    static FMappingID Conv_InputPresetsEnumHandlerToMappingID(const FInputPresetsEnumHandler& _handler, InputContext _eContext);
    
    UFUNCTION(BlueprintPure)
    static FMappingID Conv_InputActionToMappingID(InputAction _action, InputContext _eContext);
    
    UFUNCTION(BlueprintPure)
    static FInputMappingProfileEnumHandler Conv_EnumToProfileID(const FSCUserDefinedEnumHandler& _ID);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_ValidateMapping(const FInputMappingProfileData& _mappingContext, const FMappingID& _item, const FInputMappingData& _mapping, TArray<FMappingValidationError>& _outErrors, bool _bDetectCollisions);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_ValidateCompleteMapping(const FInputMappingProfileData& _mapping, TArray<FMappingValidationError>& _outErrors);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_SetMapping(UPARAM(Ref) FInputMappingProfileData& _inOutMappingContext, const FMappingID& _item, const FInputMappingData& _mapping);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetHoldToggleEnabled(bool _bActivated);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCurrentMappingProfile(ASCPlayerController* _controller, const FInputMappingProfileEnumHandler& _profile, bool _bGamePad);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SaveCustomInputMapping(ASCPlayerController* _controller, UPARAM(Ref) FInputMappingProfileData& _mappingContext, bool _bGamePad);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ResolveConflicts(UPARAM(Ref) FInputMappingProfileData& _inOutMappingContext, const FMappingID& _item, TArray<FMappingID>& _outResettedItems);
    
    UFUNCTION(BlueprintPure)
    static FMappingID BPF_MakeMappingID(const FInputPresetsEnumHandler& _PresetID, InputAction _eAction, InputContext _eContext);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsValid(const FInputMappingData& _data, const FInputMappingProfileData& _mappingContext);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsEmpty(const FInputMappingData& _data, const FInputMappingProfileData& _mappingContext);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsDependencyBrokenWithPreset(const FInputMappingProfileData& _inOutRemapping, const FMappingID& _ID);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetMappingResult(const FInputMappingProfileData& _mappingContext, const FMappingID& _ID, FInputMappingNode& _outResultNode);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetMappingProfiles(TMap<FInputMappingProfileEnumHandler, UInputMappingProfileDB*>& _outResult, bool _bGamePad);
    
    UFUNCTION(BlueprintPure)
    static UInputMappingProfileDB* BPF_GetMappingProfileDB(const FInputMappingProfileEnumHandler& _profileID);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetMapping(const FInputMappingProfileData& _mappingContext, const FMappingID& _ID, FInputMappingData& _outMapping);
    
    UFUNCTION(BlueprintPure)
    static EKeyboardLayout BPF_GetKeyboardLayout();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetHoldToggleEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetDefaultMapping(const ASCPlayerController* _controller, FInputMappingProfileData& _mappingContext, bool _bGamePad);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetDefaultInputMapping(ASCPlayerController* _controller, const FMappingID& _ID, FInputMappingData& _outMapping, bool _bGamePad);
    
    UFUNCTION(BlueprintPure)
    static FInputMappingProfileEnumHandler BPF_GetCurrentMappingProfile(bool _bGamePad);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetCurrentMapping(FInputMappingProfileData& _outMappingContext, bool _bGamePad);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAvailableInputDatas(const FInputMappingProfileData& _mappingContext, bool _bGamePad, const FMappingID& _mappingID, const FInputMappingData& _mappingData, TArray<UGenericInputData*>& _outAvailableInputData);
    
    UFUNCTION(BlueprintPure)
    static FInt32Range BPF_GetAuthorizedCombinationCount(const FMappingID& _mappingID, bool _bGamePad);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_CreateMappingFromSlots(const FInputMappingProfileData& _inMappingContext, const FMappingID& _item, const TArray<FInputMappingKeySlotContainer>& _slots, FInputMappingData& _outMapping, bool _bBreakDependencies, bool _bGamePad);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BuildContextFromProfile(FInputMappingProfileData& _outMappingContext, FInputMappingProfileEnumHandler _profile);
    
    UFUNCTION(BlueprintPure)
    static void BPF_BreakMappingID(const FMappingID& _mappingID, bool& _bOutUsePreset, InputAction& _eOutAction, FInputPresetsEnumHandler& _eOutPreset);
    
    UFUNCTION(BlueprintCallable)
    static FInputMappingData BPF_BreakDependencyWithPreset(const FInputMappingProfileData& _inOutMappingContext, const FInputMappingData& _mapping);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ApplyInputRemapping(ASCPlayerController* _controller, const FInputMappingProfileData& _mappingContext);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ApplyCurrentInputMapping(ASCPlayerController* _controller);
    
    UInputMappingHelpers();
};

