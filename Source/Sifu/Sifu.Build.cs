// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Sifu : ModuleRules
{
	public Sifu(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateDependencyModuleNames.AddRange(new string[] { "AkAudio" });

        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "AnimationCore",
            "ApexDestruction",
            "AudioMixer",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            //"Gauntlet",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PhysicsCore",
            "PropertyPath",
            "SCCore",
            "SCDialogManagerPlugin",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "Text2LipSync",
            "UMG",
        });


		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] {  });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
