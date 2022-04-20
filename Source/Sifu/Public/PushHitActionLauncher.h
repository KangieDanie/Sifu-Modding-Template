#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitActionLauncher.h"
#include "PushHitActionLauncher.generated.h"

class UPushConfiguration;
class UNavigationQueryFilter;

UCLASS(Abstract, EditInlineNew)
class SIFU_API UPushHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UPushConfiguration* m_PushConfiguration;
    
    UPROPERTY(EditAnywhere, Instanced)
    UHitActionLauncher* m_fallbackHitAction;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAIWallDistance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_filterClass;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceAIPushDirection;
    
    UPROPERTY(EditAnywhere)
    float m_fForcedAILocalDirectionAngle;
    
    UPushHitActionLauncher();
};

