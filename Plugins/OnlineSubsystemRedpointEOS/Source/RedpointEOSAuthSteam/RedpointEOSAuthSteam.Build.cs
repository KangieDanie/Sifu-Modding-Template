using UnrealBuildTool;

public class RedpointEOSAuthSteam : ModuleRules {
    public RedpointEOSAuthSteam(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "OnlineSubsystem",
            "OnlineSubsystemRedpointEOS",
            "OnlineSubsystemUtils",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
