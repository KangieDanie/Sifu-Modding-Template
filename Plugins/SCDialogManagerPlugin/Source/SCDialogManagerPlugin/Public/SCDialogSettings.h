#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsModule.h"
#include "Engine/EngineTypes.h"
#include "SCDialogSettings.generated.h"

class UDataTable;
class UBlackboardData;
class USCDialogRealOverrideDb;

UCLASS(DefaultConfig, Config=Game)
class SCDIALOGMANAGERPLUGIN_API USCDialogSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> m_GenericDialogs;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> m_GenericConversations;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> m_BarksGenericDialogs;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> m_BarksGenericConversations;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UBlackboardData> m_GlobalFacts;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UBlackboardData> m_ContextualFacts;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UBlackboardData> m_CharacterFacts;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> m_PhonemeDictionary;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> m_EventToSoundFileTable;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_DialogCutEvent;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_DialogLineStartAkEvent;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_DialogLineStopAkEvent;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fDefaultTimeBetweenLines;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<USCDialogRealOverrideDb> m_DefaultDialogReal;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath m_DialogSoundFilesPath;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath m_DialogEnvelopeFilesPath;
    
    USCDialogSettings();
};

