// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectPawn_generated_h
#error "MyProjectPawn.generated.h already included, missing '#pragma once' in MyProjectPawn.h"
#endif
#define MYPROJECT_MyProjectPawn_generated_h

#define MyProject_Source_MyProject_MyProjectPawn_h_17_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyProjectPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyProjectPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectPawn(); \
	friend struct Z_Construct_UClass_AMyProjectPawn_Statics; \
public: \
	DECLARE_CLASS(AMyProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectPawn)


#define MyProject_Source_MyProject_MyProjectPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectPawn(); \
	friend struct Z_Construct_UClass_AMyProjectPawn_Statics; \
public: \
	DECLARE_CLASS(AMyProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectPawn)


#define MyProject_Source_MyProject_MyProjectPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectPawn(AMyProjectPawn&&); \
	NO_API AMyProjectPawn(const AMyProjectPawn&); \
public:


#define MyProject_Source_MyProject_MyProjectPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectPawn(AMyProjectPawn&&); \
	NO_API AMyProjectPawn(const AMyProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectPawn)


#define MyProject_Source_MyProject_MyProjectPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyProjectPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyProjectPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AMyProjectPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AMyProjectPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AMyProjectPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AMyProjectPawn, InCarGear); }


#define MyProject_Source_MyProject_MyProjectPawn_h_14_PROLOG
#define MyProject_Source_MyProject_MyProjectPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectPawn_h_17_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectPawn_h_17_INCLASS \
	MyProject_Source_MyProject_MyProjectPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectPawn_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
