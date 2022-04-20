#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EProjectionComputeBehavior.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "ESCLevelStreamingState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SCGameplayStatics.generated.h"

class UParticleSystemComponent;
class UObject;
class UParticleSystem;
class AActor;
class USceneComponent;
class UPrimitiveComponent;
class APlayerController;
class APlayerCameraManager;
class APawn;

UCLASS(BlueprintType)
class SCCORE_API USCGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_UnloadLevels(const UObject* _context, const TArray<FName>& _levels, bool _bSynchronous);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* BPF_SpawnEmitterAttachedFromPool(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName PoolType, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* BPF_SpawnEmitterAtLocationFromPool(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FName PoolType, FVector Location, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetLevelsForcedDesiredState(const UObject* _context, const TArray<FName>& _levels, ESCLevelStreamingState _eDesiredState);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetGamePaused(const UObject* _worldContextObject, bool _bPaused);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCurrentPrimitiveDataAsDefault(UPrimitiveComponent* _primitiveComponent);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_ProjectWorldToScreenWithTransform(APlayerController* _player, const FVector& _vWorldPosition, FVector2D& _vOutScreenPosition, FTransform _cameraTransform, bool _bPlayerViewportRelative, EProjectionComputeBehavior _eComputeBehavior);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_ProjectScreenToWorldWithTransform(APlayerController* _player, const FVector2D& _vInScreenPosition, FVector& _vOutWorldPosition, FVector& _vOutWorldDir, FTransform _cameraTransform);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_LoadLevels(const UObject* _context, const TArray<FName>& _levels, bool _bSynchronous, bool _bMakeVisibleAfterLoad);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPlaySessionPaused();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsGamePaused(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsBuildTest();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsBuildShipping();
    
    UFUNCTION(BlueprintPure)
    static AActor* BPF_GetViewTarget(APlayerCameraManager* _cameraManager);
    
    UFUNCTION(BlueprintPure)
    static APawn* BPF_GetFirstLocalPlayerPawn(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetBlendTimeToGo(APlayerCameraManager* _cameraManager);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ForceRefresh(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DisplayErrorMessage(FName _title, const FString& _message);
    
    USCGameplayStatics();
};

