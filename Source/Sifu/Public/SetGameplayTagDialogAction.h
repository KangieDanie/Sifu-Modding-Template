#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCDialogManagerPlugin DialogActionBase
#include "DialogActionBase.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
#include "SetGameplayTagDialogAction.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USetGameplayTagDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bAdd;
    
    UPROPERTY(EditAnywhere)
    FName m_Owner;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_GameplayTag;
    
public:
    USetGameplayTagDialogAction();
};

