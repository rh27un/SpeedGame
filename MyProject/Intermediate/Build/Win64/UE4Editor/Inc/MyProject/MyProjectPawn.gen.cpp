// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectPawn() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AMyProjectPawn::StaticRegisterNativesAMyProjectPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister()
	{
		return AMyProjectPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInReverseGear_MetaData[];
#endif
		static void NewProp_bInReverseGear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReverseGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCarCameraActive_MetaData[];
#endif
		static void NewProp_bInCarCameraActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCarCameraActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayReverseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayReverseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GearDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SpeedDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyProjectPawn.h" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Are we in reverse gear" },
	};
#endif
	void Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear_SetBit(void* Obj)
	{
		((AMyProjectPawn*)Obj)->bInReverseGear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear = { UE4CodeGen_Private::EPropertyClass::Bool, "bInReverseGear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000030015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyProjectPawn), &Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Are we using incar camera" },
	};
#endif
	void Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive_SetBit(void* Obj)
	{
		((AMyProjectPawn*)Obj)->bInCarCameraActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bInCarCameraActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyProjectPawn), &Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayReverseColor_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "The color of the incar gear text when in reverse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayReverseColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GearDisplayReverseColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, GearDisplayReverseColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayReverseColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayReverseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayColor_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "The color of the incar gear text in forward gears" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GearDisplayColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, GearDisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "The current gear as a string (R,N, 1,2 etc)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayString = { UE4CodeGen_Private::EPropertyClass::Text, "GearDisplayString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, GearDisplayString), METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayString_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpeedDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "The current speed as a string eg 10 km/h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpeedDisplayString = { UE4CodeGen_Private::EPropertyClass::Text, "SpeedDisplayString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, SpeedDisplayString), METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpeedDisplayString_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpeedDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarGear_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Text component for the In-Car gear" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarGear = { UE4CodeGen_Private::EPropertyClass::Object, "InCarGear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, InCarGear), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarGear_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Text component for the In-Car speed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarSpeed = { UE4CodeGen_Private::EPropertyClass::Object, "InCarSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, InCarSpeed), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Camera component for the In-Car view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCamera = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, InternalCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "SCene component for the In-Car view origin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, InternalCameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCameraBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Camera component that will be our viewpoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Spring arm that will offset the camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AMyProjectPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInReverseGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_bInCarCameraActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayReverseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_GearDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpeedDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InCarSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_InternalCameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectPawn_Statics::ClassParams = {
		&AMyProjectPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMyProjectPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectPawn, 2876578485);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectPawn(Z_Construct_UClass_AMyProjectPawn, &AMyProjectPawn::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
