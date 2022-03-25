// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TURRET_TurretProjectile_generated_h
#error "TurretProjectile.generated.h already included, missing '#pragma once' in TurretProjectile.h"
#endif
#define TURRET_TurretProjectile_generated_h

#define Turret_Source_Turret_TurretProjectile_h_15_SPARSE_DATA
#define Turret_Source_Turret_TurretProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Turret_Source_Turret_TurretProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Turret_Source_Turret_TurretProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurretProjectile(); \
	friend struct Z_Construct_UClass_ATurretProjectile_Statics; \
public: \
	DECLARE_CLASS(ATurretProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Turret"), NO_API) \
	DECLARE_SERIALIZER(ATurretProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Turret_Source_Turret_TurretProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATurretProjectile(); \
	friend struct Z_Construct_UClass_ATurretProjectile_Statics; \
public: \
	DECLARE_CLASS(ATurretProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Turret"), NO_API) \
	DECLARE_SERIALIZER(ATurretProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Turret_Source_Turret_TurretProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurretProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurretProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretProjectile(ATurretProjectile&&); \
	NO_API ATurretProjectile(const ATurretProjectile&); \
public:


#define Turret_Source_Turret_TurretProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretProjectile(ATurretProjectile&&); \
	NO_API ATurretProjectile(const ATurretProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurretProjectile)


#define Turret_Source_Turret_TurretProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATurretProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATurretProjectile, ProjectileMovement); }


#define Turret_Source_Turret_TurretProjectile_h_12_PROLOG
#define Turret_Source_Turret_TurretProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Turret_Source_Turret_TurretProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Turret_Source_Turret_TurretProjectile_h_15_SPARSE_DATA \
	Turret_Source_Turret_TurretProjectile_h_15_RPC_WRAPPERS \
	Turret_Source_Turret_TurretProjectile_h_15_INCLASS \
	Turret_Source_Turret_TurretProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Turret_Source_Turret_TurretProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Turret_Source_Turret_TurretProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Turret_Source_Turret_TurretProjectile_h_15_SPARSE_DATA \
	Turret_Source_Turret_TurretProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Turret_Source_Turret_TurretProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Turret_Source_Turret_TurretProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURRET_API UClass* StaticClass<class ATurretProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Turret_Source_Turret_TurretProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
