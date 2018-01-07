// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeBranch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeBranch::StaticRegisterNativesUSoundNodeBranch()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister()
	{
		return USoundNodeBranch::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Branch" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeBranch.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
				{ "ToolTip", "Selects a child node based on the value of a boolean parameter" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParameterName_MetaData[] = {
				{ "Category", "Branch" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
				{ "ToolTip", "The name of the boolean parameter to use to determine which branch we should take" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoolParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "BoolParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeBranch, BoolParameterName), METADATA_PARAMS(NewProp_BoolParameterName_MetaData, ARRAY_COUNT(NewProp_BoolParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolParameterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeBranch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeBranch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(USoundNodeBranch, 2317600688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeBranch(Z_Construct_UClass_USoundNodeBranch, &USoundNodeBranch::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
