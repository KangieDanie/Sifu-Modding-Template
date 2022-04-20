#pragma once
#include "CoreMinimal.h"
#include "InheritedDataAsset.h"
#include "SCLevelSequenceRoleData.generated.h"

UCLASS()
class SCCORE_API USCLevelSequenceRoleData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    FName m_AnchorBoneName;
    
    USCLevelSequenceRoleData();
};

