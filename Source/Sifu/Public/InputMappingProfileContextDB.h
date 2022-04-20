#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InputMappingGroup.h"
#include "InputMapping.h"
#include "InputMappingProfileContextDB.generated.h"

UCLASS()
class UInputMappingProfileContextDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInputMappingGroup> m_MappingGroups;
    
    UFUNCTION()
    FString BPF_GetInputMappingDesc(const FInputMapping& _mapping);
    
    UInputMappingProfileContextDB();
};

