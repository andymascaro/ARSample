// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackAnimControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAnimControl() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimControlTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAnimControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAnimControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
// End Cross Module References
class UScriptStruct* FAnimControlTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimControlTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("AnimControlTrackKey"), sizeof(FAnimControlTrackKey), Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimControlTrackKey(FAnimControlTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimControlTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimControlTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimControlTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimControlTrackKey")),new UScriptStruct::TCppStructOps<FAnimControlTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimControlTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimControlTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimControlTrackKey"), sizeof(FAnimControlTrackKey), Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Structure used for holding information for one animation played on the Anim Control track." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimControlTrackKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Whether to play the animation in reverse or not." },
			};
#endif
			auto NewProp_bReverse_SetBit = [](void* Obj){ ((FAnimControlTrackKey*)Obj)->bReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimControlTrackKey), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverse_MetaData, ARRAY_COUNT(NewProp_bReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Should this animation loop." },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((FAnimControlTrackKey*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimControlTrackKey), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Playback speed of this animation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "AnimPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimControlTrackKey, AnimPlayRate), METADATA_PARAMS(NewProp_AnimPlayRate_MetaData, ARRAY_COUNT(NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Time to end playing the AnimSequence at." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimEndOffset = { UE4CodeGen_Private::EPropertyClass::Float, "AnimEndOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimControlTrackKey, AnimEndOffset), METADATA_PARAMS(NewProp_AnimEndOffset_MetaData, ARRAY_COUNT(NewProp_AnimEndOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Time to start playing AnimSequence at." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimStartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "AnimStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimControlTrackKey, AnimStartOffset), METADATA_PARAMS(NewProp_AnimStartOffset_MetaData, ARRAY_COUNT(NewProp_AnimStartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Animation Sequence to play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSeq = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSeq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimControlTrackKey, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_AnimSeq_MetaData, ARRAY_COUNT(NewProp_AnimSeq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Position in the Matinee sequence to start playing this animation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimControlTrackKey, StartTime), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimEndOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimStartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSeq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimControlTrackKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimControlTrackKey),
				alignof(FAnimControlTrackKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_CRC() { return 409407161U; }
	void UInterpTrackAnimControl::StaticRegisterNativesUInterpTrackAnimControl()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAnimControl_NoRegister()
	{
		return UInterpTrackAnimControl::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAnimControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Animation Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackAnimControl.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimNotifiers_MetaData[] = {
				{ "Category", "InterpTrackAnimControl" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Skip all anim notifiers *" },
			};
#endif
			auto NewProp_bSkipAnimNotifiers_SetBit = [](void* Obj){ ((UInterpTrackAnimControl*)Obj)->bSkipAnimNotifiers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimNotifiers = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipAnimNotifiers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackAnimControl), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipAnimNotifiers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipAnimNotifiers_MetaData, ARRAY_COUNT(NewProp_bSkipAnimNotifiers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSeqs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Track of different animations to play and when to start playing them." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSeqs = { UE4CodeGen_Private::EPropertyClass::Array, "AnimSeqs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackAnimControl, AnimSeqs), METADATA_PARAMS(NewProp_AnimSeqs_MetaData, ARRAY_COUNT(NewProp_AnimSeqs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSeqs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimSeqs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimControlTrackKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
				{ "Category", "InterpTrackAnimControl" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
				{ "ToolTip", "Name of slot to use when playing animation. Passed to Actor.\nWhen multiple tracks use the same slot name, they are each given a different ChannelIndex when SetAnimPosition is called." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackAnimControl, SlotName), METADATA_PARAMS(NewProp_SlotName_MetaData, ARRAY_COUNT(NewProp_SlotName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipAnimNotifiers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSeqs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSeqs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackAnimControl>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackAnimControl::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UInterpTrackAnimControl, 3774231107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAnimControl(Z_Construct_UClass_UInterpTrackAnimControl, &UInterpTrackAnimControl::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackAnimControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAnimControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
