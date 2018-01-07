// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimLinkableElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimLinkableElement() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimLinkMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	static UEnum* EAnimLinkMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimLinkMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimLinkMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimLinkMethod(EAnimLinkMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimLinkMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimLinkMethod_CRC() { return 2677411964U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimLinkMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimLinkMethod"), 0, Get_Z_Construct_UEnum_Engine_EAnimLinkMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimLinkMethod::Absolute", (int64)EAnimLinkMethod::Absolute },
				{ "EAnimLinkMethod::Relative", (int64)EAnimLinkMethod::Relative },
				{ "EAnimLinkMethod::Proportional", (int64)EAnimLinkMethod::Proportional },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.ToolTip", "Element stays at a specific time without moving." },
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "Proportional.ToolTip", "Element moves with its segment and will stay at a certain proportion through the segment." },
				{ "Relative.ToolTip", "Element moves with its segment, but not when the segment changes size." },
				{ "ToolTip", "Supported types of time for a linked element" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnimLinkMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAnimLinkMethod::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimLinkableElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimLinkableElement_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLinkableElement, Z_Construct_UPackage__Script_Engine(), TEXT("AnimLinkableElement"), sizeof(FAnimLinkableElement), Get_Z_Construct_UScriptStruct_FAnimLinkableElement_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLinkableElement(FAnimLinkableElement::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimLinkableElement"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimLinkableElement
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimLinkableElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLinkableElement")),new UScriptStruct::TCppStructOps<FAnimLinkableElement>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimLinkableElement;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLinkableElement_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLinkableElement"), sizeof(FAnimLinkableElement), Get_Z_Construct_UScriptStruct_FAnimLinkableElement_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "Used to describe an element that can be linked to a segment in a montage or sequence.\n   Usage:\n           Inherit from FAnimLinkableElement and make sure to call LinkMontage or LinkSequence\n           both on creation and on loading the element. From there SetTime and GetTime should be\n           used to control where this element is in the montage or sequence.\n\n           For more advanced usage, see this implementation used in FAnimNotifyEvent where\n           we have a secondary link to handle a duration\n           @see FAnimNotifyEvent" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLinkableElement>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedSequence_MetaData[] = {
				{ "Category", "AnimLink" },
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The Animation Sequence that this montage element will link to, when the sequence changes\nin either length or rate; the element will correctly place itself in relation to the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedSequence = { UE4CodeGen_Private::EPropertyClass::Object, "LinkedSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000020001, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkedSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(NewProp_LinkedSequence_MetaData, ARRAY_COUNT(NewProp_LinkedSequence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The time of this montage. This will differ depending upon the method we are using to link the time for this element" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinkValue = { UE4CodeGen_Private::EPropertyClass::Float, "LinkValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkValue), METADATA_PARAMS(NewProp_LinkValue_MetaData, ARRAY_COUNT(NewProp_LinkValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The absolute length of our currently linked segment" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentLength = { UE4CodeGen_Private::EPropertyClass::Float, "SegmentLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SegmentLength), METADATA_PARAMS(NewProp_SegmentLength_MetaData, ARRAY_COUNT(NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentBeginTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The absolute time in the montage that our currently linked segment begins" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentBeginTime = { UE4CodeGen_Private::EPropertyClass::Float, "SegmentBeginTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SegmentBeginTime), METADATA_PARAMS(NewProp_SegmentBeginTime_MetaData, ARRAY_COUNT(NewProp_SegmentBeginTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLinkMethod_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "Cached link method used to transform the time when LinkMethod changes, always relates to the currently stored time" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedLinkMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "CachedLinkMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, CachedLinkMethod), Z_Construct_UEnum_Engine_EAnimLinkMethod, METADATA_PARAMS(NewProp_CachedLinkMethod_MetaData, ARRAY_COUNT(NewProp_CachedLinkMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkMethod_MetaData[] = {
				{ "Category", "AnimLink" },
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The method we are using to calculate our times" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "LinkMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkMethod), Z_Construct_UEnum_Engine_EAnimLinkMethod, METADATA_PARAMS(NewProp_LinkMethod_MetaData, ARRAY_COUNT(NewProp_LinkMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The index of the segment we are linked to within the slot we are using" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SegmentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SegmentIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SegmentIndex), METADATA_PARAMS(NewProp_SegmentIndex_MetaData, ARRAY_COUNT(NewProp_SegmentIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
				{ "Category", "AnimLink" },
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The slot index we are currently using within LinkedMontage" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SlotIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, SlotIndex), METADATA_PARAMS(NewProp_SlotIndex_MetaData, ARRAY_COUNT(NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedMontage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimLinkableElement.h" },
				{ "ToolTip", "The montage that this element is currently linked to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedMontage = { UE4CodeGen_Private::EPropertyClass::Object, "LinkedMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimLinkableElement, LinkedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_LinkedMontage_MetaData, ARRAY_COUNT(NewProp_LinkedMontage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkedSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentBeginTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedLinkMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkedMontage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimLinkableElement",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimLinkableElement),
				alignof(FAnimLinkableElement),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLinkableElement_CRC() { return 2382635798U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
