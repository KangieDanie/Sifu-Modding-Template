#pragma once
#include "CoreMinimal.h"
#include "InteractionObjectComponent.h"
#include "InputAction.h"
#include "MovableInteractionComponent.generated.h"

class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovableInteractionComponentOnThrowObject, APlayerController*, PlayerController);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovableInteractionComponentOnPushObject, APlayerController*, PlayerController);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovableInteractionComponentOnPickUpObject, APlayerController*, PlayerController);

UCLASS()
class SIFU_API UMovableInteractionComponent : public UInteractionObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FMovableInteractionComponentOnPushObject OnPushObject;
    
    UPROPERTY(BlueprintAssignable)
    FMovableInteractionComponentOnThrowObject OnThrowObject;
    
    UPROPERTY(BlueprintAssignable)
    FMovableInteractionComponentOnPickUpObject OnPickUpObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<InputAction> m_aInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fShowInteractionRange;
    
public:
    UMovableInteractionComponent();
};

