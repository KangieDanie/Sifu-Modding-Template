#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "SCBasePlayerController.generated.h"

UCLASS()
class SCCORE_API ASCBasePlayerController : public APlayerController, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    ASCBasePlayerController();
    
    // Fix for true pure virtual functions not being implemented
};

