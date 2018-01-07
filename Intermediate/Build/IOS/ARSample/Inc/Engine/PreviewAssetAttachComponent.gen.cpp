// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/PreviewAssetAttachComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewAssetAttachComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPreviewAssetAttachContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, Z_Construct_UPackage__Script_Engine(), TEXT("PreviewAssetAttachContainer"), sizeof(FPreviewAssetAttachContainer), Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewAssetAttachContainer(FPreviewAssetAttachContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("PreviewAssetAttachContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPreviewAssetAttachContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFPreviewAssetAttachContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewAssetAttachContainer")),new UScriptStruct::TCppStructOps<FPreviewAssetAttachContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPreviewAssetAttachContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewAssetAttachContainer"), sizeof(FPreviewAssetAttachContainer), Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
				{ "ToolTip", "Component which deals with attaching assets" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewAssetAttachContainer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedObjects_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "AttachedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPreviewAssetAttachContainer, AttachedObjects), METADATA_PARAMS(NewProp_AttachedObjects_MetaData, ARRAY_COUNT(NewProp_AttachedObjects_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AttachedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPreviewAttachedObjectPair, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachedObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachedObjects_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PreviewAssetAttachContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPreviewAssetAttachContainer),
				alignof(FPreviewAssetAttachContainer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_CRC() { return 546366876U; }
class UScriptStruct* FPreviewAttachedObjectPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair, Z_Construct_UPackage__Script_Engine(), TEXT("PreviewAttachedObjectPair"), sizeof(FPreviewAttachedObjectPair), Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewAttachedObjectPair(FPreviewAttachedObjectPair::StaticStruct, TEXT("/Script/Engine"), TEXT("PreviewAttachedObjectPair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPreviewAttachedObjectPair
{
	FScriptStruct_Engine_StaticRegisterNativesFPreviewAttachedObjectPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewAttachedObjectPair")),new UScriptStruct::TCppStructOps<FPreviewAttachedObjectPair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPreviewAttachedObjectPair;
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewAttachedObjectPair"), sizeof(FPreviewAttachedObjectPair), Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
				{ "ToolTip", "Preview items that are attached to the skeleton *" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewAttachedObjectPair>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedTo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
				{ "ToolTip", "The name of the attach point of the Object (for example a bone or socket name)" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachedTo = { UE4CodeGen_Private::EPropertyClass::Name, "AttachedTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedTo), METADATA_PARAMS(NewProp_AttachedTo_MetaData, ARRAY_COUNT(NewProp_AttachedTo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(FPreviewAttachedObjectPair, Object_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Object_MetaData, ARRAY_COUNT(NewProp_Object_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
				{ "ToolTip", "the object to be attached" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AttachedObject = { UE4CodeGen_Private::EPropertyClass::SoftObject, "AttachedObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000000, 1, nullptr, STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_AttachedObject_MetaData, ARRAY_COUNT(NewProp_AttachedObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachedTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Object,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachedObject,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PreviewAttachedObjectPair",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPreviewAttachedObjectPair),
				alignof(FPreviewAttachedObjectPair),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_CRC() { return 2536197289U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
