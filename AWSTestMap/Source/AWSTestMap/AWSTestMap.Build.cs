// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AWSTestMap : ModuleRules
{
	public AWSTestMap(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "AWSSDK" });
		bEnableUndefinedIdentifierWarnings = false;

    }
}
