#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionFetchObject.generated.h"

class AActor;
class UOrderComponent;

UCLASS()
class SIFU_API UAIActionFetchObject : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bFetchClosestWeaponIfNotSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUsePerceptionToFindWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    AActor* m_ObjectToFetch;
    
    UFUNCTION()
    void OnPickupStarting(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetObjectToFetch(AActor* _objectToFetch);
    
    UAIActionFetchObject();
};

