#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitActionLauncher.h"
#include "GrabHitActionLauncher.generated.h"

class UDefenseAnimRequest;

UCLASS(EditInlineNew)
class SIFU_API UGrabHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDefenseAnimRequest> m_overridenDefenseRequest;
    
public:
    UGrabHitActionLauncher();
};

