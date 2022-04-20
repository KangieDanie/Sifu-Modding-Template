#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "FidgetDBDescription.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "EOrderType.h"
#include "OrderFidgetDB.generated.h"

class UDataTable;
class UFidgetDB;

UCLASS()
class SIFU_API UOrderFidgetDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* m_BlendProfileBySpeedStateTable;
    
    UPROPERTY(EditAnywhere)
    float m_fSyncFidgetMirrorWithQuadrantCooldown;
    
    UPROPERTY(EditAnywhere)
    FFidgetDBDescription m_FidgetDBs[2];
    
    UPROPERTY(EditAnywhere)
    UFidgetDB* m_TakeOutWeaponFidgetDB;
    
    UPROPERTY(EditAnywhere)
    float m_fHideWeaponPostBlendRatio;
    
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_eTakeOutWeaponPostOrderList;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayAlertFidgetIfMoveStatusMatch;
    
    UPROPERTY(EditAnywhere)
    bool m_bPlayAlertFidgetIfMoveStatusDoesntMatch;
    
    UPROPERTY(EditAnywhere)
    float m_fFidgetDefaultBlendInDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fFidgetMaxBlendInDurationByAnimPercent;
    
    UPROPERTY(EditAnywhere)
    float m_fFidgetDefaultBlendOutDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fFidgetQuickBlendOutDuration;
    
    UOrderFidgetDB();
};

