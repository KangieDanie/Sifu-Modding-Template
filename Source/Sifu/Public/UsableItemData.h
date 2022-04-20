#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseItemData.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "UsableItemData.generated.h"

class AUsableItem;

UCLASS()
class SIFU_API UUsableItemData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fCooldown;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_Anims[4];
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AUsableItem> m_UsableItemClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_DBItemRowName;
    
    UPROPERTY(EditAnywhere)
    int32 m_iTargetRecquirements;
    
    UUsableItemData();
};

