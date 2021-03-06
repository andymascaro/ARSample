// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/TimelineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFloatProperty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlayRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetTimelineLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_IsLooping();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_IsPlaying();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_IsReversing();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_PlayFromStart();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_Reverse();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetFloatCurve();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetLooping();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetNewTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlayRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetVectorCurve();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_Stop();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature()
	{
		struct _Script_Engine_eventOnTimelineLinearColor_Parms
		{
			FLinearColor Output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Struct, "Output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineLinearColor_Parms, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Output,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Signature of function to handle linear color track" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineLinearColor__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnTimelineLinearColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature()
	{
		struct _Script_Engine_eventOnTimelineVector_Parms
		{
			FVector Output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Struct, "Output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineVector_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Output,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Signature of function to handle timeline vector track" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineVector__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnTimelineVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature()
	{
		struct _Script_Engine_eventOnTimelineFloat_Parms
		{
			float Output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Float, "Output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineFloat_Parms, Output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Output,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Signature of function to handle timeline float track" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineFloat__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnTimelineFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Signature of function to handle a timeline 'event'" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETimelineDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineDirection, Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimelineDirection(ETimelineDirection_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimelineDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimelineDirection_CRC() { return 3744115457U; }
	UEnum* Z_Construct_UEnum_Engine_ETimelineDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimelineDirection"), 0, Get_Z_Construct_UEnum_Engine_ETimelineDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimelineDirection::Forward", (int64)ETimelineDirection::Forward },
				{ "ETimelineDirection::Backward", (int64)ETimelineDirection::Backward },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Does timeline play or reverse ?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETimelineDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETimelineDirection::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETimelineLengthMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineLengthMode, Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineLengthMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimelineLengthMode(ETimelineLengthMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimelineLengthMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimelineLengthMode_CRC() { return 1711290275U; }
	UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimelineLengthMode"), 0, Get_Z_Construct_UEnum_Engine_ETimelineLengthMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TL_TimelineLength", (int64)TL_TimelineLength },
				{ "TL_LastKeyFrame", (int64)TL_LastKeyFrame },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Whether or not the timeline should be finished after the specified length, or the last keyframe in the tracks" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETimelineLengthMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETimelineLengthMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTimeline::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimeline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeline, Z_Construct_UPackage__Script_Engine(), TEXT("Timeline"), sizeof(FTimeline), Get_Z_Construct_UScriptStruct_FTimeline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeline(FTimeline::StaticStruct, TEXT("/Script/Engine"), TEXT("Timeline"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimeline
{
	FScriptStruct_Engine_StaticRegisterNativesFTimeline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Timeline")),new UScriptStruct::TCppStructOps<FTimeline>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimeline;
	UScriptStruct* Z_Construct_UScriptStruct_FTimeline()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeline_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Timeline"), sizeof(FTimeline), Get_Z_Construct_UScriptStruct_FTimeline_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeline>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Cached property pointer for setting timeline direction" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectionProperty = { UE4CodeGen_Private::EPropertyClass::Object, "DirectionProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000080002000, 1, nullptr, STRUCT_OFFSET(FTimeline, DirectionProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_DirectionProperty_MetaData, ARRAY_COUNT(NewProp_DirectionProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Optional. If set, Timeline will also set ETimelineDirection property on PropertySetObject using the name." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "DirectionPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, DirectionPropertyName), METADATA_PARAMS(NewProp_DirectionPropertyName_MetaData, ARRAY_COUNT(NewProp_DirectionPropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertySetObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Optional. If set, Timeline will also set float/vector properties on this object using the PropertyName set in the tracks." },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PropertySetObject = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PropertySetObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, PropertySetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_PropertySetObject_MetaData, ARRAY_COUNT(NewProp_PropertySetObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineFinishedFunc_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Called whenever this timeline is finished. Is not called if 'stop' is used to terminate timeline early" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TimelineFinishedFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "TimelineFinishedFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000080080000, 1, nullptr, STRUCT_OFFSET(FTimeline, TimelineFinishedFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(NewProp_TimelineFinishedFunc_MetaData, ARRAY_COUNT(NewProp_TimelineFinishedFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelinePostUpdateFunc_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Called whenever this timeline is playing and updates - done after all delegates are executed and variables updated" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TimelinePostUpdateFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "TimelinePostUpdateFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000080080000, 1, nullptr, STRUCT_OFFSET(FTimeline, TimelinePostUpdateFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(NewProp_TimelinePostUpdateFunc_MetaData, ARRAY_COUNT(NewProp_TimelinePostUpdateFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpLinearColors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Array of linear color interpolations performed during the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpLinearColors = { UE4CodeGen_Private::EPropertyClass::Array, "InterpLinearColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, InterpLinearColors), METADATA_PARAMS(NewProp_InterpLinearColors_MetaData, ARRAY_COUNT(NewProp_InterpLinearColors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpLinearColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpLinearColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineLinearColorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFloats_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Array of float interpolations performed during the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpFloats = { UE4CodeGen_Private::EPropertyClass::Array, "InterpFloats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, InterpFloats), METADATA_PARAMS(NewProp_InterpFloats_MetaData, ARRAY_COUNT(NewProp_InterpFloats_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpFloats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpFloats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineFloatTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpVectors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Array of vector interpolations performed during the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpVectors = { UE4CodeGen_Private::EPropertyClass::Array, "InterpVectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, InterpVectors), METADATA_PARAMS(NewProp_InterpVectors_MetaData, ARRAY_COUNT(NewProp_InterpVectors_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpVectors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpVectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineVectorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Array of events that are fired at various times during the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, Events), METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineEventEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Current position in the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Float, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FTimeline, Position), METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "How fast we should play through the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FTimeline, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Are we currently playing (moving Position)" },
			};
#endif
			auto NewProp_bPlaying_SetBit = [](void* Obj){ ((FTimeline*)Obj)->bPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTimeline), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlaying_MetaData, ARRAY_COUNT(NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "If playback should move the current position backwards instead of forwards" },
			};
#endif
			auto NewProp_bReversePlayback_SetBit = [](void* Obj){ ((FTimeline*)Obj)->bReversePlayback = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bReversePlayback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTimeline), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReversePlayback_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReversePlayback_MetaData, ARRAY_COUNT(NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Whether timeline should loop when it reaches the end, or stop" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((FTimeline*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTimeline), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "How long the timeline is, will stop or loop at the end" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, Length), METADATA_PARAMS(NewProp_Length_MetaData, ARRAY_COUNT(NewProp_Length_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Specified how the timeline determines its own length (e.g. specified length, last keyframe)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "LengthMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(NewProp_LengthMode_MetaData, ARRAY_COUNT(NewProp_LengthMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionPropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertySetObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimelineFinishedFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimelinePostUpdateFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpLinearColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpLinearColors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFloats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFloats_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpVectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpVectors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlaying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReversePlayback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Length,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LengthMode,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Timeline",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTimeline),
				alignof(FTimeline),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeline_CRC() { return 2892120574U; }
class UScriptStruct* FTimelineLinearColorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineLinearColorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineLinearColorTrack"), sizeof(FTimelineLinearColorTrack), Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineLinearColorTrack(FTimelineLinearColorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineLinearColorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineLinearColorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineLinearColorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineLinearColorTrack")),new UScriptStruct::TCppStructOps<FTimelineLinearColorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineLinearColorTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineLinearColorTrack"), sizeof(FTimelineLinearColorTrack), Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Struct that contains one entry for each linear color interpolation performed by the timeline" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineLinearColorTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Cached linear color struct property pointer" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinearColorProperty = { UE4CodeGen_Private::EPropertyClass::Object, "LinearColorProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(NewProp_LinearColorProperty_MetaData, ARRAY_COUNT(NewProp_LinearColorProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorPropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Name of property that we should update from this curve" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LinearColorPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "LinearColorPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorPropertyName), METADATA_PARAMS(NewProp_LinearColorPropertyName_MetaData, ARRAY_COUNT(NewProp_LinearColorPropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "InterpFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature, METADATA_PARAMS(NewProp_InterpFunc_MetaData, ARRAY_COUNT(NewProp_InterpFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Float curve to be evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinearColorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "LinearColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(NewProp_LinearColorCurve_MetaData, ARRAY_COUNT(NewProp_LinearColorCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorPropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TimelineLinearColorTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTimelineLinearColorTrack),
				alignof(FTimelineLinearColorTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC() { return 271381082U; }
class UScriptStruct* FTimelineFloatTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineFloatTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineFloatTrack"), sizeof(FTimelineFloatTrack), Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineFloatTrack(FTimelineFloatTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineFloatTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineFloatTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineFloatTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineFloatTrack")),new UScriptStruct::TCppStructOps<FTimelineFloatTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineFloatTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineFloatTrack"), sizeof(FTimelineFloatTrack), Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineFloatTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Cached float property pointer" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatProperty = { UE4CodeGen_Private::EPropertyClass::Object, "FloatProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatProperty), Z_Construct_UClass_UFloatProperty, METADATA_PARAMS(NewProp_FloatProperty_MetaData, ARRAY_COUNT(NewProp_FloatProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Name of property that we should update from this curve" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "FloatPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatPropertyName), METADATA_PARAMS(NewProp_FloatPropertyName_MetaData, ARRAY_COUNT(NewProp_FloatPropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpFloatCurve function." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "InterpFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(NewProp_InterpFunc_MetaData, ARRAY_COUNT(NewProp_InterpFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Float curve to be evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Object, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_FloatCurve_MetaData, ARRAY_COUNT(NewProp_FloatCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatPropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TimelineFloatTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTimelineFloatTrack),
				alignof(FTimelineFloatTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC() { return 1651669961U; }
class UScriptStruct* FTimelineVectorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineVectorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineVectorTrack"), sizeof(FTimelineVectorTrack), Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineVectorTrack(FTimelineVectorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineVectorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineVectorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineVectorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineVectorTrack")),new UScriptStruct::TCppStructOps<FTimelineVectorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineVectorTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineVectorTrack"), sizeof(FTimelineVectorTrack), Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineVectorTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Cached vector struct property pointer" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorProperty = { UE4CodeGen_Private::EPropertyClass::Object, "VectorProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(NewProp_VectorProperty_MetaData, ARRAY_COUNT(NewProp_VectorProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorPropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Name of property that we should update from this curve" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_VectorPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "VectorPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorPropertyName), METADATA_PARAMS(NewProp_VectorPropertyName_MetaData, ARRAY_COUNT(NewProp_VectorPropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "InterpFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature, METADATA_PARAMS(NewProp_InterpFunc_MetaData, ARRAY_COUNT(NewProp_InterpFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Vector curve to be evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "VectorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(NewProp_VectorCurve_MetaData, ARRAY_COUNT(NewProp_VectorCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorPropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TimelineVectorTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTimelineVectorTrack),
				alignof(FTimelineVectorTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC() { return 3765863693U; }
class UScriptStruct* FTimelineEventEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineEventEntry, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineEventEntry"), sizeof(FTimelineEventEntry), Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineEventEntry(FTimelineEventEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineEventEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineEventEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineEventEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineEventEntry")),new UScriptStruct::TCppStructOps<FTimelineEventEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineEventEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineEventEntry"), sizeof(FTimelineEventEntry), Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Struct that contains one entry for an 'event' during the timeline" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineEventEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventFunc_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Function to execute when Time is reached" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_EventFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "EventFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineEventEntry, EventFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(NewProp_EventFunc_MetaData, ARRAY_COUNT(NewProp_EventFunc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Time at which event should fire" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineEventEntry, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TimelineEventEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FTimelineEventEntry),
				alignof(FTimelineEventEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC() { return 3993137686U; }
	void UTimelineComponent::StaticRegisterNativesUTimelineComponent()
	{
		UClass* Class = UTimelineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIgnoreTimeDilation", (Native)&UTimelineComponent::execGetIgnoreTimeDilation },
			{ "GetPlaybackPosition", (Native)&UTimelineComponent::execGetPlaybackPosition },
			{ "GetPlayRate", (Native)&UTimelineComponent::execGetPlayRate },
			{ "GetTimelineLength", (Native)&UTimelineComponent::execGetTimelineLength },
			{ "IsLooping", (Native)&UTimelineComponent::execIsLooping },
			{ "IsPlaying", (Native)&UTimelineComponent::execIsPlaying },
			{ "IsReversing", (Native)&UTimelineComponent::execIsReversing },
			{ "OnRep_Timeline", (Native)&UTimelineComponent::execOnRep_Timeline },
			{ "Play", (Native)&UTimelineComponent::execPlay },
			{ "PlayFromStart", (Native)&UTimelineComponent::execPlayFromStart },
			{ "Reverse", (Native)&UTimelineComponent::execReverse },
			{ "ReverseFromEnd", (Native)&UTimelineComponent::execReverseFromEnd },
			{ "SetFloatCurve", (Native)&UTimelineComponent::execSetFloatCurve },
			{ "SetIgnoreTimeDilation", (Native)&UTimelineComponent::execSetIgnoreTimeDilation },
			{ "SetLinearColorCurve", (Native)&UTimelineComponent::execSetLinearColorCurve },
			{ "SetLooping", (Native)&UTimelineComponent::execSetLooping },
			{ "SetNewTime", (Native)&UTimelineComponent::execSetNewTime },
			{ "SetPlaybackPosition", (Native)&UTimelineComponent::execSetPlaybackPosition },
			{ "SetPlayRate", (Native)&UTimelineComponent::execSetPlayRate },
			{ "SetTimelineLength", (Native)&UTimelineComponent::execSetTimelineLength },
			{ "SetTimelineLengthMode", (Native)&UTimelineComponent::execSetTimelineLengthMode },
			{ "SetVectorCurve", (Native)&UTimelineComponent::execSetVectorCurve },
			{ "Stop", (Native)&UTimelineComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation()
	{
		struct TimelineComponent_eventGetIgnoreTimeDilation_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TimelineComponent_eventGetIgnoreTimeDilation_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventGetIgnoreTimeDilation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get whether to ignore time dilation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetIgnoreTimeDilation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition()
	{
		struct TimelineComponent_eventGetPlaybackPosition_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get the current playback position of the Timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetPlaybackPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlayRate()
	{
		struct TimelineComponent_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get the current play rate for this timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetPlayRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetTimelineLength()
	{
		struct TimelineComponent_eventGetTimelineLength_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetTimelineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get length of the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetTimelineLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetTimelineLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsLooping()
	{
		struct TimelineComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TimelineComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventIsLooping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get whether we are looping or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "IsLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventIsLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsPlaying()
	{
		struct TimelineComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TimelineComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get whether this timeline is playing or not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsReversing()
	{
		struct TimelineComponent_eventIsReversing_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TimelineComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventIsReversing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Get whether we are reversing or not" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "IsReversing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventIsReversing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "OnRep_Timeline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Start playback of timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Start playback of timeline from the start" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "PlayFromStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Start playback of timeline in reverse" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "Reverse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Start playback of timeline in reverse from the end" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "ReverseFromEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetFloatCurve()
	{
		struct TimelineComponent_eventSetFloatCurve_Parms
		{
			UCurveFloat* NewFloatCurve;
			FName FloatTrackName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "FloatTrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, FloatTrackName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFloatCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NewFloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, NewFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatTrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFloatCurve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Update a certain float track's curve" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetFloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetFloatCurve_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation()
	{
		struct TimelineComponent_eventSetIgnoreTimeDilation_Parms
		{
			bool bNewIgnoreTimeDilation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewIgnoreTimeDilation_SetBit = [](void* Obj){ ((TimelineComponent_eventSetIgnoreTimeDilation_Parms*)Obj)->bNewIgnoreTimeDilation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetIgnoreTimeDilation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewIgnoreTimeDilation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewIgnoreTimeDilation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Set whether to ignore time dilation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetIgnoreTimeDilation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve()
	{
		struct TimelineComponent_eventSetLinearColorCurve_Parms
		{
			UCurveLinearColor* NewLinearColorCurve;
			FName LinearColorTrackName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LinearColorTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "LinearColorTrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, LinearColorTrackName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLinearColorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NewLinearColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, NewLinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearColorTrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLinearColorCurve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Update a certain linear color track's curve" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetLinearColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetLinearColorCurve_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetLooping()
	{
		struct TimelineComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewLooping_SetBit = [](void* Obj){ ((TimelineComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetLooping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewLooping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewLooping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "true means we would loop, false means we should not." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetNewTime()
	{
		struct TimelineComponent_eventSetNewTime_Parms
		{
			float NewTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTime = { UE4CodeGen_Private::EPropertyClass::Float, "NewTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Set the new playback position time to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetNewTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetNewTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition()
	{
		struct TimelineComponent_eventSetPlaybackPosition_Parms
		{
			float NewPosition;
			bool bFireEvents;
			bool bFireUpdate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bFireUpdate_SetBit = [](void* Obj){ ((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireUpdate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bFireEvents_SetBit = [](void* Obj){ ((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireEvents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEvents = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEvents_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition = { UE4CodeGen_Private::EPropertyClass::Float, "NewPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bFireUpdate" },
				{ "Category", "Components|Timeline" },
				{ "CPP_Default_bFireUpdate", "true" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Jump to a position in the timeline.\n@param bFireEvents If true, event functions that are between current position and new playback position will fire.\n@param bFireUpdate If true, the update output exec will fire after setting the new playback position." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlayRate()
	{
		struct TimelineComponent_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRate = { UE4CodeGen_Private::EPropertyClass::Float, "NewRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Sets the new play rate for this timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetPlayRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLength()
	{
		struct TimelineComponent_eventSetTimelineLength_Parms
		{
			float NewLength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLength = { UE4CodeGen_Private::EPropertyClass::Float, "NewLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLength_Parms, NewLength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Set length of the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetTimelineLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetTimelineLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode()
	{
		struct TimelineComponent_eventSetTimelineLengthMode_Parms
		{
			TEnumAsByte<ETimelineLengthMode> NewLengthMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewLengthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "NewLengthMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLengthMode_Parms, NewLengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLengthMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Sets the length mode of the timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetTimelineLengthMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetTimelineLengthMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetVectorCurve()
	{
		struct TimelineComponent_eventSetVectorCurve_Parms
		{
			UCurveVector* NewVectorCurve;
			FName VectorTrackName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_VectorTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "VectorTrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, VectorTrackName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewVectorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NewVectorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, NewVectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorTrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVectorCurve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Update a certain vector track's curve" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetVectorCurve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetVectorCurve_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTimelineComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Timeline" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Stop playback of timeline" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimelineComponent_NoRegister()
	{
		return UTimelineComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTimelineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation, "GetIgnoreTimeDilation" }, // 2910592727
				{ &Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition, "GetPlaybackPosition" }, // 1456478952
				{ &Z_Construct_UFunction_UTimelineComponent_GetPlayRate, "GetPlayRate" }, // 106143965
				{ &Z_Construct_UFunction_UTimelineComponent_GetTimelineLength, "GetTimelineLength" }, // 1549444335
				{ &Z_Construct_UFunction_UTimelineComponent_IsLooping, "IsLooping" }, // 238676254
				{ &Z_Construct_UFunction_UTimelineComponent_IsPlaying, "IsPlaying" }, // 178945416
				{ &Z_Construct_UFunction_UTimelineComponent_IsReversing, "IsReversing" }, // 642145051
				{ &Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline, "OnRep_Timeline" }, // 4023021980
				{ &Z_Construct_UFunction_UTimelineComponent_Play, "Play" }, // 2556810641
				{ &Z_Construct_UFunction_UTimelineComponent_PlayFromStart, "PlayFromStart" }, // 4193270543
				{ &Z_Construct_UFunction_UTimelineComponent_Reverse, "Reverse" }, // 3756779597
				{ &Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd, "ReverseFromEnd" }, // 1455283109
				{ &Z_Construct_UFunction_UTimelineComponent_SetFloatCurve, "SetFloatCurve" }, // 2707676760
				{ &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation, "SetIgnoreTimeDilation" }, // 356770205
				{ &Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve, "SetLinearColorCurve" }, // 1618560377
				{ &Z_Construct_UFunction_UTimelineComponent_SetLooping, "SetLooping" }, // 2340654857
				{ &Z_Construct_UFunction_UTimelineComponent_SetNewTime, "SetNewTime" }, // 3733740672
				{ &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition, "SetPlaybackPosition" }, // 1656481949
				{ &Z_Construct_UFunction_UTimelineComponent_SetPlayRate, "SetPlayRate" }, // 894577832
				{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLength, "SetTimelineLength" }, // 630446512
				{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode, "SetTimelineLengthMode" }, // 2252568444
				{ &Z_Construct_UFunction_UTimelineComponent_SetVectorCurve, "SetVectorCurve" }, // 903660711
				{ &Z_Construct_UFunction_UTimelineComponent_Stop, "Stop" }, // 813001544
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/TimelineComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.\nEvents can be triggered at keyframes along the timeline.\nFloats, vectors, and colors are interpolated between keyframes along the timeline." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "True if global time dilation should be ignored by this timeline, false otherwise." },
			};
#endif
			auto NewProp_bIgnoreTimeDilation_SetBit = [](void* Obj){ ((UTimelineComponent*)Obj)->bIgnoreTimeDilation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreTimeDilation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheTimeline_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "The actual timeline structure" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheTimeline = { UE4CodeGen_Private::EPropertyClass::Struct, "TheTimeline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008100000020, 1, "OnRep_Timeline", STRUCT_OFFSET(UTimelineComponent, TheTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(NewProp_TheTimeline_MetaData, ARRAY_COUNT(NewProp_TheTimeline_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreTimeDilation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheTimeline,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTimelineComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTimelineComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UTimelineComponent, 944131848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimelineComponent(Z_Construct_UClass_UTimelineComponent, &UTimelineComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UTimelineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
