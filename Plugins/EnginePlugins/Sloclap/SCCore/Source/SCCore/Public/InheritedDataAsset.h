#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InheritedDataAsset.generated.h"

class UInheritedDataAsset;

UCLASS(Abstract)
class SCCORE_API UInheritedDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInheritedDataAsset* m_Parent;
    
    UInheritedDataAsset();
};

