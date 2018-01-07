// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SceneCaptureComponent2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
// End Cross Module References
	void USceneCaptureComponent2D::StaticRegisterNativesUSceneCaptureComponent2D()
	{
		UClass* Class = USceneCaptureComponent2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", (Native)&USceneCaptureComponent2D::execAddOrUpdateBlendable },
			{ "CaptureScene", (Native)&USceneCaptureComponent2D::execCaptureScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable()
	{
		struct SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight = { UE4CodeGen_Private::EPropertyClass::Float, "InWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject = { UE4CodeGen_Private::EPropertyClass::Interface, "InBlendableObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlendableObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "CPP_Default_InWeight", "1.000000" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, "AddOrUpdateBlendable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, "CaptureScene", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister()
	{
		return USceneCaptureComponent2D::StaticClass();
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 1487033264
				{ &Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene, "CaptureScene" }, // 626783990
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Collision Object Physics SceneComponent abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SceneCaptureComponent2D.h" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraCutThisFrame_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "True if we did a camera cut this frame. Automatically reset to false at every capture.\nThis flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\nSimilar to UPlayerCameraManager::bGameCameraCutThisFrame." },
			};
#endif
			auto NewProp_bCameraCutThisFrame_SetBit = [](void* Obj){ ((USceneCaptureComponent2D*)Obj)->bCameraCutThisFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bCameraCutThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USceneCaptureComponent2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCameraCutThisFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCameraCutThisFrame_MetaData, ARRAY_COUNT(NewProp_bCameraCutThisFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneNormal_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Normal for the plane." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipPlaneNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "ClipPlaneNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ClipPlaneNormal_MetaData, ARRAY_COUNT(NewProp_ClipPlaneNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneBase_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Base position for the clip plane, can be any position on the plane." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClipPlaneBase = { UE4CodeGen_Private::EPropertyClass::Struct, "ClipPlaneBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ClipPlaneBase_MetaData, ARRAY_COUNT(NewProp_ClipPlaneBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableClipPlane_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Enables a clip plane while rendering the scene capture which is useful for portals.\nThe global clip plane must be enabled in the renderer project settings for this to work." },
			};
#endif
			auto NewProp_bEnableClipPlane_SetBit = [](void* Obj){ ((USceneCaptureComponent2D*)Obj)->bEnableClipPlane = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableClipPlane = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USceneCaptureComponent2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableClipPlane_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableClipPlane_MetaData, ARRAY_COUNT(NewProp_bEnableClipPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomProjectionMatrix_MetaData[] = {
				{ "Category", "Projection" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "The custom projection matrix to use" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomProjectionMatrix = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomProjectionMatrix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000004, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, CustomProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(NewProp_CustomProjectionMatrix_MetaData, ARRAY_COUNT(NewProp_CustomProjectionMatrix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomProjectionMatrix_MetaData[] = {
				{ "Category", "Projection" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling" },
			};
#endif
			auto NewProp_bUseCustomProjectionMatrix_SetBit = [](void* Obj){ ((USceneCaptureComponent2D*)Obj)->bUseCustomProjectionMatrix = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomProjectionMatrix = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomProjectionMatrix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USceneCaptureComponent2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCustomProjectionMatrix_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCustomProjectionMatrix_MetaData, ARRAY_COUNT(NewProp_bUseCustomProjectionMatrix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessBlendWeight), METADATA_PARAMS(NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeMode_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "When enabled, the scene capture will composite into the render target instead of overwriting its contents." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompositeMode = { UE4CodeGen_Private::EPropertyClass::Byte, "CompositeMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, CompositeMode), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(NewProp_CompositeMode_MetaData, ARRAY_COUNT(NewProp_CompositeMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSource_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "DisplayName", "Capture Source" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureSource = { UE4CodeGen_Private::EPropertyClass::Byte, "CaptureSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(NewProp_CaptureSource_MetaData, ARRAY_COUNT(NewProp_CaptureSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Output render target of the scene capture that can be read in materals." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_TextureTarget_MetaData, ARRAY_COUNT(NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
				{ "Category", "Projection" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, OrthoWidth), METADATA_PARAMS(NewProp_OrthoWidth_MetaData, ARRAY_COUNT(NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[] = {
				{ "Category", "Projection" },
				{ "ClampMax", "360.0" },
				{ "ClampMin", "0.001" },
				{ "DisplayName", "Field of View" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
				{ "ToolTip", "Camera field of view (in degrees)." },
				{ "UIMax", "170" },
				{ "UIMin", "5.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVAngle = { UE4CodeGen_Private::EPropertyClass::Float, "FOVAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, FOVAngle), METADATA_PARAMS(NewProp_FOVAngle_MetaData, ARRAY_COUNT(NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[] = {
				{ "Category", "Projection" },
				{ "DisplayName", "Projection Type" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionType = { UE4CodeGen_Private::EPropertyClass::Byte, "ProjectionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, ProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(NewProp_ProjectionType_MetaData, ARRAY_COUNT(NewProp_ProjectionType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCameraCutThisFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClipPlaneNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClipPlaneBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableClipPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomProjectionMatrix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCustomProjectionMatrix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessBlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompositeMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FOVAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USceneCaptureComponent2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USceneCaptureComponent2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USceneCaptureComponent2D, 1766278951);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponent2D(Z_Construct_UClass_USceneCaptureComponent2D, &USceneCaptureComponent2D::StaticClass, TEXT("/Script/Engine"), TEXT("USceneCaptureComponent2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
