// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/Cube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTALGAME_API UClass* Z_Construct_UClass_ACube();
PORTALGAME_API UClass* Z_Construct_UClass_ACube_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Class ACube
void ACube::StaticRegisterNativesACube()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACube);
UClass* Z_Construct_UClass_ACube_NoRegister()
{
	return ACube::StaticClass();
}
struct Z_Construct_UClass_ACube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Cube.h" },
		{ "ModuleRelativePath", "Cube.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACube_Statics::ClassParams = {
	&ACube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACube_Statics::Class_MetaDataParams), Z_Construct_UClass_ACube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACube()
{
	if (!Z_Registration_Info_UClass_ACube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACube.OuterSingleton, Z_Construct_UClass_ACube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACube.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<ACube>()
{
	return ACube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACube);
ACube::~ACube() {}
// End Class ACube

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Cube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACube, ACube::StaticClass, TEXT("ACube"), &Z_Registration_Info_UClass_ACube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACube), 471452131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Cube_h_3429064112(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Cube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Cube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
