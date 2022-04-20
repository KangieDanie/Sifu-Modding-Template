#include "SCAnimNode_PlayAnim.h"

FSCAnimNode_PlayAnim::FSCAnimNode_PlayAnim() {
    this->mbMirrorAnimation = false;
    this->miAnimSubStateID = 0;
    this->muiTransitionGlobalType = 0;
    this->muiOrderID = 0;
    this->mbIgnoreOrderID = false;
    this->mbUseStartCursor = false;
    this->mfStartCursor = 0.00f;
    this->mbIgnoreTimeAccumulator = false;
    this->mMirrorAnimDB = NULL;
    this->mbRecordedForReplay = false;
}

