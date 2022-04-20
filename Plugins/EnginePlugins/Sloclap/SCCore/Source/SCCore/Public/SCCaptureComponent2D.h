#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "Components/SceneCaptureComponent2D.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "SCCaptureComponent2D.generated.h"

UCLASS(EditInlineNew)
class SCCORE_API USCCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_ProjectWorldLocationToPixelCoordinates(const FVector& _vLocation, FVector2D& _vOutPixelLocation, FVector2D& _vOutUvLocation);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ProjectMultipleWorldLocationsToPixelCoordinates(const TArray<FVector>& _Locations, TArray<FVector2D>& _OutPixelLocations, TArray<FVector2D>& _OutUvLocations, TArray<bool>& _OutbAreLocationsInCanvas);
    
    USCCaptureComponent2D();
};

