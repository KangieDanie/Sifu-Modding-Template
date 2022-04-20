#include "SCAnimNode_SaveBoneTransform.h"

FSCAnimNode_SaveBoneTransform::FSCAnimNode_SaveBoneTransform() {
    this->meTransformSpace = ECoordinateSystem::World;
    this->mbMirror = false;
    this->mMirrorAnimDB = NULL;
}

