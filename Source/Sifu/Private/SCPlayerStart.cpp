#include "SCPlayerStart.h"

bool ASCPlayerStart::BPF_WantKeepBackgroundDuringStartupMenu() const {
    return false;
}


ASCPlayerStart::ASCPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->m_bKeepBackGroundDuringStartupMenu = false;
    this->m_bForFirstSpawn = false;
    this->m_ePlayerScreenSide = EPlayerScreenSide::Right;
    this->m_IdleStartupSequence = NULL;
    this->m_StartupSequence = NULL;
    this->m_fCameraBlendDurationBetweenLoopAndGoto = 0.50f;
    this->m_CameraShakeClass = NULL;
}

