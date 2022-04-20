#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimDrivenComputationMethod.h"
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BehaviorTree/BTService.h"
#include "EOrderType.h"
#include "AnimDrivenCameraOrderBTService.generated.h"

class UCameraData;
class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAnimDrivenCameraOrderBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceAsCurrentCamera;
    
    UPROPERTY(EditAnywhere)
    bool m_bWaitForFirstFrameOrderService;
    
    UPROPERTY(EditAnywhere)
    ECameraAnimDrivenComputationMethod m_eComputationMethod;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UCameraComponentThird> m_cameraComponent;
    
    UFUNCTION(BlueprintImplementableEvent)
    UCameraData* GetCameraData() const;
    
public:
    UAnimDrivenCameraOrderBTService();
};

