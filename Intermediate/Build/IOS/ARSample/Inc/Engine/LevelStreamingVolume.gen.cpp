// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelStreamingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingVolume() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingVolumeUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
// End Cross Module References
	static UEnum* EStreamingVolumeUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingVolumeUsage, Z_Construct_UPackage__Script_Engine(), TEXT("EStreamingVolumeUsage"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreamingVolumeUsage(EStreamingVolumeUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("EStreamingVolumeUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStreamingVolumeUsage_CRC() { return 741216546U; }
	UEnum* Z_Construct_UEnum_Engine_EStreamingVolumeUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreamingVolumeUsage"), 0, Get_Z_Construct_UEnum_Engine_EStreamingVolumeUsage_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SVB_Loading", (int64)SVB_Loading },
				{ "SVB_LoadingAndVisibility", (int64)SVB_LoadingAndVisibility },
				{ "SVB_VisibilityBlockingOnLoad", (int64)SVB_VisibilityBlockingOnLoad },
				{ "SVB_BlockingOnLoad", (int64)SVB_BlockingOnLoad },
				{ "SVB_LoadingNotVisible", (int64)SVB_LoadingNotVisible },
				{ "SVB_MAX", (int64)SVB_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ToolTip", "Enum for different usage cases of level streaming volumes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStreamingVolumeUsage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EStreamingVolumeUsage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ALevelStreamingVolume::StaticRegisterNativesALevelStreamingVolume()
	{
	}
	UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister()
	{
		return ALevelStreamingVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelStreamingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Engine/LevelStreamingVolume.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingUsage_MetaData[] = {
				{ "Category", "LevelStreamingVolume" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ToolTip", "Determines what this volume is used for, e.g. whether to control loading, loading and visibility or just visibilty (blocking on load)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_StreamingUsage = { UE4CodeGen_Private::EPropertyClass::Byte, "StreamingUsage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALevelStreamingVolume, StreamingUsage), Z_Construct_UEnum_Engine_EStreamingVolumeUsage, METADATA_PARAMS(NewProp_StreamingUsage_MetaData, ARRAY_COUNT(NewProp_StreamingUsage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
				{ "Category", "LevelStreamingVolume" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ToolTip", "If true, this streaming volume is ignored by the streaming volume code.  Used to either\ndisable a level streaming volume without disassociating it from the level, or to toggle\nthe control of a level's streaming between Kismet and volume streaming." },
			};
#endif
			auto NewProp_bDisabled_SetBit = [](void* Obj){ ((ALevelStreamingVolume*)Obj)->bDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALevelStreamingVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisabled_MetaData, ARRAY_COUNT(NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorPreVisOnly_MetaData[] = {
				{ "Category", "LevelStreamingVolume" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ToolTip", "If true, this streaming volume should only be used for editor streaming level previs." },
			};
#endif
			auto NewProp_bEditorPreVisOnly_SetBit = [](void* Obj){ ((ALevelStreamingVolume*)Obj)->bEditorPreVisOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorPreVisOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditorPreVisOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALevelStreamingVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEditorPreVisOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEditorPreVisOnly_MetaData, ARRAY_COUNT(NewProp_bEditorPreVisOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelNames_MetaData[] = {
				{ "Category", "LevelStreamingVolume" },
				{ "DisplayName", "Streaming Levels" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ToolTip", "Levels names affected by this level streaming volume." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingLevelNames = { UE4CodeGen_Private::EPropertyClass::Array, "StreamingLevelNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ALevelStreamingVolume, StreamingLevelNames), METADATA_PARAMS(NewProp_StreamingLevelNames_MetaData, ARRAY_COUNT(NewProp_StreamingLevelNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamingLevelNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "StreamingLevelNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingUsage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEditorPreVisOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingLevelNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingLevelNames_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALevelStreamingVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALevelStreamingVolume::StaticClass,
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
	IMPLEMENT_CLASS(ALevelStreamingVolume, 2756579188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelStreamingVolume(Z_Construct_UClass_ALevelStreamingVolume, &ALevelStreamingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ALevelStreamingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelStreamingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
