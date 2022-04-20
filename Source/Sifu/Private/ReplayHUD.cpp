#include "ReplayHUD.h"

class UObject;

void AReplayHUD::OnAssetsLoaded(const TArray<TSoftObjectPtr<UObject>>& _items) {
}

void AReplayHUD::BPF_SetTextureToDraw(const FScreenTextureData& _screenTexture) {
}

void AReplayHUD::BPF_SetTextureLocation(EScreenLocation _eTextureLocation) {
}

void AReplayHUD::BPF_SetDrawTextureEnabled(bool _bEnabled) {
}

AReplayHUD::AReplayHUD() {
    this->m_CurrentTexture = NULL;
}

