#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "SubZoneShortcutStruct.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GhostGateCarrierInterface.generated.h"

class UShapeComponent;
class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class SIFU_API UGhostGateCarrierInterface : public UInterface {
    GENERATED_BODY()
};

class SIFU_API IGhostGateCarrierInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSubZoneShortcutStruct GetSubzoneShortcut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetStaticMeshComponentDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetColliderScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShapeComponent* GetColliderRegularDoor();
    
};

