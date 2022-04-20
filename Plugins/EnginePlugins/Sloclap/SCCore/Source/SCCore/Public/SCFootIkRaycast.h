#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCFootIkService.h"
#include "Engine/EngineTypes.h"
#include "SCFootIkRaycast.generated.h"

class USCFootIkAnimInstance;

UCLASS(BlueprintType)
class SCCORE_API USCFootIkRaycast : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fTraceUpLength;
    
    UPROPERTY(EditAnywhere)
    float m_fTraceDownLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;
    
public:
    UFUNCTION(BlueprintPure)
    bool DoRaycast(FHitResult& _outHitResult, USCFootIkAnimInstance* _footAnimInstance, const FVector& _vStart, const FVector& _vEnd) const;
    
    USCFootIkRaycast();
};

