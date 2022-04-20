#pragma once
#include "CoreMinimal.h"
#include "HandledWeaponInfo.generated.h"

class UVisibleWeaponData;
class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FHandledWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<UVisibleWeaponData> m_Data;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<AActor> m_WeaponOwner;
    
    FHandledWeaponInfo();
};

