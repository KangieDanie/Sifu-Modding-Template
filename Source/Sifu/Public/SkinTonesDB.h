#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SkinToneGender.h"
#include "SkinTonesDB.generated.h"

class UMaterialInterface;

UCLASS()
class SIFU_API USkinTonesDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSkinToneGender> m_SkinTones;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_BaseFXMaterials[10];
    
    USkinTonesDB();
};

