#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EOSSubsystem.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSSubsystemOnAddWidgetToViewport, UUserWidget*, Widget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSSubsystemOnRemoveWidgetFromViewport, UUserWidget*, Widget);

UCLASS()
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEOSSubsystemOnAddWidgetToViewport OnAddWidgetToViewport;
    
    UPROPERTY(BlueprintAssignable)
    FEOSSubsystemOnRemoveWidgetFromViewport OnRemoveWidgetFromViewport;
    
    UEOSSubsystem();
};

