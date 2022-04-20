#include "SCAnimNode_PlayBlendSpace.h"

FSCAnimNode_PlayBlendSpace::FSCAnimNode_PlayBlendSpace() {
    this->mbMirrorAnimation = false;
    this->miAnimSubStateID = 0;
    this->muiTransitionGlobalType = 0;
    this->muiOrderID = 0;
    this->mbIgnoreOrderID = false;
    this->mMirrorAnimDB = NULL;
}

