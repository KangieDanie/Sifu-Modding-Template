#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InputContext.h"
#include "InputMappingProfileDB.generated.h"

class UInputMappingProfileUIData;
class UInputMappingPresets;
class UInputMappingProfileContextDB;

UCLASS(BlueprintType)
class UInputMappingProfileDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bGamepadMapping;
    
    UPROPERTY(EditAnywhere)
    UInputMappingPresets* m_PresetDB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInputMappingProfileUIData* m_UIData;
    
    UPROPERTY(EditAnywhere)
    TMap<InputContext, UInputMappingProfileContextDB*> m_MappingPerContext;
    
    UInputMappingProfileDB();
};

