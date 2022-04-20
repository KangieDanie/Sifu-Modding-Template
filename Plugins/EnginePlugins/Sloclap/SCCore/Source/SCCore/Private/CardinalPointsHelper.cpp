#include "CardinalPointsHelper.h"

ESCCardinalPoints UCardinalPointsHelper::BPF_Mirror(ESCCardinalPoints _eCardinalPoint, bool _bMirror, bool _bIgnoreVertical) {
    return ESCCardinalPoints::North;
}

bool UCardinalPointsHelper::BPF_IsNone(ESCCardinalPoints _eCardinalPoint) {
    return false;
}

ESCCardinalPoints UCardinalPointsHelper::BPF_GetCardinalPointFromAngle(float _fAngle, float _fEastWestTolerance) {
    return ESCCardinalPoints::North;
}

UCardinalPointsHelper::UCardinalPointsHelper() {
}

