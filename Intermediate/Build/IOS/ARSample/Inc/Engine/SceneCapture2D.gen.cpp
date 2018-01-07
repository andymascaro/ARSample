// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SceneCapture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void ASceneCapture2D::StaticRegisterNativesASceneCapture2D()
	{
		UClass* Class = ASceneCapture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", (Native)&ASceneCapture2D::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle()
	{
		struct SceneCapture2D_eventOnInterpToggle_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((SceneCapture2D_eventOnInterpToggle_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SceneCapture2D_eventOnInterpToggle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCapture2D, "OnInterpToggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCapture2D_eventOnInterpToggle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister()
	{
		return ASceneCapture2D::StaticClass();
	}
	UClass* Z_Construct_UClass_ASceneCapture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASceneCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle, "OnInterpToggle" }, // 242231263
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
				{ "IncludePath", "Engine/SceneCapture2D.h" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFrustum_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
				{ "ToolTip", "To allow drawing the camera frustum in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFrustum = { UE4CodeGen_Private::EPropertyClass::Object, "DrawFrustum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ASceneCapture2D, DrawFrustum), Z_Construct_UClass_UDrawFrustumComponent_NoRegister, METADATA_PARAMS(NewProp_DrawFrustum_MetaData, ARRAY_COUNT(NewProp_DrawFrustum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent2D_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "DecalActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
				{ "ToolTip", "Scene capture component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent2D = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureComponent2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASceneCapture2D, CaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(NewProp_CaptureComponent2D_MetaData, ARRAY_COUNT(NewProp_CaptureComponent2D_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawFrustum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureComponent2D,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASceneCapture2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASceneCapture2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ASceneCapture2D, 449037554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneCapture2D(Z_Construct_UClass_ASceneCapture2D, &ASceneCapture2D::StaticClass, TEXT("/Script/Engine"), TEXT("ASceneCapture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCapture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
