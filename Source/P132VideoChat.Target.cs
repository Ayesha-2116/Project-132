// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class P132VideoChatTarget : TargetRules
{
	public P132VideoChatTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		//ExtraModuleNames.Add("P132VideoChat");
        ExtraModuleNames.AddRange(new string[] { "P132VideoChat", "AgoraPlugin" });

        if (Target.Platform == UnrealTargetPlatform.IOS || Target.Platform == UnrealTargetPlatform.Mac)
        {
            bOverrideBuildEnvironment = true;
            AdditionalCompilerArguments = "-Wno-unused-but-set-variable -Wno-gcc-compat -Wno-reorder-ctor";
        }
    }
}
