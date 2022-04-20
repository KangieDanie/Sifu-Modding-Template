#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: SCCore SCGestureAndBlendProfile
#include "SCGestureAndBlendProfile.h"
#include "SCConditionnalGestureAndBlendProfile.h"
#include "FidgetDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UFidgetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_fTimerRange;
    
    UPROPERTY(EditAnywhere)
    TArray<FSCConditionnalGestureAndBlendProfile> m_Anims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    
    UFUNCTION(BlueprintCallable)
    FSCGestureAndBlendProfile BPF_GetGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintCallable)
    FSCConditionnalGestureAndBlendProfile BPF_GetConditionnalGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintPure)
    float BPF_ComputeTimer() const;
    
    UFidgetDB();
};

