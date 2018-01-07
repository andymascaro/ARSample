// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeConcatenator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeConcatenator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeConcatenator::StaticRegisterNativesUSoundNodeConcatenator()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister()
	{
		return USoundNodeConcatenator::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeConcatenator()
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
				{ "DisplayName", "Concatenator" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeConcatenator.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
				{ "ToolTip", "Plays child nodes sequentially" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVolume_MetaData[] = {
				{ "Category", "Concatenator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
				{ "ToolTip", "Volume multiplier for each input." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputVolume = { UE4CodeGen_Private::EPropertyClass::Array, "InputVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(USoundNodeConcatenator, InputVolume), METADATA_PARAMS(NewProp_InputVolume_MetaData, ARRAY_COUNT(NewProp_InputVolume_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVolume_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InputVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputVolume_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeConcatenator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeConcatenator::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeConcatenator, 461844478);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeConcatenator(Z_Construct_UClass_USoundNodeConcatenator, &USoundNodeConcatenator::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeConcatenator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeConcatenator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
