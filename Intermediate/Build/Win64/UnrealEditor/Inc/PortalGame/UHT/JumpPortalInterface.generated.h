// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JumpPortalInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTALGAME_JumpPortalInterface_generated_h
#error "JumpPortalInterface.generated.h already included, missing '#pragma once' in JumpPortalInterface.h"
#endif
#define PORTALGAME_JumpPortalInterface_generated_h

#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void JumpPortal_Implementation(FVector TargetLocation, FRotator TargetRotation) {}; \
	DECLARE_FUNCTION(execJumpPortal);


#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PORTALGAME_API UJumpPortalInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJumpPortalInterface(UJumpPortalInterface&&); \
	UJumpPortalInterface(const UJumpPortalInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PORTALGAME_API, UJumpPortalInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpPortalInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpPortalInterface) \
	PORTALGAME_API virtual ~UJumpPortalInterface();


#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUJumpPortalInterface(); \
	friend struct Z_Construct_UClass_UJumpPortalInterface_Statics; \
public: \
	DECLARE_CLASS(UJumpPortalInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PortalGame"), PORTALGAME_API) \
	DECLARE_SERIALIZER(UJumpPortalInterface)


#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IJumpPortalInterface() {} \
public: \
	typedef UJumpPortalInterface UClassType; \
	typedef IJumpPortalInterface ThisClass; \
	static void Execute_JumpPortal(UObject* O, FVector TargetLocation, FRotator TargetRotation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_10_PROLOG
#define FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTALGAME_API UClass* StaticClass<class UJumpPortalInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_bdziw_Desktop_Studia_GrafikaKomputerowa_GrafikaKomputerowa_Source_PortalGame_JumpPortalInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
