#include "SCCheatManager.h"

class UGameInstance;

bool USCCheatManager::SkipMovesetTutorial(UGameInstance* _gameInstance) {
    return false;
}

bool USCCheatManager::FillInventoryWithEquipment(UGameInstance* _gameInstance) {
    return false;
}

bool USCCheatManager::AreAllAttacksUnlocked(UGameInstance* _gameInstance) {
    return false;
}

USCCheatManager::USCCheatManager() {
    this->m_cheatDB = NULL;
}

