#include "InventorySearchFilter.h"

FInventorySearchFilter::FInventorySearchFilter() {
    this->m_eSlot = EEquipmentSlot::ElbowArmor;
    this->m_bOutfitsOnly = false;
    this->m_bOnlyNewItems = false;
    this->m_bIgnoreMentoringItems = false;
}

