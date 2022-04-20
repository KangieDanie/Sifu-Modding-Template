#include "SCCoreSettings.h"

USCCoreSettings::USCCoreSettings() {
    this->m_fLevelSequenceForcedClothSimulationDuration = 1.00f;
    this->m_DefaultActorPools.AddDefaulted(4);
    this->m_AiAttackSubActionBehaviorTags.AddDefaulted(1);
    this->m_StreamingDebugTrackedActors.AddDefaulted(6);
    this->m_bSaveStreamingActors = false;
    this->m_iMaxActorsAllowedPerLevelWithTransform = 200;
    this->m_bIsLowEndPlatform = false;
    this->m_bActorPoolsEnabled = true;
}

