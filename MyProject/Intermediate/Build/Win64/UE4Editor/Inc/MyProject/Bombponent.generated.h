// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Bombponent_generated_h
#error "Bombponent.generated.h already included, missing '#pragma once' in Bombponent.h"
#endif
#define MYPROJECT_Bombponent_generated_h

#define MyProject_Source_MyProject_Bombponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_Bombponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_Bombponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBombponent(); \
	friend struct Z_Construct_UClass_UBombponent_Statics; \
public: \
	DECLARE_CLASS(UBombponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UBombponent)


#define MyProject_Source_MyProject_Bombponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBombponent(); \
	friend struct Z_Construct_UClass_UBombponent_Statics; \
public: \
	DECLARE_CLASS(UBombponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UBombponent)


#define MyProject_Source_MyProject_Bombponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBombponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBombponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBombponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBombponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBombponent(UBombponent&&); \
	NO_API UBombponent(const UBombponent&); \
public:


#define MyProject_Source_MyProject_Bombponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBombponent(UBombponent&&); \
	NO_API UBombponent(const UBombponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBombponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBombponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBombponent)


#define MyProject_Source_MyProject_Bombponent_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Bombponent_h_11_PROLOG
#define MyProject_Source_MyProject_Bombponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Bombponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Bombponent_h_14_RPC_WRAPPERS \
	MyProject_Source_MyProject_Bombponent_h_14_INCLASS \
	MyProject_Source_MyProject_Bombponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Bombponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Bombponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Bombponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Bombponent_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Bombponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Bombponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
