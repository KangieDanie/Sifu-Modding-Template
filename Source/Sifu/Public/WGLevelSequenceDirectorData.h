#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCLevelSequenceDirectorData
#include "SCLevelSequenceDirectorData.h"
#include "InputContext.h"
#include "EPlayerCameraForcedSide.h"
#include "WGLevelSequenceDirectorData.generated.h"

//class UAkAudioEvent;

UCLASS(CollapseCategories)
class SIFU_API UWGLevelSequenceDirectorData : public USCLevelSequenceDirectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputContext m_InputContext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlayerCameraForcedSide m_eForcedPlayerCameraSide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bHideOwnerCarriedWeaponOnPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bShowOwnerCarriedWeaponOnFinished;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bForceOutOfIdle;
    
   /* UPROPERTY(EditAnywhere)
    TArray<UAkAudioEvent*> m_AudioEventsOnStart;
    
    UPROPERTY(EditAnywhere)
    TArray<UAkAudioEvent*> m_AudioEventsOnFinish;*/
    
    UWGLevelSequenceDirectorData();
};

