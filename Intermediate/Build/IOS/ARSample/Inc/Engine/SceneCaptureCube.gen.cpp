// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SceneCaptureCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
// End Cross Module References
	void ASceneCaptureCube::StaticRegisterNativesASceneCaptureCube()
	{
		UClass* Class = ASceneCaptureCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", (Native)&ASceneCaptureCube::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle()
	{
		struct SceneCaptureCube_eventOnInterpToggle_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((SceneCaptureCube_eventOnInterpToggle_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SceneCaptureCube_eventOnInterpToggle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCaptureCube, "OnInterpToggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureCube_eventOnInterpToggle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister()
	{
		return ASceneCaptureCube::StaticClass();
	}
	UClass* Z_Construct_UClass_ASceneCaptureCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASceneCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle, "OnInterpToggle" }, // 3652239526
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
				{ "IncludePath", "Engine/SceneCaptureCube.h" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFrustum_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
				{ "ToolTip", "To allow drawing the camera frustum in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFrustum = { UE4CodeGen_Private::EPropertyClass::Object, "DrawFrustum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ASceneCaptureCube, DrawFrustum), Z_Construct_UClass_UDrawFrustumComponent_NoRegister, METADATA_PARAMS(NewProp_DrawFrustum_MetaData, ARRAY_COUNT(NewProp_DrawFrustum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentCube_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "DecalActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
				{ "ToolTip", "Scene capture component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentCube = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureComponentCube", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASceneCaptureCube, CaptureComponentCube), Z_Construct_UClass_USceneCaptureComponentCube_NoRegister, METADATA_PARAMS(NewProp_CaptureComponentCube_MetaData, ARRAY_COUNT(NewProp_CaptureComponentCube_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawFrustum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureComponentCube,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASceneCaptureCube>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASceneCaptureCube::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ASceneCaptureCube, 446176741);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneCaptureCube(Z_Construct_UClass_ASceneCaptureCube, &ASceneCaptureCube::StaticClass, TEXT("/Script/Engine"), TEXT("ASceneCaptureCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCaptureCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
