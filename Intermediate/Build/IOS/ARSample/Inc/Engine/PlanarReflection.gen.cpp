// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PlanarReflection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanarReflection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlanarReflection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlanarReflection();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APlanarReflection_OnInterpToggle();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlanarReflectionComponent_NoRegister();
// End Cross Module References
	void APlanarReflection::StaticRegisterNativesAPlanarReflection()
	{
		UClass* Class = APlanarReflection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", (Native)&APlanarReflection::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlanarReflection_OnInterpToggle()
	{
		struct PlanarReflection_eventOnInterpToggle_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((PlanarReflection_eventOnInterpToggle_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlanarReflection_eventOnInterpToggle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanarReflection, "OnInterpToggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlanarReflection_eventOnInterpToggle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlanarReflection_NoRegister()
	{
		return APlanarReflection::StaticClass();
	}
	UClass* Z_Construct_UClass_APlanarReflection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASceneCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlanarReflection_OnInterpToggle, "OnInterpToggle" }, // 3971219789
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
				{ "IncludePath", "Engine/PlanarReflection.h" },
				{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewPlane_MetaData[] = {
				{ "Category", "PlanarReflection" },
				{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
			};
#endif
			auto NewProp_bShowPreviewPlane_SetBit = [](void* Obj){ ((APlanarReflection*)Obj)->bShowPreviewPlane = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewPlane = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowPreviewPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlanarReflection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowPreviewPlane_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowPreviewPlane_MetaData, ARRAY_COUNT(NewProp_bShowPreviewPlane_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(APlanarReflection, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "SceneCapture" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
				{ "ToolTip", "Planar reflection component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanarReflectionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PlanarReflectionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APlanarReflection, PlanarReflectionComponent), Z_Construct_UClass_UPlanarReflectionComponent_NoRegister, METADATA_PARAMS(NewProp_PlanarReflectionComponent_MetaData, ARRAY_COUNT(NewProp_PlanarReflectionComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowPreviewPlane,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlanarReflectionComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlanarReflection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlanarReflection::StaticClass,
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
	IMPLEMENT_CLASS(APlanarReflection, 2229898073);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanarReflection(Z_Construct_UClass_APlanarReflection, &APlanarReflection::StaticClass, TEXT("/Script/Engine"), TEXT("APlanarReflection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanarReflection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
