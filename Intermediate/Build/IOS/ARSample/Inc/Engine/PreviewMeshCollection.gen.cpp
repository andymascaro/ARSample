// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PreviewMeshCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMeshCollection() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FPreviewMeshCollectionEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry, Z_Construct_UPackage__Script_Engine(), TEXT("PreviewMeshCollectionEntry"), sizeof(FPreviewMeshCollectionEntry), Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewMeshCollectionEntry(FPreviewMeshCollectionEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("PreviewMeshCollectionEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPreviewMeshCollectionEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFPreviewMeshCollectionEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewMeshCollectionEntry")),new UScriptStruct::TCppStructOps<FPreviewMeshCollectionEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPreviewMeshCollectionEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewMeshCollectionEntry"), sizeof(FPreviewMeshCollectionEntry), Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
				{ "ToolTip", "An entry in a preview mesh collection" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewMeshCollectionEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
				{ "Category", "Skeletal Mesh" },
				{ "DisplayThumbnail", "TRUE" },
				{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
				{ "ToolTip", "The skeletal mesh to display" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FPreviewMeshCollectionEntry, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(NewProp_SkeletalMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMesh,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PreviewMeshCollectionEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPreviewMeshCollectionEntry),
				alignof(FPreviewMeshCollectionEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_CRC() { return 2160083804U; }
	void UPreviewMeshCollection::StaticRegisterNativesUPreviewMeshCollection()
	{
	}
	UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister()
	{
		return UPreviewMeshCollection::StaticClass();
	}
	UClass* Z_Construct_UClass_UPreviewMeshCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Engine/PreviewMeshCollection.h" },
				{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
				{ "ToolTip", "A simple collection of skeletal meshes used for in-editor preview" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[] = {
				{ "Category", "Skeletal Meshes" },
				{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
				{ "ToolTip", "The skeletal meshes that this collection contains" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "SkeletalMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPreviewMeshCollection, SkeletalMeshes), METADATA_PARAMS(NewProp_SkeletalMeshes_MetaData, ARRAY_COUNT(NewProp_SkeletalMeshes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SkeletalMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
				{ "Category", "Skeleton" },
				{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020001, 1, nullptr, STRUCT_OFFSET(UPreviewMeshCollection, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(NewProp_Skeleton_MetaData, ARRAY_COUNT(NewProp_Skeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMeshes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMeshes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skeleton,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UPreviewCollectionInterface_NoRegister, (int32)VTABLE_OFFSET(UPreviewMeshCollection, IPreviewCollectionInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPreviewMeshCollection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPreviewMeshCollection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreviewMeshCollection, 3475705740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreviewMeshCollection(Z_Construct_UClass_UPreviewMeshCollection, &UPreviewMeshCollection::StaticClass, TEXT("/Script/Engine"), TEXT("UPreviewMeshCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMeshCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
