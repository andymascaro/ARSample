// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EdGraph/EdGraphPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphPin() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
// End Cross Module References
	static UEnum* EBlueprintPinStyleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintPinStyleType, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintPinStyleType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintPinStyleType(EBlueprintPinStyleType_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintPinStyleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintPinStyleType_CRC() { return 2306337642U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintPinStyleType"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintPinStyleType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BPST_Original", (int64)BPST_Original },
				{ "BPST_VariantA", (int64)BPST_VariantA },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BPST_Original.DisplayName", "Circles, Grid, Diamond" },
				{ "BPST_VariantA.DisplayName", "Directional Circles" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlueprintPinStyleType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBlueprintPinStyleType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEdGraphPinReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinReference, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinReference"), sizeof(FEdGraphPinReference), Get_Z_Construct_UScriptStruct_FEdGraphPinReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphPinReference(FEdGraphPinReference::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphPinReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinReference
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphPinReference")),new UScriptStruct::TCppStructOps<FEdGraphPinReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphPinReference;
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphPinReference"), sizeof(FEdGraphPinReference), Get_Z_Construct_UScriptStruct_FEdGraphPinReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The pin's unique ID. Updated at Set and Save time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinId = { UE4CodeGen_Private::EPropertyClass::Struct, "PinId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinReference, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_PinId_MetaData, ARRAY_COUNT(NewProp_PinId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The node that owns the pin referred to by this struct. Updated at Set and Save time." },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwningNode = { UE4CodeGen_Private::EPropertyClass::WeakObject, "OwningNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinReference, OwningNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(NewProp_OwningNode_MetaData, ARRAY_COUNT(NewProp_OwningNode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningNode,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EdGraphPinReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEdGraphPinReference),
				alignof(FEdGraphPinReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinReference_CRC() { return 1202605857U; }
class UScriptStruct* FEdGraphPinType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinType"), sizeof(FEdGraphPinType), Get_Z_Construct_UScriptStruct_FEdGraphPinType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphPinType(FEdGraphPinType::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphPinType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinType
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphPinType")),new UScriptStruct::TCppStructOps<FEdGraphPinType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphPinType;
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphPinType"), sizeof(FEdGraphPinType), Get_Z_Construct_UScriptStruct_FEdGraphPinType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Struct used to define the type of information carried on this pin" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinType>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeakPointer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Whether or not this is a weak reference" },
			};
#endif
			auto NewProp_bIsWeakPointer_SetBit = [](void* Obj){ ((FEdGraphPinType*)Obj)->bIsWeakPointer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeakPointer = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsWeakPointer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEdGraphPinType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsWeakPointer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsWeakPointer_MetaData, ARRAY_COUNT(NewProp_bIsWeakPointer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsConst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Whether or not this pin is a immutable const value" },
			};
#endif
			auto NewProp_bIsConst_SetBit = [](void* Obj){ ((FEdGraphPinType*)Obj)->bIsConst = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConst = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsConst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEdGraphPinType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsConst_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsConst_MetaData, ARRAY_COUNT(NewProp_bIsConst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReference_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Whether or not this pin is a value passed by reference or not" },
			};
#endif
			auto NewProp_bIsReference_SetBit = [](void* Obj){ ((FEdGraphPinType*)Obj)->bIsReference = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReference = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEdGraphPinType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsReference_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsReference_MetaData, ARRAY_COUNT(NewProp_bIsReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "DEPRECATED(4.17) Whether or not this pin represents an array of values" },
			};
#endif
			auto NewProp_bIsArray_SetBit = [](void* Obj){ ((FEdGraphPinType*)Obj)->bIsArray_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsArray = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FEdGraphPinType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsArray_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsArray_MetaData, ARRAY_COUNT(NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContainerType = { UE4CodeGen_Private::EPropertyClass::Enum, "ContainerType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinType, ContainerType), Z_Construct_UEnum_Engine_EPinContainerType, METADATA_PARAMS(NewProp_ContainerType_MetaData, ARRAY_COUNT(NewProp_ContainerType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinValueType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Data used to determine value types when bIsMap is true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinValueType = { UE4CodeGen_Private::EPropertyClass::Struct, "PinValueType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinValueType), Z_Construct_UScriptStruct_FEdGraphTerminalType, METADATA_PARAMS(NewProp_PinValueType_MetaData, ARRAY_COUNT(NewProp_PinValueType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryMemberReference_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Sub-category member reference" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinSubCategoryMemberReference = { UE4CodeGen_Private::EPropertyClass::Struct, "PinSubCategoryMemberReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryMemberReference), Z_Construct_UScriptStruct_FSimpleMemberReference, METADATA_PARAMS(NewProp_PinSubCategoryMemberReference_MetaData, ARRAY_COUNT(NewProp_PinSubCategoryMemberReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Sub-category object" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PinSubCategoryObject = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PinSubCategoryObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_PinSubCategoryObject_MetaData, ARRAY_COUNT(NewProp_PinSubCategoryObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSubCategory_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Sub-category of pin type" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinSubCategory = { UE4CodeGen_Private::EPropertyClass::Str, "PinSubCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinSubCategory), METADATA_PARAMS(NewProp_PinSubCategory_MetaData, ARRAY_COUNT(NewProp_PinSubCategory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Category of pin type" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinCategory = { UE4CodeGen_Private::EPropertyClass::Str, "PinCategory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinCategory), METADATA_PARAMS(NewProp_PinCategory_MetaData, ARRAY_COUNT(NewProp_PinCategory_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsWeakPointer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsConst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContainerType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContainerType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinValueType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinSubCategoryMemberReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinSubCategoryObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinSubCategory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinCategory,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EdGraphPinType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEdGraphPinType),
				alignof(FEdGraphPinType),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinType_CRC() { return 1877932279U; }
class UScriptStruct* FSimpleMemberReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSimpleMemberReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleMemberReference, Z_Construct_UPackage__Script_Engine(), TEXT("SimpleMemberReference"), sizeof(FSimpleMemberReference), Get_Z_Construct_UScriptStruct_FSimpleMemberReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleMemberReference(FSimpleMemberReference::StaticStruct, TEXT("/Script/Engine"), TEXT("SimpleMemberReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSimpleMemberReference
{
	FScriptStruct_Engine_StaticRegisterNativesFSimpleMemberReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleMemberReference")),new UScriptStruct::TCppStructOps<FSimpleMemberReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSimpleMemberReference;
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleMemberReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleMemberReference"), sizeof(FSimpleMemberReference), Get_Z_Construct_UScriptStruct_FSimpleMemberReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleMemberReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The Guid of the member" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "MemberGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSimpleMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_MemberGuid_MetaData, ARRAY_COUNT(NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Name of the member" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MemberName = { UE4CodeGen_Private::EPropertyClass::Name, "MemberName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSimpleMemberReference, MemberName), METADATA_PARAMS(NewProp_MemberName_MetaData, ARRAY_COUNT(NewProp_MemberName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally)." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MemberParent = { UE4CodeGen_Private::EPropertyClass::Object, "MemberParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSimpleMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_MemberParent_MetaData, ARRAY_COUNT(NewProp_MemberParent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberParent,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SimpleMemberReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSimpleMemberReference),
				alignof(FSimpleMemberReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleMemberReference_CRC() { return 3557779200U; }
	void UEdGraphPin_Deprecated::StaticRegisterNativesUEdGraphPin_Deprecated()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister()
	{
		return UEdGraphPin_Deprecated::StaticClass();
	}
	UClass* Z_Construct_UClass_UEdGraphPin_Deprecated()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EdGraph/EdGraphPin.h" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Pin name could be changed, so whenever possible it's good to have a persistent GUID identifying Pin to reconstruct Node seamlessly" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersistentGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "PersistentGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_PersistentGuid_MetaData, ARRAY_COUNT(NewProp_PersistentGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAsMutableRef_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, the pin is displayed as ref" },
			};
#endif
			auto NewProp_bDisplayAsMutableRef_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bDisplayAsMutableRef = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAsMutableRef = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayAsMutableRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisplayAsMutableRef_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisplayAsMutableRef_MetaData, ARRAY_COUNT(NewProp_bDisplayAsMutableRef_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdvancedView_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, the pin may be hidden by user" },
			};
#endif
			auto NewProp_bAdvancedView_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bAdvancedView = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdvancedView = { UE4CodeGen_Private::EPropertyClass::Bool, "bAdvancedView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAdvancedView_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAdvancedView_MetaData, ARRAY_COUNT(NewProp_bAdvancedView_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDiffing_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, this pin is the focus of a diff" },
			};
#endif
			auto NewProp_bIsDiffing_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bIsDiffing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDiffing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDiffing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDiffing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsDiffing_MetaData, ARRAY_COUNT(NewProp_bIsDiffing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsIgnored_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, the default value on this pin is ignored and should not be set" },
			};
#endif
			auto NewProp_bDefaultValueIsIgnored_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsIgnored = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsIgnored = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultValueIsIgnored", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultValueIsIgnored_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultValueIsIgnored_MetaData, ARRAY_COUNT(NewProp_bDefaultValueIsIgnored_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsReadOnly_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, the default value of this connector is fixed and cannot be modified by the user (it's visible for reference only)" },
			};
#endif
			auto NewProp_bDefaultValueIsReadOnly_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultValueIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultValueIsReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultValueIsReadOnly_MetaData, ARRAY_COUNT(NewProp_bDefaultValueIsReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotConnectable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, this connector is unconnectable, and present only to allow the editing of the default text." },
			};
#endif
			auto NewProp_bNotConnectable_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bNotConnectable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotConnectable = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotConnectable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNotConnectable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNotConnectable_MetaData, ARRAY_COUNT(NewProp_bNotConnectable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If true, this connector is currently hidden." },
			};
#endif
			auto NewProp_bHidden_SetBit = [](void* Obj){ ((UEdGraphPin_Deprecated*)Obj)->bHidden = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidden = { UE4CodeGen_Private::EPropertyClass::Bool, "bHidden", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraphPin_Deprecated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHidden_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHidden_MetaData, ARRAY_COUNT(NewProp_bHidden_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePassThroughConnection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Pin that this pin uses for passing through reference connection" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencePassThroughConnection = { UE4CodeGen_Private::EPropertyClass::Object, "ReferencePassThroughConnection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, ReferencePassThroughConnection), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(NewProp_ReferencePassThroughConnection_MetaData, ARRAY_COUNT(NewProp_ReferencePassThroughConnection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The pin that was split and generated this pin" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentPin = { UE4CodeGen_Private::EPropertyClass::Object, "ParentPin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, ParentPin), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(NewProp_ParentPin_MetaData, ARRAY_COUNT(NewProp_ParentPin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubPins_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The pins created when a pin is split and hidden" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubPins = { UE4CodeGen_Private::EPropertyClass::Array, "SubPins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, SubPins), METADATA_PARAMS(NewProp_SubPins_MetaData, ARRAY_COUNT(NewProp_SubPins_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubPins_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubPins", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Set of pins that we are linked to" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedTo = { UE4CodeGen_Private::EPropertyClass::Array, "LinkedTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, LinkedTo), METADATA_PARAMS(NewProp_LinkedTo_MetaData, ARRAY_COUNT(NewProp_LinkedTo_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedTo_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LinkedTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If the default value for this pin should be an FText, it is stored here." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultTextValue = { UE4CodeGen_Private::EPropertyClass::Text, "DefaultTextValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultTextValue), METADATA_PARAMS(NewProp_DefaultTextValue_MetaData, ARRAY_COUNT(NewProp_DefaultTextValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "If the default value for this pin should be an object, we store a pointer to it" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultObject = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_DefaultObject_MetaData, ARRAY_COUNT(NewProp_DefaultObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutogeneratedDefaultValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Initial default value (the autogenerated value, to identify if the user has modified the value), stored as a string" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutogeneratedDefaultValue = { UE4CodeGen_Private::EPropertyClass::Str, "AutogeneratedDefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, AutogeneratedDefaultValue), METADATA_PARAMS(NewProp_AutogeneratedDefaultValue_MetaData, ARRAY_COUNT(NewProp_AutogeneratedDefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Default value for this pin (used if the pin has no connections), stored as a string" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The type of information carried on this pin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinType = { UE4CodeGen_Private::EPropertyClass::Struct, "PinType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(NewProp_PinType_MetaData, ARRAY_COUNT(NewProp_PinType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Direction of flow of this pin (input or output)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Byte, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, Direction), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(NewProp_Direction_MetaData, ARRAY_COUNT(NewProp_Direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinToolTip_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "The tool-tip describing this pin's purpose" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinToolTip = { UE4CodeGen_Private::EPropertyClass::Str, "PinToolTip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinToolTip), METADATA_PARAMS(NewProp_PinToolTip_MetaData, ARRAY_COUNT(NewProp_PinToolTip_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinFriendlyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Used as the display name if set" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_PinFriendlyName = { UE4CodeGen_Private::EPropertyClass::Text, "PinFriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinFriendlyName), METADATA_PARAMS(NewProp_PinFriendlyName_MetaData, ARRAY_COUNT(NewProp_PinFriendlyName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
				{ "ToolTip", "Name of this pin" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinName = { UE4CodeGen_Private::EPropertyClass::Str, "PinName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinName), METADATA_PARAMS(NewProp_PinName_MetaData, ARRAY_COUNT(NewProp_PinName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersistentGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisplayAsMutableRef,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAdvancedView,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDiffing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultValueIsIgnored,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultValueIsReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNotConnectable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHidden,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencePassThroughConnection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentPin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubPins,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubPins_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkedTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkedTo_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultTextValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutogeneratedDefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinToolTip,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinFriendlyName,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PinName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEdGraphPin_Deprecated>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEdGraphPin_Deprecated::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UEdGraphPin_Deprecated, 3368632065);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphPin_Deprecated(Z_Construct_UClass_UEdGraphPin_Deprecated, &UEdGraphPin_Deprecated::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphPin_Deprecated"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphPin_Deprecated);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
