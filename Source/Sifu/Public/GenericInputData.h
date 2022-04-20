#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InputMappingKeySlotContainer.h"
#include "InputAction.h"
#include "GenericInputData.generated.h"

class UGenericInputData;
class UGenericInputUIData;

UCLASS(BlueprintType)
class SIFU_API UGenericInputData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bIsStackable;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsToggleable;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetToggleOnActivation;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetToggleOnAnyStackedAction;
    
    UPROPERTY(EditAnywhere)
    FString m_UISeparator;
    
    UPROPERTY(EditAnywhere)
    int32 m_uiUIKeyIndex;
    
    UPROPERTY()
    float m_fLifeSpan;
    
    UPROPERTY()
    TArray<InputAction> m_StackSiblings;
    
    UPROPERTY()
    TArray<InputAction> m_StackResetSiblings;
    
    UPROPERTY()
    TArray<InputAction> m_ResetOnEnterStack;
    
    UPROPERTY()
    TArray<InputAction> m_ConsumeOnEnterStack;
    
    UPROPERTY(BlueprintReadOnly)
    InputAction m_Action;
    
    UPROPERTY(EditAnywhere)
    bool m_bOnlyFallbackToKeyWithBestPrio;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwaysCollideWithOtherInputs;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetOnAnyActionStacked;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputMappingKeySlotContainer> m_BaseMappingSlots;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGenericInputData*> m_Fallbacks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UGenericInputUIData* m_UIData;
    
    UGenericInputData();
};

