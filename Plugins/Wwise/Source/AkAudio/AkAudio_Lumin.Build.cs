/********************************************************************************
The content of the files in this repository include portions of the AUDIOKINETIC
Wwise Technology released in source code form as part of the SDK package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
********************************************************************************/

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;

public class AkUEPlatform_Lumin : AkUEPlatform
{
	public AkUEPlatform_Lumin(ReadOnlyTargetRules in_TargetRules, string in_ThirdPartyFolder) : base(in_TargetRules, in_ThirdPartyFolder) {}

#if !UE_4_24_OR_LATER
	public override string SanitizeLibName(string in_libName)
	{
		return in_libName;
	}
#endif

	public override string GetLibraryFullPath(string LibName, string LibPath)
	{
		return Path.Combine(LibPath, "lib" + LibName + ".a");
	}

	public override bool SupportsAkAutobahn { get { return false; } }

	public override bool SupportsCommunication { get { return true; } }

	public override bool SupportsDeviceMemory { get { return false; } }

	public override string AkPlatformLibDir { get { return "Lumin"; } }

	public override string DynamicLibExtension { get { return "so"; } }

	public override List<string> GetAdditionalWwiseLibs()
	{
		return new List<string> ();
	}
	
	public override List<string> GetPublicSystemLibraries()
	{
		return new List<string>
		{
			"ml_audio"
		};
	}

	public override List<string> GetPublicDelayLoadDLLs()
	{
		var libs = GetAllLibrariesInFolder(Path.Combine(ThirdPartyFolder, AkPlatformLibDir, AkConfigurationDir, "bin"), DynamicLibExtension, true);
		var DLLs = new List<string>();
		foreach(var lib in libs)
		{
			DLLs.Add(string.Format("lib{0}.so", lib));
		}
		return DLLs;
	}

	public override List<string> GetPublicDefinitions()
	{
		return new List<string>
		{
			"AK_LUMIN"
		};
	}

	public override Tuple<string, string> GetAdditionalPropertyForReceipt(string ModuleDirectory)
	{
		return new Tuple<string, string>("LuminPlugin", Path.Combine(ModuleDirectory, "Wwise_LPL.xml"));
	}

	public override List<string> GetPublicFrameworks()
	{
		return new List<string>();
	}
}
