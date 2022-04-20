#include "SCStreamingActorComponent.h"

USCStreamingActorComponent::USCStreamingActorComponent() {
    this->m_bRecreatePhysicsForComponents = false;
    this->m_bRecreatePhysicsOnVolumeEvents = false;
    this->m_bRecreatePhysicsForComponentsRecursive = true;
    this->m_bRecreatePhysicsOnPooling = true;
    this->m_bUpdateLevelFromOverlapOnBeginPlay = false;
}

