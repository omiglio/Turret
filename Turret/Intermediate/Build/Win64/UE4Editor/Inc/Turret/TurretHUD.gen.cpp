// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Turret/TurretHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurretHUD() {}
// Cross Module References
	TURRET_API UClass* Z_Construct_UClass_ATurretHUD_NoRegister();
	TURRET_API UClass* Z_Construct_UClass_ATurretHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Turret();
// End Cross Module References
	void ATurretHUD::StaticRegisterNativesATurretHUD()
	{
	}
	UClass* Z_Construct_UClass_ATurretHUD_NoRegister()
	{
		return ATurretHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATurretHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurretHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Turret,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TurretHUD.h" },
		{ "ModuleRelativePath", "TurretHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurretHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurretHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurretHUD_Statics::ClassParams = {
		&ATurretHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATurretHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurretHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurretHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurretHUD, 1241021910);
	template<> TURRET_API UClass* StaticClass<ATurretHUD>()
	{
		return ATurretHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurretHUD(Z_Construct_UClass_ATurretHUD, &ATurretHUD::StaticClass, TEXT("/Script/Turret"), TEXT("ATurretHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurretHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
