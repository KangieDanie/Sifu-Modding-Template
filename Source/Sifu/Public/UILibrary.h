#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG WidgetBlueprintLibrary
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "EIntersectDirection.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "UILibrary.generated.h"

class APlayerController;
class UUserWidget;
class UWidget;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FUILibraryOnConfirm);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FUILibraryOnCancel);

UCLASS()
class SIFU_API UUILibrary : public UWidgetBlueprintLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_ShowPopup(const APlayerController* _playerController, FText _txtMessage, FText _txtConfirm, FText _txtCancel, FUILibraryOnConfirm _onConfirm, FUILibraryOnCancel _onCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void BPF_SetAllSCButtonsTintsInUserWidget(UUserWidget* _userWidget, FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ProjectWorldLocationToScreen(APlayerController* _playerController, const FVector& _vInPosition, bool _bUseViewportBounds, float _fViewportBoundsOffset, FVector2D& _vOutScreenPosition, float& _fOutAngle, bool& _bOutIsOfScreen);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_Intersect2DPositionWithViewportBounds(APlayerController* _playerController, const FVector2D& _vInPosition, FVector2D& _vOutIntersection, EIntersectDirection& _eOutIntersectDirection);
    
    UFUNCTION(BlueprintPure)
    static void BPF_GetWidget2DPosFrom3D(UWidget* _widget, FVector _location, FVector _3DOffset, FVector2D _2DOffset, float _f2DMinY, FVector2D& _2DPos, bool& _2DProjSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Get2DPosFrom3DBehindCam(const UObject* WorldContextObject, FVector _location, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _2DPos, bool& _LocationInFrontOfCamera);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Get2DPosFrom3D(APlayerController* _playerController, FVector _location, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _2DPos, bool& _2DProjSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ClosePopup(const APlayerController* _playerController);
    
    UUILibrary();
};

