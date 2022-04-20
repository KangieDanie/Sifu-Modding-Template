#pragma once
#include "CoreMinimal.h"
#include "AlwaysCollidingActions.h"
//CROSS-MODULE INCLUDE: DeveloperSettings DeveloperSettings
#include "InputPriorityGroup.h"
#include "InputAction.h"
#include "InputPresetsEnumHandler.h"
#include "MappingProfileList.h"
#include "InputMappingData.h"
#include "InputMappingProfileEnumHandler.h"
#include "InputMappingCompatibilityRule.h"
#include "RemappingIncompatibilityGroup.h"
#include "ActionMappingCompatibilityRule.h"
#include "RemappingClasses.h"
#include "SCInputSettings.generated.h"

class UMenuDB;
class UGenericInputData;
class UInputMappingProfileDB;

UCLASS(DefaultConfig, Config=Game)
class SIFU_API USCInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    InputAction m_eInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    InputAction m_eAltInputAction;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bVirtualCursorAcceleration;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fVirtualCursorAcceleration;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fVirtualCursorMaxSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fVirtualCursorStickySlowdown;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fVirtualCursorDeadZone;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bSnapEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fSnapSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMenuDB> m_MenuDB;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bActivateRemapping;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FInputPriorityGroup> m_InputPriority;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAlwaysCollidingActions> m_AlwaysCollidingActions;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<InputAction> m_ActionPriority;
    
    UPROPERTY(Config)
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Mapping;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FInputMappingProfileEnumHandler, FMappingProfileList> m_MappingProfileList;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<InputAction> m_UnremappableActions;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FRemappingIncompatibilityGroup> m_IncompatibilityGroups;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<TSoftObjectPtr<UGenericInputData>, FInputMappingCompatibilityRule> m_InputCustomCompatibilityRules;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionMappingCompatibilityRule> m_ActionCompatibilityRules;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UGenericInputData> m_EmptyInputData;
    
    UPROPERTY(Config, EditAnywhere)
    FRemappingClasses m_BaseRemapClasses;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<InputAction, FRemappingClasses> m_CustomActionRemapping;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FInputPresetsEnumHandler, FRemappingClasses> m_CustomPresetRemapping;
    
private:
    UPROPERTY(Transient)
    UMenuDB* m_CachedMenuDB;
    
    UPROPERTY(Transient)
    TArray<UInputMappingProfileDB*> m_CachedProfiles;
    
    UPROPERTY(Transient)
    TArray<UGenericInputData*> m_CachedInputDatas;
    
public:
    USCInputSettings();
};

