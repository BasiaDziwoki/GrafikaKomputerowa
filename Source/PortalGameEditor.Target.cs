using UnrealBuildTool;

public class PortalGameEditorTarget : TargetRules
{
    public PortalGameEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V4;

        ExtraModuleNames.AddRange(new string[] { "PortalGame"});
    }
}