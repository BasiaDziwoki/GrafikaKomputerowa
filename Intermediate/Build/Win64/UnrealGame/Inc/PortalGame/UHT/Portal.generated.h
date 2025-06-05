// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UArrowComponent;
class UBoxComponent;
class UObject;
class UPrimitiveComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class UStaticMeshComponent;
struct FHitResult;
#ifdef PORTALGAME_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define PORTALGAME_Portal_generated_h

#define FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearExitCollider); \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap2); \
	DECLARE_FUNCTION(execBeginOverlap1);


#define FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_CALLBACK_WRAPPERS
#define FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGame"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APortal(APortal&&); \
	APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal) \
	NO_API virtual ~APortal();


#define FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_13_PROLOG
#define FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_CALLBACK_WRAPPERS \
	FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTALGAME_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_bdziw_Desktop_Studia_Portal_Source_PortalGame_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
