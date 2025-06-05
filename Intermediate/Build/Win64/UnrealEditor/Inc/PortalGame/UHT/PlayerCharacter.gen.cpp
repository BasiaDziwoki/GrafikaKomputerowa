// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
PORTALGAME_API UClass* Z_Construct_UClass_APlayerCharacter();
PORTALGAME_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
PORTALGAME_API UClass* Z_Construct_UClass_UJumpPortalInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Class APlayerCharacter Function GetCameraComp
struct PlayerCharacter_eventGetCameraComp_Parms
{
	UCameraComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	PlayerCharacter_eventGetCameraComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APlayerCharacter_GetCameraComp = FName(TEXT("GetCameraComp"));
UCameraComponent* APlayerCharacter::GetCameraComp()
{
	PlayerCharacter_eventGetCameraComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_GetCameraComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetCameraComp_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetCameraComp", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::PropPointers), sizeof(PlayerCharacter_eventGetCameraComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerCharacter_eventGetCameraComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetCameraComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetCameraComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APlayerCharacter Function GetCameraComp

// Begin Class APlayerCharacter Function GetCharacterMovementComp
struct PlayerCharacter_eventGetCharacterMovementComp_Parms
{
	UCharacterMovementComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	PlayerCharacter_eventGetCharacterMovementComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APlayerCharacter_GetCharacterMovementComp = FName(TEXT("GetCharacterMovementComp"));
UCharacterMovementComponent* APlayerCharacter::GetCharacterMovementComp()
{
	PlayerCharacter_eventGetCharacterMovementComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_GetCharacterMovementComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetCharacterMovementComp_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetCharacterMovementComp", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::PropPointers), sizeof(PlayerCharacter_eventGetCharacterMovementComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerCharacter_eventGetCharacterMovementComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APlayerCharacter Function GetCharacterMovementComp

// Begin Class APlayerCharacter Function GetPhysicsHandleComp
struct PlayerCharacter_eventGetPhysicsHandleComp_Parms
{
	UPhysicsHandleComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	PlayerCharacter_eventGetPhysicsHandleComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APlayerCharacter_GetPhysicsHandleComp = FName(TEXT("GetPhysicsHandleComp"));
UPhysicsHandleComponent* APlayerCharacter::GetPhysicsHandleComp()
{
	PlayerCharacter_eventGetPhysicsHandleComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_GetPhysicsHandleComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetPhysicsHandleComp_Parms, ReturnValue), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetPhysicsHandleComp", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::PropPointers), sizeof(PlayerCharacter_eventGetPhysicsHandleComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerCharacter_eventGetPhysicsHandleComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APlayerCharacter Function GetPhysicsHandleComp

// Begin Class APlayerCharacter
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isGrabbingObject_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isPaused_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_JumpVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotation;
	static void NewProp_isGrabbingObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isGrabbingObject;
	static void NewProp_isPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_GetCameraComp, "GetCameraComp" }, // 3170500420
		{ &Z_Construct_UFunction_APlayerCharacter_GetCharacterMovementComp, "GetCharacterMovementComp" }, // 1202380517
		{ &Z_Construct_UFunction_APlayerCharacter_GetPhysicsHandleComp, "GetPhysicsHandleComp" }, // 4224645646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, JumpVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpVelocity_MetaData), NewProp_JumpVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRotation_MetaData), NewProp_ActorRotation_MetaData) };
void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isGrabbingObject_SetBit(void* Obj)
{
	((APlayerCharacter*)Obj)->isGrabbingObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isGrabbingObject = { "isGrabbingObject", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isGrabbingObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isGrabbingObject_MetaData), NewProp_isGrabbingObject_MetaData) };
void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isPaused_SetBit(void* Obj)
{
	((APlayerCharacter*)Obj)->isPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isPaused = { "isPaused", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isPaused_MetaData), NewProp_isPaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isGrabbingObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_isPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UJumpPortalInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacter, IJumpPortalInterface), false },  // 1358017106
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<APlayerCharacter>()
{
	return APlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// End Class APlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 45618715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PlayerCharacter_h_1700061663(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_PlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
