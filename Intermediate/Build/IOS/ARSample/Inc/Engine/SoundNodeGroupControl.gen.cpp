// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeGroupControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeGroupControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeGroupControl::StaticRegisterNativesUSoundNodeGroupControl()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister()
	{
		return USoundNodeGroupControl::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeGroupControl()
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
				{ "DisplayName", "Group Control" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeGroupControl.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
				{ "ToolTip", "Plays different sounds depending on the number of active sounds\nAny time a new sound is played, the first group that has an available slot will be chosen" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSizes_MetaData[] = {
				{ "Category", "GroupControl" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
				{ "ToolTip", "How many active sounds are allowed for each group" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupSizes = { UE4CodeGen_Private::EPropertyClass::Array, "GroupSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(USoundNodeGroupControl, GroupSizes), METADATA_PARAMS(NewProp_GroupSizes_MetaData, ARRAY_COUNT(NewProp_GroupSizes_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupSizes_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "GroupSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupSizes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupSizes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeGroupControl>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeGroupControl::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeGroupControl, 3433283876);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeGroupControl(Z_Construct_UClass_USoundNodeGroupControl, &USoundNodeGroupControl::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeGroupControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeGroupControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
