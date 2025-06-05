// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/Turret.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PORTALGAME_API UClass* Z_Construct_UClass_ATurret();
PORTALGAME_API UClass* Z_Construct_UClass_ATurret_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Class ATurret Function AnyDamage
struct Z_Construct_UFunction_ATurret_AnyDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_AnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "AnyDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_AnyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_AnyDamage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATurret_AnyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_AnyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurret::execAnyDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnyDamage();
	P_NATIVE_END;
}
// End Class ATurret Function AnyDamage

// Begin Class ATurret Function ChangeLaserBeginLocation
struct Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "ChangeLaserBeginLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurret::execChangeLaserBeginLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeLaserBeginLocation();
	P_NATIVE_END;
}
// End Class ATurret Function ChangeLaserBeginLocation

// Begin Class ATurret Function ChangeLaserEndingLocation
struct Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//void SetLaserLocations();\n" },
#endif
		{ "ModuleRelativePath", "Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid SetLaserLocations();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "ChangeLaserEndingLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurret::execChangeLaserEndingLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeLaserEndingLocation();
	P_NATIVE_END;
}
// End Class ATurret Function ChangeLaserEndingLocation

// Begin Class ATurret Function GetCapsuleComp
struct Turret_eventGetCapsuleComp_Parms
{
	UCapsuleComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetCapsuleComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetCapsuleComp = FName(TEXT("GetCapsuleComp"));
UCapsuleComponent* ATurret::GetCapsuleComp()
{
	Turret_eventGetCapsuleComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetCapsuleComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetCapsuleComp_Parms, ReturnValue), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetCapsuleComp", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::PropPointers), sizeof(Turret_eventGetCapsuleComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetCapsuleComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetCapsuleComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetCapsuleComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetCapsuleComp

// Begin Class ATurret Function GetCubeComp
struct Turret_eventGetCubeComp_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetCubeComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetCubeComp = FName(TEXT("GetCubeComp"));
UStaticMeshComponent* ATurret::GetCubeComp()
{
	Turret_eventGetCubeComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetCubeComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetCubeComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetCubeComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetCubeComp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetCubeComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetCubeComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetCubeComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetCubeComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetCubeComp", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetCubeComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetCubeComp_Statics::PropPointers), sizeof(Turret_eventGetCubeComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetCubeComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetCubeComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetCubeComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetCubeComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetCubeComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetCubeComp

// Begin Class ATurret Function GetLaserComp
struct Turret_eventGetLaserComp_Parms
{
	UNiagaraComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetLaserComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetLaserComp = FName(TEXT("GetLaserComp"));
UNiagaraComponent* ATurret::GetLaserComp()
{
	Turret_eventGetLaserComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetLaserComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetLaserComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetLaserComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetLaserComp_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetLaserComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetLaserComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetLaserComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetLaserComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetLaserComp", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetLaserComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetLaserComp_Statics::PropPointers), sizeof(Turret_eventGetLaserComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetLaserComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetLaserComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetLaserComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetLaserComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetLaserComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetLaserComp

// Begin Class ATurret Function GetTurretBaseComp
struct Turret_eventGetTurretBaseComp_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetTurretBaseComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetTurretBaseComp = FName(TEXT("GetTurretBaseComp"));
UStaticMeshComponent* ATurret::GetTurretBaseComp()
{
	Turret_eventGetTurretBaseComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetTurretBaseComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetTurretBaseComp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetTurretBaseComp", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::PropPointers), sizeof(Turret_eventGetTurretBaseComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetTurretBaseComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetTurretBaseComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetTurretBaseComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetTurretBaseComp

// Begin Class ATurret Function GetTurretLeftComp
struct Turret_eventGetTurretLeftComp_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetTurretLeftComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetTurretLeftComp = FName(TEXT("GetTurretLeftComp"));
UStaticMeshComponent* ATurret::GetTurretLeftComp()
{
	Turret_eventGetTurretLeftComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetTurretLeftComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetTurretLeftComp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetTurretLeftComp", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::PropPointers), sizeof(Turret_eventGetTurretLeftComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetTurretLeftComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetTurretLeftComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetTurretLeftComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetTurretLeftComp

// Begin Class ATurret Function GetTurretLeftPositionTimeline
struct Turret_eventGetTurretLeftPositionTimeline_Parms
{
	UTimelineComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetTurretLeftPositionTimeline_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetTurretLeftPositionTimeline = FName(TEXT("GetTurretLeftPositionTimeline"));
UTimelineComponent* ATurret::GetTurretLeftPositionTimeline()
{
	Turret_eventGetTurretLeftPositionTimeline_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetTurretLeftPositionTimeline);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetTurretLeftPositionTimeline_Parms, ReturnValue), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetTurretLeftPositionTimeline", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::PropPointers), sizeof(Turret_eventGetTurretLeftPositionTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetTurretLeftPositionTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetTurretLeftPositionTimeline

// Begin Class ATurret Function GetTurretRightComp
struct Turret_eventGetTurretRightComp_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetTurretRightComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetTurretRightComp = FName(TEXT("GetTurretRightComp"));
UStaticMeshComponent* ATurret::GetTurretRightComp()
{
	Turret_eventGetTurretRightComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetTurretRightComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetTurretRightComp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetTurretRightComp", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::PropPointers), sizeof(Turret_eventGetTurretRightComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetTurretRightComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetTurretRightComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetTurretRightComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetTurretRightComp

// Begin Class ATurret Function GetTurretRightPositionTimeline
struct Turret_eventGetTurretRightPositionTimeline_Parms
{
	UTimelineComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Turret_eventGetTurretRightPositionTimeline_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ATurret_GetTurretRightPositionTimeline = FName(TEXT("GetTurretRightPositionTimeline"));
UTimelineComponent* ATurret::GetTurretRightPositionTimeline()
{
	Turret_eventGetTurretRightPositionTimeline_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ATurret_GetTurretRightPositionTimeline);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Turret_eventGetTurretRightPositionTimeline_Parms, ReturnValue), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "GetTurretRightPositionTimeline", nullptr, nullptr, Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::PropPointers), sizeof(Turret_eventGetTurretRightPositionTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Turret_eventGetTurretRightPositionTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATurret Function GetTurretRightPositionTimeline

// Begin Class ATurret
void ATurret::StaticRegisterNativesATurret()
{
	UClass* Class = ATurret::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnyDamage", &ATurret::execAnyDamage },
		{ "ChangeLaserBeginLocation", &ATurret::execChangeLaserBeginLocation },
		{ "ChangeLaserEndingLocation", &ATurret::execChangeLaserEndingLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
UClass* Z_Construct_UClass_ATurret_NoRegister()
{
	return ATurret::StaticClass();
}
struct Z_Construct_UClass_ATurret_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurret_AnyDamage, "AnyDamage" }, // 3085807759
		{ &Z_Construct_UFunction_ATurret_ChangeLaserBeginLocation, "ChangeLaserBeginLocation" }, // 3345862061
		{ &Z_Construct_UFunction_ATurret_ChangeLaserEndingLocation, "ChangeLaserEndingLocation" }, // 2730986609
		{ &Z_Construct_UFunction_ATurret_GetCapsuleComp, "GetCapsuleComp" }, // 2957983493
		{ &Z_Construct_UFunction_ATurret_GetCubeComp, "GetCubeComp" }, // 463660361
		{ &Z_Construct_UFunction_ATurret_GetLaserComp, "GetLaserComp" }, // 478096919
		{ &Z_Construct_UFunction_ATurret_GetTurretBaseComp, "GetTurretBaseComp" }, // 2589822613
		{ &Z_Construct_UFunction_ATurret_GetTurretLeftComp, "GetTurretLeftComp" }, // 2345960404
		{ &Z_Construct_UFunction_ATurret_GetTurretLeftPositionTimeline, "GetTurretLeftPositionTimeline" }, // 1047673065
		{ &Z_Construct_UFunction_ATurret_GetTurretRightComp, "GetTurretRightComp" }, // 943590615
		{ &Z_Construct_UFunction_ATurret_GetTurretRightPositionTimeline, "GetTurretRightPositionTimeline" }, // 1662410576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
	&ATurret::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurret()
{
	if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurret.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<ATurret>()
{
	return ATurret::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
ATurret::~ATurret() {}
// End Class ATurret

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Turret_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 4238358053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Turret_h_124132202(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Turret_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
