// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraAnim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UCameraAnim::StaticRegisterNativesUCameraAnim()
	{
	}
	UClass* Z_Construct_UClass_UCameraAnim_NoRegister()
	{
		return UCameraAnim::StaticClass();
	}
	UClass* Z_Construct_UClass_UCameraAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Camera/CameraAnim.h" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "A predefined animation to be played on a camera" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePostProcessBlendWeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "Default PP blend weight to put on the animated camera. For modifying PP without keyframes." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "BasePostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnim, BasePostProcessBlendWeight), METADATA_PARAMS(NewProp_BasePostProcessBlendWeight_MetaData, ARRAY_COUNT(NewProp_BasePostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePostProcessSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "Default PP settings to put on the animated camera. For modifying PP without keyframes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePostProcessSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePostProcessSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnim, BasePostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(NewProp_BasePostProcessSettings_MetaData, ARRAY_COUNT(NewProp_BasePostProcessSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[] = {
				{ "Category", "CameraAnim" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "The base FOV that all FOV keys are relative to." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFOV = { UE4CodeGen_Private::EPropertyClass::Float, "BaseFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UCameraAnim, BaseFOV), METADATA_PARAMS(NewProp_BaseFOV_MetaData, ARRAY_COUNT(NewProp_BaseFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToInitialFOV_MetaData[] = {
				{ "Category", "CameraAnim" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "If true, assume all FOV keys are intended be offsets from the start of the animation.\nIf false, assume all FOV keys are authored relative to the current FOV of the camera at the start of the animation." },
			};
#endif
			auto NewProp_bRelativeToInitialFOV_SetBit = [](void* Obj){ ((UCameraAnim*)Obj)->bRelativeToInitialFOV = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToInitialFOV = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelativeToInitialFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraAnim), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelativeToInitialFOV_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRelativeToInitialFOV_MetaData, ARRAY_COUNT(NewProp_bRelativeToInitialFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToInitialTransform_MetaData[] = {
				{ "Category", "CameraAnim" },
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "If true, assume all transform keys are intended be offsets from the start of the animation. This allows the animation to be authored at any world location and be applied as a delta to the camera.\nIf false, assume all transform keys are authored relative to the world origin. Positions will be directly applied as deltas to the camera." },
			};
#endif
			auto NewProp_bRelativeToInitialTransform_SetBit = [](void* Obj){ ((UCameraAnim*)Obj)->bRelativeToInitialTransform = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToInitialTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelativeToInitialTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraAnim), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelativeToInitialTransform_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRelativeToInitialTransform_MetaData, ARRAY_COUNT(NewProp_bRelativeToInitialTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "AABB in local space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBox = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundingBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnim, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_BoundingBox_MetaData, ARRAY_COUNT(NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLength_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "Length, in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLength = { UE4CodeGen_Private::EPropertyClass::Float, "AnimLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnim, AnimLength), METADATA_PARAMS(NewProp_AnimLength_MetaData, ARRAY_COUNT(NewProp_AnimLength_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInterpGroup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "This is to preview and they only exists in editor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInterpGroup = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewInterpGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UCameraAnim, PreviewInterpGroup), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(NewProp_PreviewInterpGroup_MetaData, ARRAY_COUNT(NewProp_PreviewInterpGroup_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpGroup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
				{ "ToolTip", "The UInterpGroup that holds our actual interpolation data." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraInterpGroup = { UE4CodeGen_Private::EPropertyClass::Object, "CameraInterpGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UCameraAnim, CameraInterpGroup), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(NewProp_CameraInterpGroup_MetaData, ARRAY_COUNT(NewProp_CameraInterpGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePostProcessBlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePostProcessSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelativeToInitialFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelativeToInitialTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundingBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimLength,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewInterpGroup,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraInterpGroup,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCameraAnim>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCameraAnim::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080280u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnim, 2754890693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnim(Z_Construct_UClass_UCameraAnim, &UCameraAnim::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
