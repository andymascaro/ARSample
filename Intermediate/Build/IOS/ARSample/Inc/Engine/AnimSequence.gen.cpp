// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequence() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* AnimationKeyFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationKeyFormat"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimationKeyFormat(AnimationKeyFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("AnimationKeyFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_AnimationKeyFormat_CRC() { return 2143097564U; }
	UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimationKeyFormat"), 0, Get_Z_Construct_UEnum_Engine_AnimationKeyFormat_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AKF_ConstantKeyLerp", (int64)AKF_ConstantKeyLerp },
				{ "AKF_VariableKeyLerp", (int64)AKF_VariableKeyLerp },
				{ "AKF_PerTrackCompression", (int64)AKF_PerTrackCompression },
				{ "AKF_MAX", (int64)AKF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Indicates animation data key format." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AnimationKeyFormat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"AnimationKeyFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCompressedTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompressedTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedTrack, Z_Construct_UPackage__Script_Engine(), TEXT("CompressedTrack"), sizeof(FCompressedTrack), Get_Z_Construct_UScriptStruct_FCompressedTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompressedTrack(FCompressedTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("CompressedTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompressedTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFCompressedTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompressedTrack")),new UScriptStruct::TCppStructOps<FCompressedTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompressedTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompressedTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompressedTrack"), sizeof(FCompressedTrack), Get_Z_Construct_UScriptStruct_FCompressedTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ranges = { UE4CodeGen_Private::EPropertyClass::Float, "Ranges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Ranges, FCompressedTrack), nullptr, STRUCT_OFFSET(FCompressedTrack, Ranges), METADATA_PARAMS(NewProp_Ranges_MetaData, ARRAY_COUNT(NewProp_Ranges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mins_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mins = { UE4CodeGen_Private::EPropertyClass::Float, "Mins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Mins, FCompressedTrack), nullptr, STRUCT_OFFSET(FCompressedTrack, Mins), METADATA_PARAMS(NewProp_Mins_MetaData, ARRAY_COUNT(NewProp_Mins_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompressedTrack, Times), METADATA_PARAMS(NewProp_Times_MetaData, ARRAY_COUNT(NewProp_Times_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteStream_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteStream = { UE4CodeGen_Private::EPropertyClass::Array, "ByteStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompressedTrack, ByteStream), METADATA_PARAMS(NewProp_ByteStream_MetaData, ARRAY_COUNT(NewProp_ByteStream_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteStream_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ByteStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ranges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mins,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ByteStream,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ByteStream_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CompressedTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCompressedTrack),
				alignof(FCompressedTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompressedTrack_CRC() { return 1950171287U; }
class UScriptStruct* FCurveTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTrack, Z_Construct_UPackage__Script_Engine(), TEXT("CurveTrack"), sizeof(FCurveTrack), Get_Z_Construct_UScriptStruct_FCurveTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveTrack(FCurveTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveTrack")),new UScriptStruct::TCppStructOps<FCurveTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveTrack"), sizeof(FCurveTrack), Get_Z_Construct_UScriptStruct_FCurveTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Key frame curve data for one track\nCurveName: Morph Target Name\nCurveWeights: List of weights for each frame" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveWeights_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveWeights = { UE4CodeGen_Private::EPropertyClass::Array, "CurveWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveTrack, CurveWeights), METADATA_PARAMS(NewProp_CurveWeights_MetaData, ARRAY_COUNT(NewProp_CurveWeights_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "CurveWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName = { UE4CodeGen_Private::EPropertyClass::Name, "CurveName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCurveTrack, CurveName), METADATA_PARAMS(NewProp_CurveName_MetaData, ARRAY_COUNT(NewProp_CurveName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveWeights_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CurveTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCurveTrack),
				alignof(FCurveTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveTrack_CRC() { return 1411170790U; }
class UScriptStruct* FScaleTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FScaleTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScaleTrack, Z_Construct_UPackage__Script_Engine(), TEXT("ScaleTrack"), sizeof(FScaleTrack), Get_Z_Construct_UScriptStruct_FScaleTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScaleTrack(FScaleTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("ScaleTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFScaleTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFScaleTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScaleTrack")),new UScriptStruct::TCppStructOps<FScaleTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFScaleTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScaleTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScaleTrack"), sizeof(FScaleTrack), Get_Z_Construct_UScriptStruct_FScaleTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Keyframe scale data for one track.  Scale(i) occurs at Time(i).  Rot.Num() always equals Time.Num()." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScaleTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScaleTrack, Times), METADATA_PARAMS(NewProp_Times_MetaData, ARRAY_COUNT(NewProp_Times_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScaleKeys = { UE4CodeGen_Private::EPropertyClass::Array, "ScaleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScaleTrack, ScaleKeys), METADATA_PARAMS(NewProp_ScaleKeys_MetaData, ARRAY_COUNT(NewProp_ScaleKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleKeys_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScaleTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FScaleTrack),
				alignof(FScaleTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScaleTrack_CRC() { return 3169659865U; }
class UScriptStruct* FRotationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRotationTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationTrack, Z_Construct_UPackage__Script_Engine(), TEXT("RotationTrack"), sizeof(FRotationTrack), Get_Z_Construct_UScriptStruct_FRotationTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotationTrack(FRotationTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("RotationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRotationTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFRotationTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RotationTrack")),new UScriptStruct::TCppStructOps<FRotationTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRotationTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotationTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotationTrack"), sizeof(FRotationTrack), Get_Z_Construct_UScriptStruct_FRotationTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Keyframe rotation data for one track.  Rot(i) occurs at Time(i).  Rot.Num() always equals Time.Num()." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRotationTrack, Times), METADATA_PARAMS(NewProp_Times_MetaData, ARRAY_COUNT(NewProp_Times_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotKeys = { UE4CodeGen_Private::EPropertyClass::Array, "RotKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRotationTrack, RotKeys), METADATA_PARAMS(NewProp_RotKeys_MetaData, ARRAY_COUNT(NewProp_RotKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RotKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotKeys_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RotationTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRotationTrack),
				alignof(FRotationTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotationTrack_CRC() { return 346425587U; }
class UScriptStruct* FTranslationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTranslationTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TranslationTrack"), sizeof(FTranslationTrack), Get_Z_Construct_UScriptStruct_FTranslationTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTranslationTrack(FTranslationTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TranslationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTranslationTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTranslationTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TranslationTrack")),new UScriptStruct::TCppStructOps<FTranslationTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTranslationTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTranslationTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TranslationTrack"), sizeof(FTranslationTrack), Get_Z_Construct_UScriptStruct_FTranslationTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num()." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTranslationTrack, Times), METADATA_PARAMS(NewProp_Times_MetaData, ARRAY_COUNT(NewProp_Times_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Times", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PosKeys = { UE4CodeGen_Private::EPropertyClass::Array, "PosKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTranslationTrack, PosKeys), METADATA_PARAMS(NewProp_PosKeys_MetaData, ARRAY_COUNT(NewProp_PosKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PosKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Times_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PosKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PosKeys_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TranslationTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTranslationTrack),
				alignof(FTranslationTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTranslationTrack_CRC() { return 2173855782U; }
class UScriptStruct* FTrackToSkeletonMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTrackToSkeletonMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackToSkeletonMap, Z_Construct_UPackage__Script_Engine(), TEXT("TrackToSkeletonMap"), sizeof(FTrackToSkeletonMap), Get_Z_Construct_UScriptStruct_FTrackToSkeletonMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackToSkeletonMap(FTrackToSkeletonMap::StaticStruct, TEXT("/Script/Engine"), TEXT("TrackToSkeletonMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTrackToSkeletonMap
{
	FScriptStruct_Engine_StaticRegisterNativesFTrackToSkeletonMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackToSkeletonMap")),new UScriptStruct::TCppStructOps<FTrackToSkeletonMap>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTrackToSkeletonMap;
	UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackToSkeletonMap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackToSkeletonMap"), sizeof(FTrackToSkeletonMap), Get_Z_Construct_UScriptStruct_FTrackToSkeletonMap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "@note We have a plan to support skeletal hierarchy. When that happens, we'd like to keep skeleton indexing." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackToSkeletonMap>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Index of Skeleton.BoneTree this Track belongs to." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneTreeIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTrackToSkeletonMap, BoneTreeIndex), METADATA_PARAMS(NewProp_BoneTreeIndex_MetaData, ARRAY_COUNT(NewProp_BoneTreeIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneTreeIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TrackToSkeletonMap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTrackToSkeletonMap),
				alignof(FTrackToSkeletonMap),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackToSkeletonMap_CRC() { return 2830837476U; }
class UScriptStruct* FAnimSequenceTrackContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSequenceTrackContainer"), sizeof(FAnimSequenceTrackContainer), Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSequenceTrackContainer(FAnimSequenceTrackContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSequenceTrackContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSequenceTrackContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSequenceTrackContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSequenceTrackContainer")),new UScriptStruct::TCppStructOps<FAnimSequenceTrackContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSequenceTrackContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSequenceTrackContainer"), sizeof(FAnimSequenceTrackContainer), Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "These two always should go together, but it is not right now.\nI wonder in the future, we change all compressed to be inside as well, so they all stay together\nWhen remove tracks, it should be handled together" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceTrackContainer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackNames = { UE4CodeGen_Private::EPropertyClass::Array, "TrackNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimSequenceTrackContainer, TrackNames), METADATA_PARAMS(NewProp_TrackNames_MetaData, ARRAY_COUNT(NewProp_TrackNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "TrackNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTracks = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimSequenceTrackContainer, AnimationTracks), METADATA_PARAMS(NewProp_AnimationTracks_MetaData, ARRAY_COUNT(NewProp_AnimationTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimationTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationTracks_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimSequenceTrackContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimSequenceTrackContainer),
				alignof(FAnimSequenceTrackContainer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_CRC() { return 2034811764U; }
class UScriptStruct* FRawAnimSequenceTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawAnimSequenceTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawAnimSequenceTrack, Z_Construct_UPackage__Script_Engine(), TEXT("RawAnimSequenceTrack"), sizeof(FRawAnimSequenceTrack), Get_Z_Construct_UScriptStruct_FRawAnimSequenceTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawAnimSequenceTrack(FRawAnimSequenceTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("RawAnimSequenceTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawAnimSequenceTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFRawAnimSequenceTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawAnimSequenceTrack")),new UScriptStruct::TCppStructOps<FRawAnimSequenceTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawAnimSequenceTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawAnimSequenceTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawAnimSequenceTrack"), sizeof(FRawAnimSequenceTrack), Get_Z_Construct_UScriptStruct_FRawAnimSequenceTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Raw keyframe data for one track.  Each array will contain either NumFrames elements or 1 element.\nOne element is used as a simple compression scheme where if all keys are the same, they'll be\nreduced to 1 key that is constant over the entire sequence." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawAnimSequenceTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Scale keys." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScaleKeys = { UE4CodeGen_Private::EPropertyClass::Array, "ScaleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRawAnimSequenceTrack, ScaleKeys), METADATA_PARAMS(NewProp_ScaleKeys_MetaData, ARRAY_COUNT(NewProp_ScaleKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Rotation keys." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotKeys = { UE4CodeGen_Private::EPropertyClass::Array, "RotKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRawAnimSequenceTrack, RotKeys), METADATA_PARAMS(NewProp_RotKeys_MetaData, ARRAY_COUNT(NewProp_RotKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RotKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosKeys_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Position keys." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PosKeys = { UE4CodeGen_Private::EPropertyClass::Array, "PosKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRawAnimSequenceTrack, PosKeys), METADATA_PARAMS(NewProp_PosKeys_MetaData, ARRAY_COUNT(NewProp_PosKeys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PosKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleKeys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotKeys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PosKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PosKeys_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RawAnimSequenceTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRawAnimSequenceTrack),
				alignof(FRawAnimSequenceTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawAnimSequenceTrack_CRC() { return 1122785187U; }
	void UAnimSequence::StaticRegisterNativesUAnimSequence()
	{
	}
	UClass* Z_Construct_UClass_UAnimSequence_NoRegister()
	{
		return UAnimSequence::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "UObject Length" },
				{ "IncludePath", "Animation/AnimSequence.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthoredSyncMarkers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Authored Sync markers" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AuthoredSyncMarkers = { UE4CodeGen_Private::EPropertyClass::Array, "AuthoredSyncMarkers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, AuthoredSyncMarkers), METADATA_PARAMS(NewProp_AuthoredSyncMarkers_MetaData, ARRAY_COUNT(NewProp_AuthoredSyncMarkers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthoredSyncMarkers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AuthoredSyncMarkers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsRebake_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
			};
#endif
			auto NewProp_bNeedsRebake_SetBit = [](void* Obj){ ((UAnimSequence*)Obj)->bNeedsRebake = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsRebake = { UE4CodeGen_Private::EPropertyClass::Bool, "bNeedsRebake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNeedsRebake_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNeedsRebake_MetaData, ARRAY_COUNT(NewProp_bNeedsRebake_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Date/Time-stamp of the file from the last import" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, SourceFilePath_DEPRECATED), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Importing data and options used for this mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UAnimSequence, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasCompressedWithoutTranslations_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Used to track whether, or not, this sequence was compressed with it's full translation tracks" },
			};
#endif
			auto NewProp_bWasCompressedWithoutTranslations_SetBit = [](void* Obj){ ((UAnimSequence*)Obj)->bWasCompressedWithoutTranslations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasCompressedWithoutTranslations = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasCompressedWithoutTranslations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWasCompressedWithoutTranslations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWasCompressedWithoutTranslations_MetaData, ARRAY_COUNT(NewProp_bWasCompressedWithoutTranslations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotOverrideCompression_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Do not attempt to override compression scheme when running CompressAnimations commandlet.\nSome high frequency animations are too sensitive and shouldn't be changed." },
			};
#endif
			auto NewProp_bDoNotOverrideCompression_SetBit = [](void* Obj){ ((UAnimSequence*)Obj)->bDoNotOverrideCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotOverrideCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotOverrideCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoNotOverrideCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoNotOverrideCompression_MetaData, ARRAY_COUNT(NewProp_bDoNotOverrideCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Saved version number with CompressAnimations commandlet. To help with doing it in multiple passes." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion = { UE4CodeGen_Private::EPropertyClass::Int, "CompressCommandletVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, CompressCommandletVersion), METADATA_PARAMS(NewProp_CompressCommandletVersion_MetaData, ARRAY_COUNT(NewProp_CompressCommandletVersion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRootMotionSettingsCopiedFromMontage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Have we copied root motion settings from an owning montage" },
			};
#endif
			auto NewProp_bRootMotionSettingsCopiedFromMontage_SetBit = [](void* Obj){ ((UAnimSequence*)Obj)->bRootMotionSettingsCopiedFromMontage = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootMotionSettingsCopiedFromMontage = { UE4CodeGen_Private::EPropertyClass::Bool, "bRootMotionSettingsCopiedFromMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRootMotionSettingsCopiedFromMontage_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRootMotionSettingsCopiedFromMontage_MetaData, ARRAY_COUNT(NewProp_bRootMotionSettingsCopiedFromMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRootLock_MetaData[] = {
				{ "Category", "RootMotion" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Force Root Bone Lock even if Root Motion is not enabled" },
			};
#endif
			auto NewProp_bForceRootLock_SetBit = [](void* Obj){ ((UAnimSequence*)Obj)->bForceRootLock = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRootLock = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRootLock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRootLock_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceRootLock_MetaData, ARRAY_COUNT(NewProp_bForceRootLock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[] = {
				{ "Category", "RootMotion" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Root Bone will be locked to that position when extracting root motion.*" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock = { UE4CodeGen_Private::EPropertyClass::Byte, "RootMotionRootLock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(NewProp_RootMotionRootLock_MetaData, ARRAY_COUNT(NewProp_RootMotionRootLock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotion_MetaData[] = {
				{ "Category", "RootMotion" },
				{ "DisplayName", "EnableRootMotion" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "If this is on, it will allow extracting of root motion *" },
			};
#endif
			auto NewProp_bEnableRootMotion_SetBit = [](void* Obj){ ((UAnimSequence*)Obj)->bEnableRootMotion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotion = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimSequence), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableRootMotion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableRootMotion_MetaData, ARRAY_COUNT(NewProp_bEnableRootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "This defines how values between keys are calculated *" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation = { UE4CodeGen_Private::EPropertyClass::Enum, "Interpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(NewProp_Interpolation_MetaData, ARRAY_COUNT(NewProp_Interpolation_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Base pose to use when retargeting" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RetargetSource = { UE4CodeGen_Private::EPropertyClass::Name, "RetargetSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, RetargetSource), METADATA_PARAMS(NewProp_RetargetSource_MetaData, ARRAY_COUNT(NewProp_RetargetSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncodingPkgVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "The version of the global encoding package used at the time of import" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EncodingPkgVersion = { UE4CodeGen_Private::EPropertyClass::Int, "EncodingPkgVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, EncodingPkgVersion), METADATA_PARAMS(NewProp_EncodingPkgVersion_MetaData, ARRAY_COUNT(NewProp_EncodingPkgVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefFrameIndex_MetaData[] = {
				{ "Category", "AdditiveSettings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Additve reference frame if RefPoseType == AnimFrame *" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefFrameIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RefFrameIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, RefFrameIndex), METADATA_PARAMS(NewProp_RefFrameIndex_MetaData, ARRAY_COUNT(NewProp_RefFrameIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseSeq_MetaData[] = {
				{ "Category", "AdditiveSettings" },
				{ "DisplayName", "Base Pose Animation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Additive reference animation if it's relevant - i.e. AnimScaled or AnimFrame *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefPoseSeq = { UE4CodeGen_Private::EPropertyClass::Object, "RefPoseSeq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, RefPoseSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_RefPoseSeq_MetaData, ARRAY_COUNT(NewProp_RefPoseSeq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseType_MetaData[] = {
				{ "Category", "AdditiveSettings" },
				{ "DisplayName", "Base Pose Type" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Additive refrerence pose type. Refer above enum type" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefPoseType = { UE4CodeGen_Private::EPropertyClass::Byte, "RefPoseType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, RefPoseType), Z_Construct_UEnum_Engine_EAdditiveBasePoseType, METADATA_PARAMS(NewProp_RefPoseType_MetaData, ARRAY_COUNT(NewProp_RefPoseType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimType_MetaData[] = {
				{ "Category", "AdditiveSettings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Additive animation type. *" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditiveAnimType = { UE4CodeGen_Private::EPropertyClass::Byte, "AdditiveAnimType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, AdditiveAnimType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(NewProp_AdditiveAnimType_MetaData, ARRAY_COUNT(NewProp_AdditiveAnimType_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionScheme_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "The compression scheme that was most recently used to compress this animation.\nMay be NULL." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompressionScheme = { UE4CodeGen_Private::EPropertyClass::Object, "CompressionScheme", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(UAnimSequence, CompressionScheme), Z_Construct_UClass_UAnimCompress_NoRegister, METADATA_PARAMS(NewProp_CompressionScheme_MetaData, ARRAY_COUNT(NewProp_CompressionScheme_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTrackNames = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationTrackNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, AnimationTrackNames), METADATA_PARAMS(NewProp_AnimationTrackNames_MetaData, ARRAY_COUNT(NewProp_AnimationTrackNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationTrackNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AnimationTrackNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawDataGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Update this if the contents of RawAnimationData changes;" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawDataGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "RawDataGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, RawDataGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_RawDataGuid_MetaData, ARRAY_COUNT(NewProp_RawDataGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackToSkeletonMapTable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\nTrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i)." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackToSkeletonMapTable = { UE4CodeGen_Private::EPropertyClass::Array, "TrackToSkeletonMapTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, TrackToSkeletonMapTable), METADATA_PARAMS(NewProp_TrackToSkeletonMapTable_MetaData, ARRAY_COUNT(NewProp_TrackToSkeletonMapTable_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackToSkeletonMapTable_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackToSkeletonMapTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTrackToSkeletonMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
				{ "DisplayName", "Number of Keys" },
				{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
				{ "ToolTip", "Number of raw frames in this sequence (not used by engine - just for informational purposes)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFrames = { UE4CodeGen_Private::EPropertyClass::Int, "NumFrames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UAnimSequence, NumFrames), METADATA_PARAMS(NewProp_NumFrames_MetaData, ARRAY_COUNT(NewProp_NumFrames_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthoredSyncMarkers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthoredSyncMarkers_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNeedsRebake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWasCompressedWithoutTranslations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoNotOverrideCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressCommandletVersion,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRootMotionSettingsCopiedFromMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRootLock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootMotionRootLock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableRootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interpolation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Interpolation_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetargetSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EncodingPkgVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefFrameIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefPoseSeq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefPoseType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditiveAnimType,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionScheme,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationTrackNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationTrackNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RawDataGuid,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackToSkeletonMapTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackToSkeletonMapTable_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumFrames,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimSequence>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimSequence::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSequence, 141109752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequence(Z_Construct_UClass_UAnimSequence, &UAnimSequence::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
