#pragma once
#include "CoreMinimal.h"
#include "EMoveTransitionType.generated.h"

UENUM(BlueprintType)
enum class EMoveTransitionType : uint8 {
    StopV1,
    StopV1_E,
    StopV1_S,
    StopV1_W,
    StopV2,
    StopV2_E,
    StopV2_S,
    StopV2_W,
    StopV3,
    StartV1,
    StartV1_NE,
    StartV1_NS,
    StartV1_NW,
    StartV1_EN,
    StartV1_EE,
    StartV1_ES,
    StartV1_EW,
    StartV1_SN,
    StartV1_SE,
    StartV1_SS,
    StartV1_SW,
    StartV1_WN,
    StartV1_WE,
    StartV1_WS,
    StartV1_WW,
    StartV2,
    StartV2_NE,
    StartV2_NS,
    StartV2_NW,
    StartV2_EN,
    StartV2_EE,
    StartV2_ES,
    StartV2_EW,
    StartV2_SN,
    StartV2_SE,
    StartV2_SS,
    StartV2_SW,
    StartV2_WN,
    StartV2_WE,
    StartV2_WS,
    StartV2_WW,
    StartV3,
    StartV1_90L,
    StartV1_180L,
    StartV1_90R,
    StartV1_180R,
    StartV2_90L,
    StartV2_180L,
    StartV2_90R,
    StartV2_180R,
    StartV3_90L,
    StartV3_180L,
    StartV3_90R,
    StartV3_180R,
    UTurnV1_R,
    UTurnV1_RBis,
    UTurnV1_L,
    UTurnV1_LBis,
    UTurnV2_R,
    UTurnV2_RBis,
    UTurnV2_L,
    UTurnV2_LBis,
    UTurnV3_R,
    UTurnV3_RBis,
    UTurnV3_L,
    UTurnV3_LBis,
    V1ToV2,
    V1ToV3,
    V2ToV1,
    V2ToV3,
    V3ToV1,
    V3ToV2,
    MediumLanding,
    OnPlaceMediumLanding,
    NorthSouthV1,
    EastWestV1,
    SouthNorthV1,
    WestEastV1,
    NorthSouthV2,
    EastWestV2,
    SouthNorthV2,
    WestEastV2,
    InPlace_90L,
    InPlace_180L,
    InPlace_90R,
    InPlace_180R,
    Count,
    None,
};

