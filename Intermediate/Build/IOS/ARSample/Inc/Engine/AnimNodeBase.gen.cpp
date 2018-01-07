// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNodeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECopyType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPostCopyOperation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinHidingMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLinkBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static UEnum* ECopyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECopyType, Z_Construct_UPackage__Script_Engine(), TEXT("ECopyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECopyType(ECopyType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECopyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECopyType_CRC() { return 1601417525U; }
	UEnum* Z_Construct_UEnum_Engine_ECopyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECopyType"), 0, Get_Z_Construct_UEnum_Engine_ECopyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECopyType::MemCopy", (int64)ECopyType::MemCopy },
				{ "ECopyType::BoolProperty", (int64)ECopyType::BoolProperty },
				{ "ECopyType::StructProperty", (int64)ECopyType::StructProperty },
				{ "ECopyType::ObjectProperty", (int64)ECopyType::ObjectProperty },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BoolProperty.ToolTip", "Read and write properties using bool property helpers, as source/dest could be bitfirld or boolean" },
				{ "MemCopy.ToolTip", "Just copy the memory" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ObjectProperty.ToolTip", "Read and write properties using object property helpers, as source/dest could be regular/weak/lazy etc." },
				{ "StructProperty.ToolTip", "Use struct copy operation, as this needs to correctly handle CPP struct ops" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECopyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECopyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPostCopyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPostCopyOperation, Z_Construct_UPackage__Script_Engine(), TEXT("EPostCopyOperation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPostCopyOperation(EPostCopyOperation_StaticEnum, TEXT("/Script/Engine"), TEXT("EPostCopyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPostCopyOperation_CRC() { return 1691965675U; }
	UEnum* Z_Construct_UEnum_Engine_EPostCopyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPostCopyOperation"), 0, Get_Z_Construct_UEnum_Engine_EPostCopyOperation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPostCopyOperation::None", (int64)EPostCopyOperation::None },
				{ "EPostCopyOperation::LogicalNegateBool", (int64)EPostCopyOperation::LogicalNegateBool },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPostCopyOperation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPostCopyOperation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPinHidingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPinHidingMode, Z_Construct_UPackage__Script_Engine(), TEXT("EPinHidingMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPinHidingMode(EPinHidingMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EPinHidingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPinHidingMode_CRC() { return 3668384232U; }
	UEnum* Z_Construct_UEnum_Engine_EPinHidingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPinHidingMode"), 0, Get_Z_Construct_UEnum_Engine_EPinHidingMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPinHidingMode::NeverAsPin", (int64)EPinHidingMode::NeverAsPin },
				{ "EPinHidingMode::PinHiddenByDefault", (int64)EPinHidingMode::PinHiddenByDefault },
				{ "EPinHidingMode::PinShownByDefault", (int64)EPinHidingMode::PinShownByDefault },
				{ "EPinHidingMode::AlwaysAsPin", (int64)EPinHidingMode::AlwaysAsPin },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysAsPin.ToolTip", "Always show this property as a pin; it never makes sense to edit it in the details panel (default for FPoseLink properties)." },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "NeverAsPin.ToolTip", "Never show this property as a pin, it is only editable in the details panel (default for everything but FPoseLink properties)." },
				{ "PinHiddenByDefault.ToolTip", "Hide this property by default, but allow the user to expose it as a pin via the details panel." },
				{ "PinShownByDefault.ToolTip", "Show this property as a pin by default, but allow the user to hide it via the details panel." },
				{ "ToolTip", "The display mode of editable values on an animation node." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPinHidingMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPinHidingMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Base_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Base"), sizeof(FAnimNode_Base), Get_Z_Construct_UScriptStruct_FAnimNode_Base_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Base(FAnimNode_Base::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_Base"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_Base
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_Base()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Base")),new UScriptStruct::TCppStructOps<FAnimNode_Base>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_Base;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Base_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Base"), sizeof(FAnimNode_Base), Get_Z_Construct_UScriptStruct_FAnimNode_Base_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "This is the base of all runtime animation nodes\n\nTo create a new animation node:\n  Create a struct derived from FAnimNode_Base - this is your runtime node\n  Create a class derived from UAnimGraphNode_Base, containing an instance of your runtime node as a member - this is your visual/editor-only node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Base>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluateGraphExposedInputs_MetaData[] = {
				{ "BlueprintCompilerGeneratedDefaults", "" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "The default handler for graph-exposed inputs" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluateGraphExposedInputs = { UE4CodeGen_Private::EPropertyClass::Struct, "EvaluateGraphExposedInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_Base, EvaluateGraphExposedInputs), Z_Construct_UScriptStruct_FExposedValueHandler, METADATA_PARAMS(NewProp_EvaluateGraphExposedInputs_MetaData, ARRAY_COUNT(NewProp_EvaluateGraphExposedInputs_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluateGraphExposedInputs,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_Base",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_Base),
				alignof(FAnimNode_Base),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Base_CRC() { return 1267479196U; }
class UScriptStruct* FExposedValueHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExposedValueHandler_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueHandler, Z_Construct_UPackage__Script_Engine(), TEXT("ExposedValueHandler"), sizeof(FExposedValueHandler), Get_Z_Construct_UScriptStruct_FExposedValueHandler_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExposedValueHandler(FExposedValueHandler::StaticStruct, TEXT("/Script/Engine"), TEXT("ExposedValueHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExposedValueHandler
{
	FScriptStruct_Engine_StaticRegisterNativesFExposedValueHandler()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExposedValueHandler")),new UScriptStruct::TCppStructOps<FExposedValueHandler>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExposedValueHandler;
	UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExposedValueHandler_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExposedValueHandler"), sizeof(FExposedValueHandler), Get_Z_Construct_UScriptStruct_FExposedValueHandler_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "An exposed value updater" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedValueHandler>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyRecords_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "Direct data access to property in anim instance" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CopyRecords = { UE4CodeGen_Private::EPropertyClass::Array, "CopyRecords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueHandler, CopyRecords), METADATA_PARAMS(NewProp_CopyRecords_MetaData, ARRAY_COUNT(NewProp_CopyRecords_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopyRecords_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CopyRecords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FExposedValueCopyRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "The function to call to update associated properties (can be NULL)" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoundFunction = { UE4CodeGen_Private::EPropertyClass::Name, "BoundFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueHandler, BoundFunction), METADATA_PARAMS(NewProp_BoundFunction_MetaData, ARRAY_COUNT(NewProp_BoundFunction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyRecords,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyRecords_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundFunction,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ExposedValueHandler",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FExposedValueHandler),
				alignof(FExposedValueHandler),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExposedValueHandler_CRC() { return 497477637U; }
class UScriptStruct* FExposedValueCopyRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExposedValueCopyRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueCopyRecord, Z_Construct_UPackage__Script_Engine(), TEXT("ExposedValueCopyRecord"), sizeof(FExposedValueCopyRecord), Get_Z_Construct_UScriptStruct_FExposedValueCopyRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExposedValueCopyRecord(FExposedValueCopyRecord::StaticStruct, TEXT("/Script/Engine"), TEXT("ExposedValueCopyRecord"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExposedValueCopyRecord
{
	FScriptStruct_Engine_StaticRegisterNativesFExposedValueCopyRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExposedValueCopyRecord")),new UScriptStruct::TCppStructOps<FExposedValueCopyRecord>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExposedValueCopyRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExposedValueCopyRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExposedValueCopyRecord"), sizeof(FExposedValueCopyRecord), Get_Z_Construct_UScriptStruct_FExposedValueCopyRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedValueCopyRecord>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSourceProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "cached source property" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedSourceProperty = { UE4CodeGen_Private::EPropertyClass::Object, "CachedSourceProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, CachedSourceProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_CachedSourceProperty_MetaData, ARRAY_COUNT(NewProp_CachedSourceProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CopyType = { UE4CodeGen_Private::EPropertyClass::Enum, "CopyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, CopyType), Z_Construct_UEnum_Engine_ECopyType, METADATA_PARAMS(NewProp_CopyType_MetaData, ARRAY_COUNT(NewProp_CopyType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CopyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostCopyOperation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PostCopyOperation = { UE4CodeGen_Private::EPropertyClass::Enum, "PostCopyOperation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, PostCopyOperation), Z_Construct_UEnum_Engine_EPostCopyOperation, METADATA_PARAMS(NewProp_PostCopyOperation_MetaData, ARRAY_COUNT(NewProp_PostCopyOperation_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PostCopyOperation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceIsTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "Whether or not the anim instance object is the target for the copy instead of a node." },
			};
#endif
			auto NewProp_bInstanceIsTarget_SetBit = [](void* Obj){ ((FExposedValueCopyRecord*)Obj)->bInstanceIsTarget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceIsTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstanceIsTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FExposedValueCopyRecord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInstanceIsTarget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInstanceIsTarget_MetaData, ARRAY_COUNT(NewProp_bInstanceIsTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestArrayIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DestArrayIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DestArrayIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, DestArrayIndex), METADATA_PARAMS(NewProp_DestArrayIndex_MetaData, ARRAY_COUNT(NewProp_DestArrayIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestProperty = { UE4CodeGen_Private::EPropertyClass::Object, "DestProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, DestProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_DestProperty_MetaData, ARRAY_COUNT(NewProp_DestProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceArrayIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceArrayIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceArrayIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, SourceArrayIndex), METADATA_PARAMS(NewProp_SourceArrayIndex_MetaData, ARRAY_COUNT(NewProp_SourceArrayIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSubPropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceSubPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceSubPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, SourceSubPropertyName), METADATA_PARAMS(NewProp_SourceSubPropertyName_MetaData, ARRAY_COUNT(NewProp_SourceSubPropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourcePropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "SourcePropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, SourcePropertyName), METADATA_PARAMS(NewProp_SourcePropertyName_MetaData, ARRAY_COUNT(NewProp_SourcePropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceProperty = { UE4CodeGen_Private::EPropertyClass::Object, "SourceProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, SourceProperty_DEPRECATED), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_SourceProperty_MetaData, ARRAY_COUNT(NewProp_SourceProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedSourceProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CopyType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostCopyOperation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostCopyOperation_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInstanceIsTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestArrayIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceArrayIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSubPropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourcePropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceProperty,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ExposedValueCopyRecord",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FExposedValueCopyRecord),
				alignof(FExposedValueCopyRecord),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExposedValueCopyRecord_CRC() { return 935834786U; }
class UScriptStruct* FComponentSpacePoseLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePoseLink_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePoseLink, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSpacePoseLink"), sizeof(FComponentSpacePoseLink), Get_Z_Construct_UScriptStruct_FComponentSpacePoseLink_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentSpacePoseLink(FComponentSpacePoseLink::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentSpacePoseLink"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentSpacePoseLink
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentSpacePoseLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentSpacePoseLink")),new UScriptStruct::TCppStructOps<FComponentSpacePoseLink>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentSpacePoseLink;
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePoseLink_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentSpacePoseLink"), sizeof(FComponentSpacePoseLink), Get_Z_Construct_UScriptStruct_FComponentSpacePoseLink_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "A component-space pose link to another node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSpacePoseLink>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FPoseLinkBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComponentSpacePoseLink",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FComponentSpacePoseLink),
				alignof(FComponentSpacePoseLink),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePoseLink_CRC() { return 2388339734U; }
class UScriptStruct* FPoseLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseLink_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseLink, Z_Construct_UPackage__Script_Engine(), TEXT("PoseLink"), sizeof(FPoseLink), Get_Z_Construct_UScriptStruct_FPoseLink_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseLink(FPoseLink::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseLink"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseLink
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseLink")),new UScriptStruct::TCppStructOps<FPoseLink>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseLink;
	UScriptStruct* Z_Construct_UScriptStruct_FPoseLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseLink_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseLink"), sizeof(FPoseLink), Get_Z_Construct_UScriptStruct_FPoseLink_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "A local-space pose link to another node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseLink>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FPoseLinkBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PoseLink",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPoseLink),
				alignof(FPoseLink),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseLink_CRC() { return 2335926613U; }
class UScriptStruct* FPoseLinkBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseLinkBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseLinkBase, Z_Construct_UPackage__Script_Engine(), TEXT("PoseLinkBase"), sizeof(FPoseLinkBase), Get_Z_Construct_UScriptStruct_FPoseLinkBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseLinkBase(FPoseLinkBase::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseLinkBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseLinkBase
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseLinkBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseLinkBase")),new UScriptStruct::TCppStructOps<FPoseLinkBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseLinkBase;
	UScriptStruct* Z_Construct_UScriptStruct_FPoseLinkBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseLinkBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseLinkBase"), sizeof(FPoseLinkBase), Get_Z_Construct_UScriptStruct_FPoseLinkBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "A pose link to another node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseLinkBase>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLinkID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "The source link ID, used for debug visualization." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceLinkID = { UE4CodeGen_Private::EPropertyClass::Int, "SourceLinkID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FPoseLinkBase, SourceLinkID), METADATA_PARAMS(NewProp_SourceLinkID_MetaData, ARRAY_COUNT(NewProp_SourceLinkID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
				{ "ToolTip", "Serialized link ID, used to build the non-serialized pointer map." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LinkID = { UE4CodeGen_Private::EPropertyClass::Int, "LinkID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseLinkBase, LinkID), METADATA_PARAMS(NewProp_LinkID_MetaData, ARRAY_COUNT(NewProp_LinkID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceLinkID,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PoseLinkBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPoseLinkBase),
				alignof(FPoseLinkBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseLinkBase_CRC() { return 3181295998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
