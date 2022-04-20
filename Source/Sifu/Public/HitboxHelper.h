#pragma once
#include "CoreMinimal.h"
#include "HitBoxMetaDataClassInstance.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "HitboxDataRow.h"
#include "HitBox.h"
#include "HitboxHelper.generated.h"

class UHitBoxMetaData;

UCLASS(BlueprintType)
class SIFU_API UHitboxHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetHitboxStructureDamage(const FHitBox& _hitbox, FHitBox& _outHitbox, float _fDamage);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetHitboxRow(UPARAM(Ref) FHitBox& _outHitbox, const FHitboxDataRow& _dataRow);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetHitboxDamageOnRef(UPARAM(Ref) FHitBox& _hitbox, float _fDamage);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetHitboxDamage(const FHitBox& _hitbox, FHitBox& _outHitbox, float _fDamage);
    
    UFUNCTION(BlueprintPure)
    static void BPF_MirrorAvoidDefenseMatrix(int32 _iDefenseMatrix, int32& _iOutResult, bool _bMirror);
    
    UFUNCTION(BlueprintPure)
    static UHitBoxMetaData* BPF_GetHitboxMetaDataInstance(const FHitBoxMetaDataClassInstance& _instance);
    
    UFUNCTION(BlueprintPure)
    static FHitboxDataRow BPF_GetHitboxDataRow(const FHitBox& _hitbox);
    
    UHitboxHelper();
};

