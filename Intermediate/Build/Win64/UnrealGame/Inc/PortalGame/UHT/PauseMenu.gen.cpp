// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/PauseMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenu() {}

// Begin Cross Module References
PORTALGAME_API UClass* Z_Construct_UClass_UPauseMenu();
PORTALGAME_API UClass* Z_Construct_UClass_UPauseMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Class UPauseMenu
void UPauseMenu::StaticRegisterNativesUPauseMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseMenu);
UClass* Z_Construct_UClass_UPauseMenu_NoRegister()
{
	return UPauseMenu::StaticClass();
}
struct Z_Construct_UClass_UPauseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PauseMenu.h" },
		{ "ModuleRelativePath", "PauseMenu.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenu_Statics::ClassParams = {
	&UPauseMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPauseMenu()
{
	if (!Z_Registration_Info_UClass_UPauseMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseMenu.OuterSingleton, Z_Construct_UClass_UPauseMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseMenu.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<UPauseMenu>()
{
	return UPauseMenu::StaticClass();
}
UPauseMenu::UPauseMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenu);
UPauseMenu::~UPauseMenu() {}
// End Class UPauseMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PauseMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseMenu, UPauseMenu::StaticClass, TEXT("UPauseMenu"), &Z_Registration_Info_UClass_UPauseMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseMenu), 3569472738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PauseMenu_h_1624925452(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PauseMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PauseMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
