// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
public class PortalGame : ModuleRules
{
    public PortalGame(ReadOnlyTargetRules Target) : base(Target)
    {
        CppStandard = CppStandardVersion.Cpp20;

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Niagara", "UMG" });

        PrivateDependencyModuleNames.AddRange(new string[] { "EnhancedInput" });

        PrivateDependencyModuleNames.AddRange(new string[] { "FileSystemModule" });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}

public class FileSystemModule : ModuleRules
{
    public FileSystemModule(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Projects" });

        // U�ywamy C++20 dla filesystem i ranges
        CppStandard = CppStandardVersion.Cpp20;
    }
}
