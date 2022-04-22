// Copyright (c) 2006-2019 Audiokinetic Inc. / All Rights Reserved
#pragma once

#include "AkAssetBase.h"
#include "WwiseItemType.h"
#include "AkFolder.generated.h"


UCLASS()
class AKAUDIO_API UAkFolder: public UAkAudioType
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, Category = "AkFolder")
	FString UnrealFolderPath;

	UPROPERTY(VisibleAnywhere, Category = "AkFolder")
	FString WwiseFolderPath;

	EWwiseItemType::Type assetType;
	
	TSet<FString> immediateSubFolders;
};
