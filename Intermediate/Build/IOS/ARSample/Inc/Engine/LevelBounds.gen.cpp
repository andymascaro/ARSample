// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelBounds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelBounds() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALevelBounds_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelBounds();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALevelBounds::StaticRegisterNativesALevelBounds()
	{
	}
	UClass* Z_Construct_UClass_ALevelBounds_NoRegister()
	{
		return ALevelBounds::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelBounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Advanced Collision Display Rendering Physics Input" },
				{ "IncludePath", "Engine/LevelBounds.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Defines level bounds\nUpdates bounding box automatically based on actors transformation changes or holds fixed user defined bounding box\nUses only actors where AActor::IsLevelBoundsRelevant() == true" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateBounds_MetaData[] = {
				{ "Category", "LevelBounds" },
				{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
				{ "ToolTip", "Whether to automatically update actor bounds based on all relevant actors bounds belonging to the same level" },
			};
#endif
			auto NewProp_bAutoUpdateBounds_SetBit = [](void* Obj){ ((ALevelBounds*)Obj)->bAutoUpdateBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoUpdateBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALevelBounds), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoUpdateBounds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoUpdateBounds_MetaData, ARRAY_COUNT(NewProp_bAutoUpdateBounds_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoUpdateBounds,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALevelBounds>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALevelBounds::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ALevelBounds, 951627348);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelBounds(Z_Construct_UClass_ALevelBounds, &ALevelBounds::StaticClass, TEXT("/Script/Engine"), TEXT("ALevelBounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelBounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
