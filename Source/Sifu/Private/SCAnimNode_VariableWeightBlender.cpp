#include "SCAnimNode_VariableWeightBlender.h"

FSCAnimNode_VariableWeightBlender::FSCAnimNode_VariableWeightBlender() {
    this->mbMeshSpaceBlend = false;
    this->mbFullOverrideAlpha = false;
    this->mfLayerOverrideAlpha = 0.00f;
    this->mbFullOverrideMirrorAlpha = false;
    this->mfMirrorOverrideAlpha = 0.00f;
    this->mbMute = false;
}

