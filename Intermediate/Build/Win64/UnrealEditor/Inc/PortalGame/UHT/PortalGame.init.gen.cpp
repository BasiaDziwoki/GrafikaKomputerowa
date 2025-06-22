// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PortalGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PortalGame()
	{
		if (!Z_Registration_Info_UPackage__Script_PortalGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PortalGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x18C830EA,
				0x54E4699A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PortalGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PortalGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PortalGame(Z_Construct_UPackage__Script_PortalGame, TEXT("/Script/PortalGame"), Z_Registration_Info_UPackage__Script_PortalGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x18C830EA, 0x54E4699A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
