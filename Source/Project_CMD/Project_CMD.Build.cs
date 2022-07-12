// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_CMD : ModuleRules
{
	public Project_CMD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
