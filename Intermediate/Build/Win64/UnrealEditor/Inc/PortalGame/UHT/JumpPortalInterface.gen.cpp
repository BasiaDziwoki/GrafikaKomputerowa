// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/JumpPortalInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpPortalInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PORTALGAME_API UClass* Z_Construct_UClass_UJumpPortalInterface();
PORTALGAME_API UClass* Z_Construct_UClass_UJumpPortalInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Interface UJumpPortalInterface Function JumpPortal
struct JumpPortalInterface_eventJumpPortal_Parms
{
	FVector TargetLocation;
	FRotator TargetRotation;
};
void IJumpPortalInterface::JumpPortal(FVector TargetLocation, FRotator TargetRotation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JumpPortal instead.");
}
static FName NAME_UJumpPortalInterface_JumpPortal = FName(TEXT("JumpPortal"));
void IJumpPortalInterface::Execute_JumpPortal(UObject* O, FVector TargetLocation, FRotator TargetRotation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UJumpPortalInterface::StaticClass()));
	JumpPortalInterface_eventJumpPortal_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UJumpPortalInterface_JumpPortal);
	if (Func)
	{
		Parms.TargetLocation=TargetLocation;
		Parms.TargetRotation=TargetRotation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IJumpPortalInterface*)(O->GetNativeInterfaceAddress(UJumpPortalInterface::StaticClass())))
	{
		I->JumpPortal_Implementation(TargetLocation,TargetRotation);
	}
}
struct Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interface" },
		{ "ModuleRelativePath", "JumpPortalInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JumpPortalInterface_eventJumpPortal_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JumpPortalInterface_eventJumpPortal_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::NewProp_TargetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpPortalInterface, nullptr, "JumpPortal", nullptr, nullptr, Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::PropPointers), sizeof(JumpPortalInterface_eventJumpPortal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::Function_MetaDataParams) };
static_assert(sizeof(JumpPortalInterface_eventJumpPortal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJumpPortalInterface_JumpPortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpPortalInterface_JumpPortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IJumpPortalInterface::execJumpPortal)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpPortal_Implementation(Z_Param_TargetLocation,Z_Param_TargetRotation);
	P_NATIVE_END;
}
// End Interface UJumpPortalInterface Function JumpPortal

// Begin Interface UJumpPortalInterface
void UJumpPortalInterface::StaticRegisterNativesUJumpPortalInterface()
{
	UClass* Class = UJumpPortalInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JumpPortal", &IJumpPortalInterface::execJumpPortal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJumpPortalInterface);
UClass* Z_Construct_UClass_UJumpPortalInterface_NoRegister()
{
	return UJumpPortalInterface::StaticClass();
}
struct Z_Construct_UClass_UJumpPortalInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "JumpPortalInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJumpPortalInterface_JumpPortal, "JumpPortal" }, // 129738441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IJumpPortalInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJumpPortalInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpPortalInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJumpPortalInterface_Statics::ClassParams = {
	&UJumpPortalInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpPortalInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UJumpPortalInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJumpPortalInterface()
{
	if (!Z_Registration_Info_UClass_UJumpPortalInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJumpPortalInterface.OuterSingleton, Z_Construct_UClass_UJumpPortalInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJumpPortalInterface.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<UJumpPortalInterface>()
{
	return UJumpPortalInterface::StaticClass();
}
UJumpPortalInterface::UJumpPortalInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJumpPortalInterface);
UJumpPortalInterface::~UJumpPortalInterface() {}
// End Interface UJumpPortalInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_JumpPortalInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJumpPortalInterface, UJumpPortalInterface::StaticClass, TEXT("UJumpPortalInterface"), &Z_Registration_Info_UClass_UJumpPortalInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJumpPortalInterface), 1358017106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_JumpPortalInterface_h_3889484577(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_JumpPortalInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_JumpPortalInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
