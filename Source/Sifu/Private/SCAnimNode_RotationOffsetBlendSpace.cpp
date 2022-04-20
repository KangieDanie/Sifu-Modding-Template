#include "SCAnimNode_RotationOffsetBlendSpace.h"

FSCAnimNode_RotationOffsetBlendSpace::FSCAnimNode_RotationOffsetBlendSpace() {
    this->LODThreshold = 0;
    this->Alpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->mbMirrorAnimation = false;
    this->mMirrorAnimDB = NULL;
}

