#include "FallHitActionLauncher.h"

class AActor;

void UFallHitActionLauncher::BPE_GetDirection_Implementation(AActor* _Instigator, AActor* _victim, FVector& _vOutStartDirection, FVector& _vOutTargetDirection, bool& _bOutForceStartDirection) {
}

UFallHitActionLauncher::UFallHitActionLauncher() {
    this->m_bMCIsInstigator = true;
    this->m_bHitOnInstigator = false;
}

