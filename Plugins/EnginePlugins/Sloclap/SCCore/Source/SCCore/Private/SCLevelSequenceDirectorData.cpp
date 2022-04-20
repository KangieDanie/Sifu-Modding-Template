#include "SCLevelSequenceDirectorData.h"

USCLevelSequenceDirectorData::USCLevelSequenceDirectorData() {
    this->m_fBlendCharacterPositionTime = 0.00f;
    this->m_fEaseInAnimationTime = 0.00f;
    this->m_fEaseOutAnimationTime = 0.00f;
    this->m_fEaseInCamera = -1.00f;
    this->m_fEaseOutCamera = -1.00f;
    this->m_bCanSkip = false;
    this->m_bAnimateCameraSensor = false;
    this->m_bConstrainAspectRatio = false;
    this->m_eCinematicLayerType = ECinematicLayerTypes::CinematicLayer1;
}

