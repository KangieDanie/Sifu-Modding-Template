#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NavigationSystem NavLinkCustomComponent
#include "NavLinkCustomComponent.h"
#include "TraversalInfo.h"
#include "ELinkWithExternalBehavior.h"
#include "TraversalNavLinkCustomComponent.generated.h"

class AActor;

UCLASS()
class SIFU_API UTraversalNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY(VisibleAnywhere)
    uint8 m_uiCurrentTraversalVersion;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<AActor> m_ExternalLinkedTraversalActor;
    
    UPROPERTY(VisibleAnywhere)
    ELinkWithExternalBehavior m_eExternalLinkBehavior;
    
public:
    UTraversalNavLinkCustomComponent();
};

