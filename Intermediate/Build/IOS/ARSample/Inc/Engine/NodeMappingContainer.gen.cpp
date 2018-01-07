// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/NodeMappingContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingContainer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
class UScriptStruct* FNodeMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNodeMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeMap, Z_Construct_UPackage__Script_Engine(), TEXT("NodeMap"), sizeof(FNodeMap), Get_Z_Construct_UScriptStruct_FNodeMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeMap(FNodeMap::StaticStruct, TEXT("/Script/Engine"), TEXT("NodeMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNodeMap
{
	FScriptStruct_Engine_StaticRegisterNativesFNodeMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeMap")),new UScriptStruct::TCppStructOps<FNodeMap>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNodeMap;
	UScriptStruct* Z_Construct_UScriptStruct_FNodeMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeMap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeMap"), sizeof(FNodeMap), Get_Z_Construct_UScriptStruct_FNodeMap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeMap>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceToTargetTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceToTargetTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceToTargetTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeMap, SourceToTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_SourceToTargetTransform_MetaData, ARRAY_COUNT(NewProp_SourceToTargetTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNodeName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNodeName = { UE4CodeGen_Private::EPropertyClass::Name, "TargetNodeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNodeMap, TargetNodeName), METADATA_PARAMS(NewProp_TargetNodeName_MetaData, ARRAY_COUNT(NewProp_TargetNodeName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceToTargetTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetNodeName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NodeMap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNodeMap),
				alignof(FNodeMap),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeMap_CRC() { return 2089519539U; }
	void UNodeMappingContainer::StaticRegisterNativesUNodeMappingContainer()
	{
	}
	UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister()
	{
		return UNodeMappingContainer::StaticClass();
	}
	UClass* Z_Construct_UClass_UNodeMappingContainer()
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
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Animation" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/NodeMappingContainer.h" },
				{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
				{ "ToolTip", "Animation Controller Mapping data container - this contains node mapping data" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[] = {
				{ "Category", "Mapping" },
				{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "SourceAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceAsset), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(NewProp_SourceAsset_MetaData, ARRAY_COUNT(NewProp_SourceAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeMapping_MetaData[] = {
				{ "Category", "Mapping" },
				{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeMapping = { UE4CodeGen_Private::EPropertyClass::Map, "NodeMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, NodeMapping), METADATA_PARAMS(NewProp_NodeMapping_MetaData, ARRAY_COUNT(NewProp_NodeMapping_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NodeMapping_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "NodeMapping_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeMapping_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "NodeMapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FNodeMap, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeMapping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeMapping_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeMapping_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNodeMappingContainer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNodeMappingContainer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UNodeMappingContainer, 70830223);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNodeMappingContainer(Z_Construct_UClass_UNodeMappingContainer, &UNodeMappingContainer::StaticClass, TEXT("/Script/Engine"), TEXT("UNodeMappingContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
