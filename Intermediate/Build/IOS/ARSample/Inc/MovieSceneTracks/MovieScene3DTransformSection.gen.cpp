// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieScene3DTransformSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
#if WITH_EDITORONLY_DATA
	static UEnum* EShow3DTrajectory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EShow3DTrajectory"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShow3DTrajectory(EShow3DTrajectory_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("EShow3DTrajectory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_CRC() { return 2839454623U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShow3DTrajectory"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShow3DTrajectory::EST_OnlyWhenSelected", (int64)EShow3DTrajectory::EST_OnlyWhenSelected },
				{ "EShow3DTrajectory::EST_Always", (int64)EShow3DTrajectory::EST_Always },
				{ "EShow3DTrajectory::EST_Never", (int64)EShow3DTrajectory::EST_Never },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EST_Always.DisplayName", "Always" },
				{ "EST_Never.DisplayName", "Never" },
				{ "EST_OnlyWhenSelected.DisplayName", "Only When Selected" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Visibility options for 3d trajectory." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EShow3DTrajectory",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EShow3DTrajectory",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
#endif // WITH_EDITORONLY_DATA
class UScriptStruct* FMovieSceneTransformMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTransformMask, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneTransformMask"), sizeof(FMovieSceneTransformMask), Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTransformMask(FMovieSceneTransformMask::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneTransformMask"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformMask
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTransformMask")),new UScriptStruct::TCppStructOps<FMovieSceneTransformMask>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformMask;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTransformMask"), sizeof(FMovieSceneTransformMask), Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTransformMask>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Mask = { UE4CodeGen_Private::EPropertyClass::UInt32, "Mask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTransformMask, Mask), METADATA_PARAMS(NewProp_Mask_MetaData, ARRAY_COUNT(NewProp_Mask_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mask,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTransformMask",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTransformMask),
				alignof(FMovieSceneTransformMask),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformMask_CRC() { return 3641176265U; }
class UScriptStruct* FMovieScene3DTransformKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DTransformKeyStruct"), sizeof(FMovieScene3DTransformKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DTransformKeyStruct(FMovieScene3DTransformKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DTransformKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DTransformKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DTransformKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DTransformKeyStruct"), sizeof(FMovieScene3DTransformKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Proxy structure for 3D transform section key data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DTransformKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's scale value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's rotation value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's translation value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DTransformKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScene3DTransformKeyStruct),
				alignof(FMovieScene3DTransformKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_CRC() { return 3444863366U; }
class UScriptStruct* FMovieScene3DScaleKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DScaleKeyStruct"), sizeof(FMovieScene3DScaleKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DScaleKeyStruct(FMovieScene3DScaleKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DScaleKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DScaleKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DScaleKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DScaleKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DScaleKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DScaleKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DScaleKeyStruct"), sizeof(FMovieScene3DScaleKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DScaleKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DScaleKeyStruct, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's scale value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DScaleKeyStruct, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DScaleKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScene3DScaleKeyStruct),
				alignof(FMovieScene3DScaleKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_CRC() { return 1845560209U; }
class UScriptStruct* FMovieScene3DRotationKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DRotationKeyStruct"), sizeof(FMovieScene3DRotationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DRotationKeyStruct(FMovieScene3DRotationKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DRotationKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DRotationKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DRotationKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DRotationKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DRotationKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DRotationKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DRotationKeyStruct"), sizeof(FMovieScene3DRotationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DRotationKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DRotationKeyStruct, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's rotation value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DRotationKeyStruct, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DRotationKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScene3DRotationKeyStruct),
				alignof(FMovieScene3DRotationKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_CRC() { return 794087623U; }
class UScriptStruct* FMovieScene3DLocationKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DLocationKeyStruct"), sizeof(FMovieScene3DLocationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DLocationKeyStruct(FMovieScene3DLocationKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DLocationKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DLocationKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DLocationKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DLocationKeyStruct")),new UScriptStruct::TCppStructOps<FMovieScene3DLocationKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DLocationKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DLocationKeyStruct"), sizeof(FMovieScene3DLocationKeyStruct), Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DLocationKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DLocationKeyStruct, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "The key's translation value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieScene3DLocationKeyStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DLocationKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScene3DLocationKeyStruct),
				alignof(FMovieScene3DLocationKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_CRC() { return 658653554U; }
	void UMovieScene3DTransformSection::StaticRegisterNativesUMovieScene3DTransformSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister()
	{
		return UMovieScene3DTransformSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene3DTransformSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieScene3DTransformSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "A 3D transform section" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Show3DTrajectory_MetaData[] = {
				{ "Category", "Transform" },
				{ "DisplayName", "Show 3D Trajectory" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Whether to show the 3d trajectory" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Show3DTrajectory = { UE4CodeGen_Private::EPropertyClass::Enum, "Show3DTrajectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Show3DTrajectory), Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory, METADATA_PARAMS(NewProp_Show3DTrajectory_MetaData, ARRAY_COUNT(NewProp_Show3DTrajectory_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Show3DTrajectory_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualWeight_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Manual weight curve" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualWeight = { UE4CodeGen_Private::EPropertyClass::Struct, "ManualWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, ManualWeight), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ManualWeight_MetaData, ARRAY_COUNT(NewProp_ManualWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Scale curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Scale, UMovieScene3DTransformSection), nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Scale), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Rotation curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Rotation, UMovieScene3DTransformSection), nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Rotation), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
				{ "ToolTip", "Translation curves" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation = { UE4CodeGen_Private::EPropertyClass::Struct, "Translation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Translation, UMovieScene3DTransformSection), nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Translation), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Translation_MetaData, ARRAY_COUNT(NewProp_Translation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformMask = { UE4CodeGen_Private::EPropertyClass::Struct, "TransformMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, TransformMask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(NewProp_TransformMask_MetaData, ARRAY_COUNT(NewProp_TransformMask_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Show3DTrajectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Show3DTrajectory_Underlying,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManualWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Translation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformMask,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene3DTransformSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene3DTransformSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieScene3DTransformSection, 2068238580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DTransformSection(Z_Construct_UClass_UMovieScene3DTransformSection, &UMovieScene3DTransformSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DTransformSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
