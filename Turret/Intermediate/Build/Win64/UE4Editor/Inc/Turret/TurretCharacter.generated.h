// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURRET_TurretCharacter_generated_h
#error "TurretCharacter.generated.h already included, missing '#pragma once' in TurretCharacter.h"
#endif
#define TURRET_TurretCharacter_generated_h

#define Turret_Source_Turret_TurretCharacter_h_20_SPARSE_DATA
#define Turret_Source_Turret_TurretCharacter_h_20_RPC_WRAPPERS
#define Turret_Source_Turret_TurretCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Turret_Source_Turret_TurretCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurretCharacter(); \
	friend struct Z_Construct_UClass_ATurretCharacter_Statics; \
public: \
	DECLARE_CLASS(ATurretCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Turret"), NO_API) \
	DECLARE_SERIALIZER(ATurretCharacter)


#define Turret_Source_Turret_TurretCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATurretCharacter(); \
	friend struct Z_Construct_UClass_ATurretCharacter_Statics; \
public: \
	DECLARE_CLASS(ATurretCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Turret"), NO_API) \
	DECLARE_SERIALIZER(ATurretCharacter)


#define Turret_Source_Turret_TurretCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurretCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurretCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretCharacter(ATurretCharacter&&); \
	NO_API ATurretCharacter(const ATurretCharacter&); \
public:


#define Turret_Source_Turret_TurretCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretCharacter(ATurretCharacter&&); \
	NO_API ATurretCharacter(const ATurretCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurretCharacter)


#define Turret_Source_Turret_TurretCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATurretCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATurretCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATurretCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATurretCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATurretCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATurretCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATurretCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATurretCharacter, L_MotionController); }


#define Turret_Source_Turret_TurretCharacter_h_17_PROLOG
#define Turret_Source_Turret_TurretCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Turret_Source_Turret_TurretCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Turret_Source_Turret_TurretCharacter_h_20_SPARSE_DATA \
	Turret_Source_Turret_TurretCharacter_h_20_RPC_WRAPPERS \
	Turret_Source_Turret_TurretCharacter_h_20_INCLASS \
	Turret_Source_Turret_TurretCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Turret_Source_Turret_TurretCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Turret_Source_Turret_TurretCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Turret_Source_Turret_TurretCharacter_h_20_SPARSE_DATA \
	Turret_Source_Turret_TurretCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Turret_Source_Turret_TurretCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Turret_Source_Turret_TurretCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURRET_API UClass* StaticClass<class ATurretCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Turret_Source_Turret_TurretCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
