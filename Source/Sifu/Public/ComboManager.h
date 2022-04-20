#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ComboManager.generated.h"

class UCombo;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FComboManager_OnEnded);

UCLASS()
class SIFU_API UComboManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FComboManager_OnEnded m_OnEnded;
    
private:
    UPROPERTY(EditAnywhere)
    UCombo* m_Combo;
    
public:
    UComboManager();
};

