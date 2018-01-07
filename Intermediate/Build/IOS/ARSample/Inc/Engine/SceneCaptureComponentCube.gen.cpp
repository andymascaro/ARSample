// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SceneCaptureComponentCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponentCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
// End Cross Module References
	void USceneCaptureComponentCube::StaticRegisterNativesUSceneCaptureComponentCube()
	{
		UClass* Class = USceneCaptureComponentCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureScene", (Native)&USceneCaptureComponentCube::execCaptureScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
				{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponentCube, "CaptureScene", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister()
	{
		return USceneCaptureComponentCube::StaticClass();
	}
	UClass* Z_Construct_UClass_USceneCaptureComponentCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene, "CaptureScene" }, // 1721736001
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Collision Object Physics SceneComponent abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SceneCaptureComponentCube.h" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
				{ "ToolTip", "Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
				{ "ToolTip", "Temporary render target that can be used by the editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTarget), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(NewProp_TextureTarget_MetaData, ARRAY_COUNT(NewProp_TextureTarget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureTarget,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USceneCaptureComponentCube>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USceneCaptureComponentCube::StaticClass,
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
	IMPLEMENT_CLASS(USceneCaptureComponentCube, 3763018212);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponentCube(Z_Construct_UClass_USceneCaptureComponentCube, &USceneCaptureComponentCube::StaticClass, TEXT("/Script/Engine"), TEXT("USceneCaptureComponentCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponentCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
