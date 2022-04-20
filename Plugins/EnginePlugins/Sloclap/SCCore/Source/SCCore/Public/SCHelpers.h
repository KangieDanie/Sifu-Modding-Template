#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCMathExpressionInteger.h"
#include "SCMathExpressionFloat.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "SCTypedValue.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
#include "SCHelpers.generated.h"

class UWorld;
class UCurveFloat;
class UObject;
class AActor;
class UAbilityTask;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FSCHelpersOnFinished);

UCLASS(BlueprintType)
class SCCORE_API USCHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestExpressionInt(const FSCMathExpressionInteger& _expression, int32 _iInputValue);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestExpressionFloat(const FSCMathExpressionFloat& _expression, float _fInputValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SlowMotionFinisher(UObject* _context, UCurveFloat* _curve, FSCHelpersOnFinished _onFinished, float _fScale, bool _bIsRelevantForGameplay);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SlowMotion(UObject* _context, UCurveFloat* _curve, float _fScale, bool _bIsRelevantForGameplay);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetLocalizationPreviewLanguage(const FString& _inCulture);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_RandomBoolFromProbability(const float _fProba);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PushBlockSlowmotion(bool _bFreezeAnySlowmotion);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PopBlockSlowmotion(int32 _iHandle, bool _bUnFreezeAnySlowmotion);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsSlowMotionEnabled();
    
    UFUNCTION(BlueprintPure)
    static FSCTypedValue BPF_IntToTypedValue(int32 _iValue);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_Int32RangeContains(const FInt32Range& _range, int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_InstantSlowMotion(UObject* _context, float _fScale, bool _bIsRelevantForGameplay);
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetSlowMotionDebugUserValue();
    
    UFUNCTION(BlueprintPure)
    static float BPF_GetSlowMotionDebugCoef();
    
    UFUNCTION(BlueprintPure)
    static TMap<FString, FText> BPF_GetIsoCultureToDisplayName();
    
    UFUNCTION(BlueprintCallable)
    static UWorld* BPF_GetEditorWorld();
    
    UFUNCTION(BlueprintCallable)
    static AActor* BPF_GetActorOfClassInWorld(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static FSCTypedValue BPF_FloatToTypedValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EndTasks(const TArray<UAbilityTask*>& _tasks);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_Contains(const FFloatRange& _FloatRange, float _fValue);
    
    UFUNCTION(BlueprintPure)
    static FSCTypedValue BPF_BoolToTypedValue(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AbortCurrentSlowMotion(UObject* _context, bool _bIsRelevantForGameplay);
    
    USCHelpers();
};

