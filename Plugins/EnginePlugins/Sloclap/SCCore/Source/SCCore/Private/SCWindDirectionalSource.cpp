#include "SCWindDirectionalSource.h"

ASCWindDirectionalSource::ASCWindDirectionalSource() {
    this->m_MPC = NULL;
    this->m_windDirectionName = TEXT("GlobalWind_Direction");
    this->m_windSpeedName = TEXT("GlobalWind_Speed");
    this->m_windMinGustName = TEXT("GlobalWind_MinGust");
    this->m_windMaxGustName = TEXT("GlobalWind_MaxGust");
}

