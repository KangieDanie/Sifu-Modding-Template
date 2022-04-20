#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCVideoLightManagerDebugger.generated.h"

class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, EditInlineNew)
class USCVideoLightManagerDebugger : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* m_currentRT;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    
    USCVideoLightManagerDebugger();
};

