// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGame/Portal.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortal() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PORTALGAME_API UClass* Z_Construct_UClass_APortal();
PORTALGAME_API UClass* Z_Construct_UClass_APortal_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGame();
// End Cross Module References

// Begin Class APortal Function BeginOverlap1
struct Z_Construct_UFunction_APortal_BeginOverlap1_Statics
{
	struct Portal_eventBeginOverlap1_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap1_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap1_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap1_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap1_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Portal_eventBeginOverlap1_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Portal_eventBeginOverlap1_Parms), &Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap1_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_BeginOverlap1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap1_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_BeginOverlap1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_BeginOverlap1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "BeginOverlap1", nullptr, nullptr, Z_Construct_UFunction_APortal_BeginOverlap1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_BeginOverlap1_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortal_BeginOverlap1_Statics::Portal_eventBeginOverlap1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_BeginOverlap1_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_BeginOverlap1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortal_BeginOverlap1_Statics::Portal_eventBeginOverlap1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_BeginOverlap1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_BeginOverlap1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execBeginOverlap1)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginOverlap1(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APortal Function BeginOverlap1

// Begin Class APortal Function BeginOverlap2
struct Z_Construct_UFunction_APortal_BeginOverlap2_Statics
{
	struct Portal_eventBeginOverlap2_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap2_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap2_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap2_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap2_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Portal_eventBeginOverlap2_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Portal_eventBeginOverlap2_Parms), &Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventBeginOverlap2_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_BeginOverlap2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_BeginOverlap2_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_BeginOverlap2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_BeginOverlap2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "BeginOverlap2", nullptr, nullptr, Z_Construct_UFunction_APortal_BeginOverlap2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_BeginOverlap2_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortal_BeginOverlap2_Statics::Portal_eventBeginOverlap2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_BeginOverlap2_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_BeginOverlap2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortal_BeginOverlap2_Statics::Portal_eventBeginOverlap2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_BeginOverlap2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_BeginOverlap2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execBeginOverlap2)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginOverlap2(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APortal Function BeginOverlap2

// Begin Class APortal Function ClearExitCollider
struct Z_Construct_UFunction_APortal_ClearExitCollider_Statics
{
	struct Portal_eventClearExitCollider_Parms
	{
		UObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_ClearExitCollider_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventClearExitCollider_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_ClearExitCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_ClearExitCollider_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ClearExitCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_ClearExitCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "ClearExitCollider", nullptr, nullptr, Z_Construct_UFunction_APortal_ClearExitCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ClearExitCollider_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortal_ClearExitCollider_Statics::Portal_eventClearExitCollider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_ClearExitCollider_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_ClearExitCollider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortal_ClearExitCollider_Statics::Portal_eventClearExitCollider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_ClearExitCollider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_ClearExitCollider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execClearExitCollider)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearExitCollider(Z_Param_Object);
	P_NATIVE_END;
}
// End Class APortal Function ClearExitCollider

// Begin Class APortal Function EndOverlap
struct Z_Construct_UFunction_APortal_EndOverlap_Statics
{
	struct Portal_eventEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Portal_eventEndOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Portal_eventEndOverlap_Parms), &Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventEndOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_EndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_EndOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_EndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "EndOverlap", nullptr, nullptr, Z_Construct_UFunction_APortal_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_EndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortal_EndOverlap_Statics::Portal_eventEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_EndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_EndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortal_EndOverlap_Statics::Portal_eventEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_EndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_EndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APortal Function EndOverlap

// Begin Class APortal Function GetCamRoot1Comp
struct Portal_eventGetCamRoot1Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetCamRoot1Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetCamRoot1Comp = FName(TEXT("GetCamRoot1Comp"));
USceneComponent* APortal::GetCamRoot1Comp()
{
	Portal_eventGetCamRoot1Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetCamRoot1Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetCamRoot1Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetCamRoot1Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::PropPointers), sizeof(Portal_eventGetCamRoot1Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetCamRoot1Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetCamRoot1Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetCamRoot1Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetCamRoot1Comp

// Begin Class APortal Function GetCamRoot2Comp
struct Portal_eventGetCamRoot2Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetCamRoot2Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetCamRoot2Comp = FName(TEXT("GetCamRoot2Comp"));
USceneComponent* APortal::GetCamRoot2Comp()
{
	Portal_eventGetCamRoot2Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetCamRoot2Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetCamRoot2Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetCamRoot2Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::PropPointers), sizeof(Portal_eventGetCamRoot2Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetCamRoot2Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetCamRoot2Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetCamRoot2Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetCamRoot2Comp

// Begin Class APortal Function GetCol1Comp
struct Portal_eventGetCol1Comp_Parms
{
	UBoxComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetCol1Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetCol1Comp = FName(TEXT("GetCol1Comp"));
UBoxComponent* APortal::GetCol1Comp()
{
	Portal_eventGetCol1Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetCol1Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetCol1Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetCol1Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetCol1Comp_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetCol1Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetCol1Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCol1Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetCol1Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetCol1Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetCol1Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCol1Comp_Statics::PropPointers), sizeof(Portal_eventGetCol1Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCol1Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetCol1Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetCol1Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetCol1Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetCol1Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetCol1Comp

// Begin Class APortal Function GetCol2Comp
struct Portal_eventGetCol2Comp_Parms
{
	UBoxComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetCol2Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetCol2Comp = FName(TEXT("GetCol2Comp"));
UBoxComponent* APortal::GetCol2Comp()
{
	Portal_eventGetCol2Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetCol2Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetCol2Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetCol2Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetCol2Comp_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetCol2Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetCol2Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCol2Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetCol2Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetCol2Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetCol2Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCol2Comp_Statics::PropPointers), sizeof(Portal_eventGetCol2Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetCol2Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetCol2Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetCol2Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetCol2Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetCol2Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetCol2Comp

// Begin Class APortal Function GetD1Comp
struct Portal_eventGetD1Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetD1Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetD1Comp = FName(TEXT("GetD1Comp"));
USceneComponent* APortal::GetD1Comp()
{
	Portal_eventGetD1Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetD1Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetD1Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetD1Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetD1Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetD1Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetD1Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD1Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetD1Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetD1Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetD1Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD1Comp_Statics::PropPointers), sizeof(Portal_eventGetD1Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD1Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetD1Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetD1Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetD1Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetD1Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetD1Comp

// Begin Class APortal Function GetD1ForwardDirectionComp
struct Portal_eventGetD1ForwardDirectionComp_Parms
{
	UArrowComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetD1ForwardDirectionComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetD1ForwardDirectionComp = FName(TEXT("GetD1ForwardDirectionComp"));
UArrowComponent* APortal::GetD1ForwardDirectionComp()
{
	Portal_eventGetD1ForwardDirectionComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetD1ForwardDirectionComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetD1ForwardDirectionComp_Parms, ReturnValue), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetD1ForwardDirectionComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::PropPointers), sizeof(Portal_eventGetD1ForwardDirectionComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetD1ForwardDirectionComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetD1ForwardDirectionComp

// Begin Class APortal Function GetD2Comp
struct Portal_eventGetD2Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetD2Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetD2Comp = FName(TEXT("GetD2Comp"));
USceneComponent* APortal::GetD2Comp()
{
	Portal_eventGetD2Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetD2Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetD2Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetD2Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetD2Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetD2Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetD2Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD2Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetD2Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetD2Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetD2Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD2Comp_Statics::PropPointers), sizeof(Portal_eventGetD2Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD2Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetD2Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetD2Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetD2Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetD2Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetD2Comp

// Begin Class APortal Function GetD2ForwardDirectionComp
struct Portal_eventGetD2ForwardDirectionComp_Parms
{
	UArrowComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetD2ForwardDirectionComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetD2ForwardDirectionComp = FName(TEXT("GetD2ForwardDirectionComp"));
UArrowComponent* APortal::GetD2ForwardDirectionComp()
{
	Portal_eventGetD2ForwardDirectionComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetD2ForwardDirectionComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetD2ForwardDirectionComp_Parms, ReturnValue), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetD2ForwardDirectionComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::PropPointers), sizeof(Portal_eventGetD2ForwardDirectionComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetD2ForwardDirectionComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetD2ForwardDirectionComp

// Begin Class APortal Function GetDComp
struct Portal_eventGetDComp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetDComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetDComp = FName(TEXT("GetDComp"));
USceneComponent* APortal::GetDComp()
{
	Portal_eventGetDComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetDComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetDComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetDComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetDComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetDComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetDComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetDComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetDComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDComp_Statics::PropPointers), sizeof(Portal_eventGetDComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetDComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetDComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetDComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetDComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetDComp

// Begin Class APortal Function GetDoor1Comp
struct Portal_eventGetDoor1Comp_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetDoor1Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetDoor1Comp = FName(TEXT("GetDoor1Comp"));
UStaticMeshComponent* APortal::GetDoor1Comp()
{
	Portal_eventGetDoor1Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetDoor1Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetDoor1Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetDoor1Comp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetDoor1Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::PropPointers), sizeof(Portal_eventGetDoor1Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetDoor1Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetDoor1Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetDoor1Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetDoor1Comp

// Begin Class APortal Function GetDoor2Comp
struct Portal_eventGetDoor2Comp_Parms
{
	UStaticMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetDoor2Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetDoor2Comp = FName(TEXT("GetDoor2Comp"));
UStaticMeshComponent* APortal::GetDoor2Comp()
{
	Portal_eventGetDoor2Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetDoor2Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetDoor2Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetDoor2Comp_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetDoor2Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::PropPointers), sizeof(Portal_eventGetDoor2Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetDoor2Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetDoor2Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetDoor2Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetDoor2Comp

// Begin Class APortal Function GetDummyPortalComp
struct Portal_eventGetDummyPortalComp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetDummyPortalComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetDummyPortalComp = FName(TEXT("GetDummyPortalComp"));
USceneComponent* APortal::GetDummyPortalComp()
{
	Portal_eventGetDummyPortalComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetDummyPortalComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetDummyPortalComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetDummyPortalComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::PropPointers), sizeof(Portal_eventGetDummyPortalComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetDummyPortalComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetDummyPortalComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetDummyPortalComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetDummyPortalComp

// Begin Class APortal Function GetExitCollider
struct Portal_eventGetExitCollider_Parms
{
	UBoxComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetExitCollider_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetExitCollider = FName(TEXT("GetExitCollider"));
UBoxComponent* APortal::GetExitCollider()
{
	Portal_eventGetExitCollider_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetExitCollider);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetExitCollider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetExitCollider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetExitCollider_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetExitCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetExitCollider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetExitCollider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetExitCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetExitCollider", nullptr, nullptr, Z_Construct_UFunction_APortal_GetExitCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetExitCollider_Statics::PropPointers), sizeof(Portal_eventGetExitCollider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetExitCollider_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetExitCollider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetExitCollider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetExitCollider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetExitCollider_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetExitCollider

// Begin Class APortal Function GetLComp
struct Portal_eventGetLComp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetLComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetLComp = FName(TEXT("GetLComp"));
USceneComponent* APortal::GetLComp()
{
	Portal_eventGetLComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetLComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetLComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetLComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetLComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetLComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetLComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetLComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetLComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetLComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetLComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetLComp_Statics::PropPointers), sizeof(Portal_eventGetLComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetLComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetLComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetLComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetLComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetLComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetLComp

// Begin Class APortal Function GetP1CaptureComp
struct Portal_eventGetP1CaptureComp_Parms
{
	USceneCaptureComponent2D* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetP1CaptureComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetP1CaptureComp = FName(TEXT("GetP1CaptureComp"));
USceneCaptureComponent2D* APortal::GetP1CaptureComp()
{
	Portal_eventGetP1CaptureComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetP1CaptureComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetP1CaptureComp_Parms, ReturnValue), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetP1CaptureComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::PropPointers), sizeof(Portal_eventGetP1CaptureComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetP1CaptureComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetP1CaptureComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetP1CaptureComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetP1CaptureComp

// Begin Class APortal Function GetP2CaptureComp
struct Portal_eventGetP2CaptureComp_Parms
{
	USceneCaptureComponent2D* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetP2CaptureComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetP2CaptureComp = FName(TEXT("GetP2CaptureComp"));
USceneCaptureComponent2D* APortal::GetP2CaptureComp()
{
	Portal_eventGetP2CaptureComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetP2CaptureComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetP2CaptureComp_Parms, ReturnValue), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetP2CaptureComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::PropPointers), sizeof(Portal_eventGetP2CaptureComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetP2CaptureComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetP2CaptureComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetP2CaptureComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetP2CaptureComp

// Begin Class APortal Function GetPSim_D1Comp
struct Portal_eventGetPSim_D1Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetPSim_D1Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetPSim_D1Comp = FName(TEXT("GetPSim_D1Comp"));
USceneComponent* APortal::GetPSim_D1Comp()
{
	Portal_eventGetPSim_D1Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetPSim_D1Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetPSim_D1Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetPSim_D1Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::PropPointers), sizeof(Portal_eventGetPSim_D1Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetPSim_D1Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetPSim_D1Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetPSim_D1Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetPSim_D1Comp

// Begin Class APortal Function GetPSim_D2Comp
struct Portal_eventGetPSim_D2Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetPSim_D2Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetPSim_D2Comp = FName(TEXT("GetPSim_D2Comp"));
USceneComponent* APortal::GetPSim_D2Comp()
{
	Portal_eventGetPSim_D2Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetPSim_D2Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetPSim_D2Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetPSim_D2Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::PropPointers), sizeof(Portal_eventGetPSim_D2Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetPSim_D2Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetPSim_D2Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetPSim_D2Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetPSim_D2Comp

// Begin Class APortal Function GetRComp
struct Portal_eventGetRComp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetRComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetRComp = FName(TEXT("GetRComp"));
USceneComponent* APortal::GetRComp()
{
	Portal_eventGetRComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetRComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetRComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetRComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetRComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetRComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetRComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetRComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetRComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetRComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetRComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetRComp_Statics::PropPointers), sizeof(Portal_eventGetRComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetRComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetRComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetRComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetRComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetRComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetRComp

// Begin Class APortal Function GetTP1Comp
struct Portal_eventGetTP1Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetTP1Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetTP1Comp = FName(TEXT("GetTP1Comp"));
USceneComponent* APortal::GetTP1Comp()
{
	Portal_eventGetTP1Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetTP1Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetTP1Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetTP1Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetTP1Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetTP1Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetTP1Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetTP1Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetTP1Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetTP1Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetTP1Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetTP1Comp_Statics::PropPointers), sizeof(Portal_eventGetTP1Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetTP1Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetTP1Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetTP1Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetTP1Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetTP1Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetTP1Comp

// Begin Class APortal Function GetTP2Comp
struct Portal_eventGetTP2Comp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetTP2Comp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetTP2Comp = FName(TEXT("GetTP2Comp"));
USceneComponent* APortal::GetTP2Comp()
{
	Portal_eventGetTP2Comp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetTP2Comp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetTP2Comp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetTP2Comp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetTP2Comp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetTP2Comp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetTP2Comp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetTP2Comp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetTP2Comp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetTP2Comp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetTP2Comp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetTP2Comp_Statics::PropPointers), sizeof(Portal_eventGetTP2Comp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetTP2Comp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetTP2Comp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetTP2Comp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetTP2Comp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetTP2Comp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetTP2Comp

// Begin Class APortal Function GetUComp
struct Portal_eventGetUComp_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Portal_eventGetUComp_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_APortal_GetUComp = FName(TEXT("GetUComp"));
USceneComponent* APortal::GetUComp()
{
	Portal_eventGetUComp_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_APortal_GetUComp);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_APortal_GetUComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_GetUComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventGetUComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_GetUComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_GetUComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetUComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_GetUComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "GetUComp", nullptr, nullptr, Z_Construct_UFunction_APortal_GetUComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetUComp_Statics::PropPointers), sizeof(Portal_eventGetUComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_GetUComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_GetUComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Portal_eventGetUComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_GetUComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_GetUComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APortal Function GetUComp

// Begin Class APortal
void APortal::StaticRegisterNativesAPortal()
{
	UClass* Class = APortal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginOverlap1", &APortal::execBeginOverlap1 },
		{ "BeginOverlap2", &APortal::execBeginOverlap2 },
		{ "ClearExitCollider", &APortal::execClearExitCollider },
		{ "EndOverlap", &APortal::execEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortal);
UClass* Z_Construct_UClass_APortal_NoRegister()
{
	return APortal::StaticClass();
}
struct Z_Construct_UClass_APortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Portal.h" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APortal_BeginOverlap1, "BeginOverlap1" }, // 3282771295
		{ &Z_Construct_UFunction_APortal_BeginOverlap2, "BeginOverlap2" }, // 1893465202
		{ &Z_Construct_UFunction_APortal_ClearExitCollider, "ClearExitCollider" }, // 2080639422
		{ &Z_Construct_UFunction_APortal_EndOverlap, "EndOverlap" }, // 2820708658
		{ &Z_Construct_UFunction_APortal_GetCamRoot1Comp, "GetCamRoot1Comp" }, // 903769867
		{ &Z_Construct_UFunction_APortal_GetCamRoot2Comp, "GetCamRoot2Comp" }, // 1844472476
		{ &Z_Construct_UFunction_APortal_GetCol1Comp, "GetCol1Comp" }, // 2507132699
		{ &Z_Construct_UFunction_APortal_GetCol2Comp, "GetCol2Comp" }, // 251693727
		{ &Z_Construct_UFunction_APortal_GetD1Comp, "GetD1Comp" }, // 1967478040
		{ &Z_Construct_UFunction_APortal_GetD1ForwardDirectionComp, "GetD1ForwardDirectionComp" }, // 3542610279
		{ &Z_Construct_UFunction_APortal_GetD2Comp, "GetD2Comp" }, // 1914139200
		{ &Z_Construct_UFunction_APortal_GetD2ForwardDirectionComp, "GetD2ForwardDirectionComp" }, // 803713498
		{ &Z_Construct_UFunction_APortal_GetDComp, "GetDComp" }, // 1029657627
		{ &Z_Construct_UFunction_APortal_GetDoor1Comp, "GetDoor1Comp" }, // 532526651
		{ &Z_Construct_UFunction_APortal_GetDoor2Comp, "GetDoor2Comp" }, // 1853738753
		{ &Z_Construct_UFunction_APortal_GetDummyPortalComp, "GetDummyPortalComp" }, // 3393349324
		{ &Z_Construct_UFunction_APortal_GetExitCollider, "GetExitCollider" }, // 2924107262
		{ &Z_Construct_UFunction_APortal_GetLComp, "GetLComp" }, // 161142197
		{ &Z_Construct_UFunction_APortal_GetP1CaptureComp, "GetP1CaptureComp" }, // 1318399032
		{ &Z_Construct_UFunction_APortal_GetP2CaptureComp, "GetP2CaptureComp" }, // 2169510059
		{ &Z_Construct_UFunction_APortal_GetPSim_D1Comp, "GetPSim_D1Comp" }, // 664465008
		{ &Z_Construct_UFunction_APortal_GetPSim_D2Comp, "GetPSim_D2Comp" }, // 87275943
		{ &Z_Construct_UFunction_APortal_GetRComp, "GetRComp" }, // 1141141618
		{ &Z_Construct_UFunction_APortal_GetTP1Comp, "GetTP1Comp" }, // 4103312321
		{ &Z_Construct_UFunction_APortal_GetTP2Comp, "GetTP2Comp" }, // 3299471326
		{ &Z_Construct_UFunction_APortal_GetUComp, "GetUComp" }, // 4029355111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APortal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortal_Statics::ClassParams = {
	&APortal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams), Z_Construct_UClass_APortal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortal()
{
	if (!Z_Registration_Info_UClass_APortal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortal.OuterSingleton, Z_Construct_UClass_APortal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortal.OuterSingleton;
}
template<> PORTALGAME_API UClass* StaticClass<APortal>()
{
	return APortal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortal);
APortal::~APortal() {}
// End Class APortal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortal, APortal::StaticClass, TEXT("APortal"), &Z_Registration_Info_UClass_APortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortal), 23725083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_1936640271(TEXT("/Script/PortalGame"),
	Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
