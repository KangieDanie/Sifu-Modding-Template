#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SCGameInstance.generated.h"

class UObject;

UCLASS(NonTransient)
class SCCORE_API USCGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    bool m_bEnableDevMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UObject*> m_ObjectToLoadAtBegining;
    
    UFUNCTION(Exec)
    void TriggerPGOWriteFile();
    
public:
    USCGameInstance();
};

