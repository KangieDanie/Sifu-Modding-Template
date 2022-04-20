#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIActionAttack.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "SCRangeFloatCurve.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
#include "AIActionWallJumpAttack.generated.h"

class UAIFightingComponent;
class UEnvQuery;
class UAIActionWallJumpAttack;
class AActor;
class AFightingCharacter;

UCLASS()
class SIFU_API UAIActionWallJumpAttack : public UAIActionAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fQueryResultLifetime;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    bool m_bDisplayDebugInfos;
    
    UPROPERTY(EditAnywhere)
    FColor m_DebugDisplayColor;
    
    UPROPERTY()
    FFloatRange m_ValidAngleRange;
    
    UPROPERTY()
    FFloatRange m_DistToWallJumpPoint;
    
    UPROPERTY()
    int32 m_iDeprecationVersion;
    
    UPROPERTY(EditAnywhere)
    FSCRangeFloatCurve m_AngleRange;
    
    UPROPERTY(EditAnywhere)
    FSCRangeFloatCurve m_DistToWallJumpSnap;
    
    UPROPERTY(EditAnywhere)
    FSCRangeFloatCurve m_DistToWallJumpSnapTarget;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxJumpHeightWhenPossible;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_WallJumpAttackHitBox;
    
public:
    UFUNCTION(BlueprintCallable)
    static bool BPF_PrepareWallJumpAttack(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionWallJumpAttack> _action, AActor* _wallJumpActor, const FVector& _vSnapLocation, const AActor* _target, bool _bIgnoreAngleConstraint);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_PerformWallJumpAttackAction(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionWallJumpAttack> _action, AActor* _wallJumpActor, const FVector& _vSnapLocation, FGameplayTag _behaviorTag, const AActor* _target, FString& _outError, bool _bIgnoreAngleConstraint);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_ComputeWallJumpStartLocation(FVector& _vOutLocation, const AFightingCharacter* _instigatorChara, const AActor* _target, const AActor* _wallJumpActor, const FVector& _vSnapLocation, TSubclassOf<UAIActionWallJumpAttack> _attackClass);
    
    UAIActionWallJumpAttack();
};

