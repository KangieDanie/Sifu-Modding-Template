#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActorCondition.h"
#include "CarriedWeaponCondition.generated.h"

class UBaseWeaponData;

UCLASS(BlueprintType)
class SIFU_API UCarriedWeaponCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bInvertCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UBaseWeaponData>> m_WeaponList;
    
    UCarriedWeaponCondition();
};

