// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/UserWidgetCross.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetCross() {}

// Begin Cross Module References
PORTALGAME_API UClass* Z_Construct_UClass_UUserWidgetCross();
PORTALGAME_API UClass* Z_Construct_UClass_UUserWidgetCross_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Class UUserWidgetCross
void UUserWidgetCross::StaticRegisterNativesUUserWidgetCross()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidgetCross);
UClass* Z_Construct_UClass_UUserWidgetCross_NoRegister()
{
	return UUserWidgetCross::StaticClass();
}
struct Z_Construct_UClass_UUserWidgetCross_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserWidgetCross.h" },
		{ "ModuleRelativePath", "UserWidgetCross.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cross_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UserWidgetCross" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UserWidgetCross.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cross;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetCross>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserWidgetCross_Statics::NewProp_Cross = { "Cross", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserWidgetCross, Cross), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cross_MetaData), NewProp_Cross_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserWidgetCross_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidgetCross_Statics::NewProp_Cross,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetCross_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserWidgetCross_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetCross_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetCross_Statics::ClassParams = {
	&UUserWidgetCross::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUserWidgetCross_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetCross_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetCross_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserWidgetCross_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserWidgetCross()
{
	if (!Z_Registration_Info_UClass_UUserWidgetCross.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidgetCross.OuterSingleton, Z_Construct_UClass_UUserWidgetCross_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserWidgetCross.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<UUserWidgetCross>()
{
	return UUserWidgetCross::StaticClass();
}
UUserWidgetCross::UUserWidgetCross(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetCross);
UUserWidgetCross::~UUserWidgetCross() {}
// End Class UUserWidgetCross

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_UserWidgetCross_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidgetCross, UUserWidgetCross::StaticClass, TEXT("UUserWidgetCross"), &Z_Registration_Info_UClass_UUserWidgetCross, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidgetCross), 1934555673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_UserWidgetCross_h_142253165(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_UserWidgetCross_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_UserWidgetCross_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
