#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCActor
#include "SCActor.h"
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
#include "EMenuEnum.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "InteractiveMenu.generated.h"

class UInteractionObjectComponent;
class AActor;
class USceneComponent;
class UMenuWidget;
class AFightingPlayerController;
class ASCPlayerController;

UCLASS()
class SIFU_API AInteractiveMenu : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMenuEnum m_eMenu;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInteractionObjectComponent* m_InteractiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_ActorToBlendTo;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMenuWidget* m_MenuToShow;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_RootComponent;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OpenMenu(AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility);
    
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetLeftStickValue(ASCPlayerController* _controller) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMenu(AFightingPlayerController* _controller, float _fBlendTime);
    
    AInteractiveMenu();
};

