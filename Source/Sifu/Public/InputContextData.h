#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InputActionData.h"
#include "InputContext.h"
#include "InputAction.h"
#include "InputMappingGroup.h"
#include "InputContextData.generated.h"

class UGenericInputData;

UCLASS()
class UInputContextData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputContext m_contextType;
    
    UPROPERTY(EditAnywhere)
    bool m_disableOther;
    
    UPROPERTY(EditAnywhere)
    bool m_bPauseOther;
    
    UPROPERTY(EditAnywhere)
    TMap<InputAction, FInputActionData> m_InputActionSettings;
    
    UPROPERTY()
    TArray<UGenericInputData*> m_inputActions;
    
    UPROPERTY()
    TArray<FInputMappingGroup> m_DefaultGamepadMapping;
    
    UPROPERTY()
    TArray<FInputMappingGroup> m_DefaultKeyboadMapping;
    
    UFUNCTION()
    void CreateOwners();
    
    UFUNCTION()
    void ClearUnUsedInputs();
    
    UFUNCTION()
    void Clear();
    
    UFUNCTION()
    void Build();
    
    UInputContextData();
};

