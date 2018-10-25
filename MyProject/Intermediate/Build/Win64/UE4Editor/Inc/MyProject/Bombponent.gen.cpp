// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Bombponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombponent() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UBombponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UBombponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UBombponent::StaticRegisterNativesUBombponent()
	{
	}
	UClass* Z_Construct_UClass_UBombponent_NoRegister()
	{
		return UBombponent::StaticClass();
	}
	struct Z_Construct_UClass_UBombponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBombponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Bombponent.h" },
		{ "ModuleRelativePath", "Bombponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBombponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBombponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBombponent_Statics::ClassParams = {
		&UBombponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBombponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBombponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBombponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBombponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBombponent, 3527146247);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBombponent(Z_Construct_UClass_UBombponent, &UBombponent::StaticClass, TEXT("/Script/MyProject"), TEXT("UBombponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
