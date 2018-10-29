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
	MYPROJECT_API UFunction* Z_Construct_UFunction_UBombponent_OnExplode();
// End Cross Module References
	void UBombponent::StaticRegisterNativesUBombponent()
	{
		UClass* Class = UBombponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExplode", &UBombponent::execOnExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBombponent_OnExplode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombponent_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bombponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombponent_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombponent, "OnExplode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombponent_OnExplode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBombponent_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombponent_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBombponent_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBombponent_NoRegister()
	{
		return UBombponent::StaticClass();
	}
	struct Z_Construct_UClass_UBombponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TriggerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BombTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBombponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBombponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBombponent_OnExplode, "OnExplode" }, // 683492674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Bombponent.h" },
		{ "ModuleRelativePath", "Bombponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombponent_Statics::NewProp_TriggerSpeed_MetaData[] = {
		{ "Category", "Bombponent" },
		{ "ModuleRelativePath", "Bombponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBombponent_Statics::NewProp_TriggerSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "TriggerSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBombponent, TriggerSpeed), METADATA_PARAMS(Z_Construct_UClass_UBombponent_Statics::NewProp_TriggerSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBombponent_Statics::NewProp_TriggerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombponent_Statics::NewProp_BombTime_MetaData[] = {
		{ "Category", "Bombponent" },
		{ "ModuleRelativePath", "Bombponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBombponent_Statics::NewProp_BombTime = { UE4CodeGen_Private::EPropertyClass::Float, "BombTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBombponent, BombTime), METADATA_PARAMS(Z_Construct_UClass_UBombponent_Statics::NewProp_BombTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBombponent_Statics::NewProp_BombTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBombponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombponent_Statics::NewProp_TriggerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombponent_Statics::NewProp_BombTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBombponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBombponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBombponent_Statics::ClassParams = {
		&UBombponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBombponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBombponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UBombponent, 2016393313);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBombponent(Z_Construct_UClass_UBombponent, &UBombponent::StaticClass, TEXT("/Script/MyProject"), TEXT("UBombponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
