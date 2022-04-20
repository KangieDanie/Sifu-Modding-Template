#pragma once
#include "CoreMinimal.h"
#include "InputMappingProfileEnumHandler.h"
#include "FilterProperties.h"
#include "SaveAdditionalInfos.h"
#include "InputMappingProfileData.h"
#include "ProfileData.generated.h"

USTRUCT(BlueprintType)
struct FProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FFilterProperties> m_FilterPresets;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float m_GameOptions[37];
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TMap<FString, FSaveAdditionalInfos> m_SaveAdditionalInfoMap;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FInputMappingProfileEnumHandler m_GamepadProfile;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FInputMappingProfileEnumHandler m_KeyboardProfile;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FInputMappingProfileData m_GamepadCustomMapping;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FInputMappingProfileData m_KeyboardCustomMapping;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    bool m_bInputHoldToggleActivated;
    
    SIFU_API FProfileData();
};

