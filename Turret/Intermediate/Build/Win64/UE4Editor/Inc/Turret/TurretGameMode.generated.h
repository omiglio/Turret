// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURRET_TurretGameMode_generated_h
#error "TurretGameMode.generated.h already included, missing '#pragma once' in TurretGameMode.h"
#endif
#define TURRET_TurretGameMode_generated_h

#define Turret_Source_Turret_TurretGameMode_h_12_SPARSE_DATA
#define Turret_Source_Turret_TurretGameMode_h_12_RPC_WRAPPERS
#define Turret_Source_Turret_TurretGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Turret_Source_Turret_TurretGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurretGameMode(); \
	friend struct Z_Construct_UClass_ATurretGameMode_Statics; \
public: \
	DECLARE_CLASS(ATurretGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Turret"), TURRET_API) \
	DECLARE_SERIALIZER(ATurretGameMode)


#define Turret_Source_Turret_TurretGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATurretGameMode(); \
	friend struct Z_Construct_UClass_ATurretGameMode_Statics; \
public: \
	DECLARE_CLASS(ATurretGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Turret"), TURRET_API) \
	DECLARE_SERIALIZER(ATurretGameMode)


#define Turret_Source_Turret_TurretGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TURRET_API ATurretGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurretGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TURRET_API, ATurretGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TURRET_API ATurretGameMode(ATurretGameMode&&); \
	TURRET_API ATurretGameMode(const ATurretGameMode&); \
public:


#define Turret_Source_Turret_TurretGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TURRET_API ATurretGameMode(ATurretGameMode&&); \
	TURRET_API ATurretGameMode(const ATurretGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TURRET_API, ATurretGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurretGameMode)


#define Turret_Source_Turret_TurretGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Turret_Source_Turret_TurretGameMode_h_9_PROLOG
#define Turret_Source_Turret_TurretGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Turret_Source_Turret_TurretGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Turret_Source_Turret_TurretGameMode_h_12_SPARSE_DATA \
	Turret_Source_Turret_TurretGameMode_h_12_RPC_WRAPPERS \
	Turret_Source_Turret_TurretGameMode_h_12_INCLASS \
	Turret_Source_Turret_TurretGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Turret_Source_Turret_TurretGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Turret_Source_Turret_TurretGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Turret_Source_Turret_TurretGameMode_h_12_SPARSE_DATA \
	Turret_Source_Turret_TurretGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Turret_Source_Turret_TurretGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Turret_Source_Turret_TurretGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURRET_API UClass* StaticClass<class ATurretGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Turret_Source_Turret_TurretGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
