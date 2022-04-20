#include "SCTrackingConfig.h"

USCTrackingConfig::USCTrackingConfig() {
    this->m_ShippingApiEndpoint = TEXT("https://live.tracking.sloclap.net");
    this->m_DevApiEndpoint = TEXT("https://ca9t8c1n43.execute-api.eu-west-1.amazonaws.com/dev");
    this->m_ApiEventPath = TEXT("posteventepic");
    this->m_ApiTrackingLevelPath = TEXT("trackinglevel");
    this->m_ApiHealthPath = TEXT("healthepic");
    this->m_ApiKey = TEXT("n9ERUnrwoB1yqttqJLSjSaCzozHMvwIF6FMmFgC2");
}

