#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsModule.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "SCCollisionSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SCCORE_API USCCollisionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FCollisionResponseContainer m_CharacterNoCollisionContainer;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_CharacterNoCollisionProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_CharacterPhysicsProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_CharacterRagdollProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_CharacterHitCapsuleProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_TriggerDefaultProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_TriggerPawnProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_TriggerLocalPawnProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_LDOnlyPawnProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_LDOnlyModelProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_ReplayPawnCapsuleProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_ReplayPawnMeshProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_ReplayPropsDestroyed;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_ReplayPropsProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_NoCollisionTraceMeshProfile;
    
    UPROPERTY(Config, EditAnywhere)
    float m_EnvCollisionRetrieveSphereRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float m_EnvCollisionRetrieveSweepDist;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eAIColChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCapsuleLocalPawnChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eHitTraceChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eLDCollChannel;
    
public:
    USCCollisionSettings();
};

