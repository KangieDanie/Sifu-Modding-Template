#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
//CROSS-MODULE INCLUDE: SCCore SCCollisionResponseTemplate
#include "SCCollisionResponseTemplate.h"
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
#include "StateWeight.h"
#include "FocusDB.generated.h"

class AAimingBillboardActor;
class AVitalPointActor;

UCLASS(BlueprintType)
class UFocusDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_FocusTargetSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AAimingBillboardActor> m_ClassOfBillBoardToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_BoneToAttachBillboard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AVitalPointActor> m_ClassOfVitalPointToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponseTemplate m_collisionTemplate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eFocusTraceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fTimeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fMaxDist;
    
    UPROPERTY(EditAnywhere)
    FStateWeight m_BonusStateWeightOnCameraWhenExitFocus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimContainer m_PrepFocusAnimContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSlowMotionFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fCameraSlowMotionFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAnimationSlowMotionFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDelayBeforeFocusExecution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSlowMoFactorBeforeFocusExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSCUserDefinedEnumHandler m_WidgetPoolEnumEntry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPostProcessFadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fPostProcessFadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fVitalPointsFXFadeInDuration;
    
    UFocusDB();
};

