// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompositeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompositeBase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
// End Cross Module References
class UScriptStruct* FAnimTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTrack, Z_Construct_UPackage__Script_Engine(), TEXT("AnimTrack"), sizeof(FAnimTrack), Get_Z_Construct_UScriptStruct_FAnimTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimTrack(FAnimTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimTrack")),new UScriptStruct::TCppStructOps<FAnimTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimTrack"), sizeof(FAnimTrack), Get_Z_Construct_UScriptStruct_FAnimTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "This is list of anim segments for this track\nFor now this is only one TArray, but in the future\nwe should define more transition/blending behaviors" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSegments_MetaData[] = {
				{ "Category", "AnimTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSegments = { UE4CodeGen_Private::EPropertyClass::Array, "AnimSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FAnimTrack, AnimSegments), METADATA_PARAMS(NewProp_AnimSegments_MetaData, ARRAY_COUNT(NewProp_AnimSegments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSegments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimSegments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSegments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSegments_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimTrack),
				alignof(FAnimTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC() { return 3554437170U; }
class UScriptStruct* FAnimSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSegment, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSegment"), sizeof(FAnimSegment), Get_Z_Construct_UScriptStruct_FAnimSegment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSegment(FAnimSegment::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSegment"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSegment
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSegment")),new UScriptStruct::TCppStructOps<FAnimSegment>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSegment;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSegment"), sizeof(FAnimSegment), Get_Z_Construct_UScriptStruct_FAnimSegment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "this is anim segment that defines what animation and how *" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSegment>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopingCount_MetaData[] = {
				{ "Category", "AnimSegment" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopingCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopingCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, LoopingCount), METADATA_PARAMS(NewProp_LoopingCount_MetaData, ARRAY_COUNT(NewProp_LoopingCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[] = {
				{ "Category", "AnimSegment" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Playback speed of this animation. If you'd like to reverse, set -1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "AnimPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimPlayRate), METADATA_PARAMS(NewProp_AnimPlayRate_MetaData, ARRAY_COUNT(NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndTime_MetaData[] = {
				{ "Category", "AnimSegment" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Time to end playing the AnimSequence at." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimEndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimEndTime), METADATA_PARAMS(NewProp_AnimEndTime_MetaData, ARRAY_COUNT(NewProp_AnimEndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartTime_MetaData[] = {
				{ "Category", "AnimSegment" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Time to start playing AnimSequence at." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimStartTime), METADATA_PARAMS(NewProp_AnimStartTime_MetaData, ARRAY_COUNT(NewProp_AnimStartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[] = {
				{ "Category", "AnimSegment" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Start Pos within this AnimCompositeBase" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Float, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, StartPos), METADATA_PARAMS(NewProp_StartPos_MetaData, ARRAY_COUNT(NewProp_StartPos_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimReference_MetaData[] = {
				{ "Category", "AnimSegment" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Anim Reference to play - only allow AnimSequence or AnimComposite *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimReference = { UE4CodeGen_Private::EPropertyClass::Object, "AnimReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimReference), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(NewProp_AnimReference_MetaData, ARRAY_COUNT(NewProp_AnimReference_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoopingCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimEndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimReference,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimSegment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimSegment),
				alignof(FAnimSegment),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC() { return 2855508025U; }
class UScriptStruct* FRootMotionExtractionStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionExtractionStep, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionExtractionStep"), sizeof(FRootMotionExtractionStep), Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionExtractionStep(FRootMotionExtractionStep::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionExtractionStep"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionExtractionStep")),new UScriptStruct::TCppStructOps<FRootMotionExtractionStep>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionExtractionStep"), sizeof(FRootMotionExtractionStep), Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Struct defining a RootMotionExtractionStep.\nWhen extracting RootMotion we can encounter looping animations (wrap around), or different animations.\nWe break those up into different steps, to help with RootMotion extraction,\nas we can only extract a contiguous range per AnimSequence." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionExtractionStep>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "End position to extract root motion to." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndPosition = { UE4CodeGen_Private::EPropertyClass::Float, "EndPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, EndPosition), METADATA_PARAMS(NewProp_EndPosition_MetaData, ARRAY_COUNT(NewProp_EndPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "Start position to extract root motion from." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition = { UE4CodeGen_Private::EPropertyClass::Float, "StartPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, StartPosition), METADATA_PARAMS(NewProp_StartPosition_MetaData, ARRAY_COUNT(NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
				{ "ToolTip", "AnimSequence ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_AnimSequence_MetaData, ARRAY_COUNT(NewProp_AnimSequence_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSequence,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionExtractionStep",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRootMotionExtractionStep),
				alignof(FRootMotionExtractionStep),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC() { return 3753950193U; }
	void UAnimCompositeBase::StaticRegisterNativesUAnimCompositeBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister()
	{
		return UAnimCompositeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompositeBase()
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
				{ "IncludePath", "Animation/AnimCompositeBase.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompositeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompositeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompositeBase, 2921586762);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompositeBase(Z_Construct_UClass_UAnimCompositeBase, &UAnimCompositeBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompositeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompositeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
