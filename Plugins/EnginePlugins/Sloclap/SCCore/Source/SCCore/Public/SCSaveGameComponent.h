#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCSaveGameComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSCSaveGameComponentOnUpdatedFromSave);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSCSaveGameComponentOnPreSaveLevel);

UCLASS()
class SCCORE_API USCSaveGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSCSaveGameComponentOnUpdatedFromSave OnUpdatedFromSave;
    
    UPROPERTY(BlueprintAssignable)
    FSCSaveGameComponentOnPreSaveLevel OnPreSaveLevel;
    
    USCSaveGameComponent();
};

