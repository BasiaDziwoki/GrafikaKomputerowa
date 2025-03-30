public class FileSystemModule : ModuleRules
{
    public FileSystemModule(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "FileSystemUtils" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Projects" });

        // U¿ywamy C++20 dla module
        CppStandard = CppStandardVersion.Cpp20;
    }
}
