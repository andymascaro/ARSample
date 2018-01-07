// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraModifier_CameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier_CameraShake() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
// End Cross Module References
	void UCameraModifier_CameraShake::StaticRegisterNativesUCameraModifier_CameraShake()
	{
	}
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCameraModifier,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Camera/CameraModifier_CameraShake.h" },
				{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
				{ "ToolTip", "A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShake to\nthe owning camera." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitScreenShakeScale_MetaData[] = {
				{ "Category", "CameraModifier_CameraShake" },
				{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
				{ "ToolTip", "Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitScreenShakeScale = { UE4CodeGen_Private::EPropertyClass::Float, "SplitScreenShakeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UCameraModifier_CameraShake, SplitScreenShakeScale), METADATA_PARAMS(NewProp_SplitScreenShakeScale_MetaData, ARRAY_COUNT(NewProp_SplitScreenShakeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveShakes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
				{ "ToolTip", "List of active CameraShake instances" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveShakes = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveShakes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraModifier_CameraShake, ActiveShakes), METADATA_PARAMS(NewProp_ActiveShakes_MetaData, ARRAY_COUNT(NewProp_ActiveShakes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveShakes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveShakes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplitScreenShakeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveShakes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveShakes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCameraModifier_CameraShake>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCameraModifier_CameraShake::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Camera",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraModifier_CameraShake, 1088060896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraModifier_CameraShake(Z_Construct_UClass_UCameraModifier_CameraShake, &UCameraModifier_CameraShake::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraModifier_CameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier_CameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
