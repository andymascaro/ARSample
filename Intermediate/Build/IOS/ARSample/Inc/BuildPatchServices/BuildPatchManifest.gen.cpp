// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/BuildPatchManifest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildPatchManifest() {}
// Cross Module References
	BUILDPATCHSERVICES_API UEnum* Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader();
	UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData();
	BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister();
	BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EManifestFileHeader_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("EManifestFileHeader"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManifestFileHeader(EManifestFileHeader_StaticEnum, TEXT("/Script/BuildPatchServices"), TEXT("EManifestFileHeader"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader_CRC() { return 3664562594U; }
	UEnum* Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManifestFileHeader"), 0, Get_Z_Construct_UEnum_BuildPatchServices_EManifestFileHeader_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManifestFileHeader::STORED_RAW", (int64)EManifestFileHeader::STORED_RAW },
				{ "EManifestFileHeader::STORED_COMPRESSED", (int64)EManifestFileHeader::STORED_COMPRESSED },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "STORED_COMPRESSED.ToolTip", "Flag for compressed." },
				{ "STORED_RAW.ToolTip", "Zero means raw data." },
				{ "ToolTip", "An enum type to describe the format that manifest data is stored" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildPatchServices,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EManifestFileHeader",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EManifestFileHeader::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFileManifestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileManifestData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("FileManifestData"), sizeof(FFileManifestData), Get_Z_Construct_UScriptStruct_FFileManifestData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileManifestData(FFileManifestData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("FileManifestData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FileManifestData")),new UScriptStruct::TCppStructOps<FFileManifestData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData;
	UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileManifestData"), sizeof(FFileManifestData), Get_Z_Construct_UScriptStruct_FFileManifestData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "A data structure that describes a file's construction information" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileManifestData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCompressed_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			auto NewProp_bIsCompressed_SetBit = [](void* Obj){ ((FFileManifestData*)Obj)->bIsCompressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCompressed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCompressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFileManifestData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsCompressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsCompressed_MetaData, ARRAY_COUNT(NewProp_bIsCompressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			auto NewProp_bIsReadOnly_SetBit = [](void* Obj){ ((FFileManifestData*)Obj)->bIsReadOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFileManifestData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsReadOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsReadOnly_MetaData, ARRAY_COUNT(NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymlinkTarget_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SymlinkTarget = { UE4CodeGen_Private::EPropertyClass::Str, "SymlinkTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, SymlinkTarget), METADATA_PARAMS(NewProp_SymlinkTarget_MetaData, ARRAY_COUNT(NewProp_SymlinkTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnixExecutable_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			auto NewProp_bIsUnixExecutable_SetBit = [](void* Obj){ ((FFileManifestData*)Obj)->bIsUnixExecutable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnixExecutable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUnixExecutable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFileManifestData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsUnixExecutable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsUnixExecutable_MetaData, ARRAY_COUNT(NewProp_bIsUnixExecutable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallTags_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstallTags = { UE4CodeGen_Private::EPropertyClass::Array, "InstallTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, InstallTags), METADATA_PARAMS(NewProp_InstallTags_MetaData, ARRAY_COUNT(NewProp_InstallTags_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstallTags_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InstallTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileChunkParts_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileChunkParts = { UE4CodeGen_Private::EPropertyClass::Array, "FileChunkParts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, FileChunkParts), METADATA_PARAMS(NewProp_FileChunkParts_MetaData, ARRAY_COUNT(NewProp_FileChunkParts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileChunkParts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FileChunkParts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChunkPartData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileHash_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileHash = { UE4CodeGen_Private::EPropertyClass::Struct, "FileHash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, FileHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(NewProp_FileHash_MetaData, ARRAY_COUNT(NewProp_FileHash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, Filename), METADATA_PARAMS(NewProp_Filename_MetaData, ARRAY_COUNT(NewProp_Filename_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsCompressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsReadOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SymlinkTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsUnixExecutable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstallTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstallTags_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileChunkParts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileChunkParts_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileHash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filename,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FileManifestData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFileManifestData),
				alignof(FFileManifestData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC() { return 3120949263U; }
class UScriptStruct* FChunkPartData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPartData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkPartData"), sizeof(FChunkPartData), Get_Z_Construct_UScriptStruct_FChunkPartData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkPartData(FChunkPartData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("ChunkPartData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkPartData")),new UScriptStruct::TCppStructOps<FChunkPartData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData;
	UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkPartData"), sizeof(FChunkPartData), Get_Z_Construct_UScriptStruct_FChunkPartData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "A data structure describing the part of a chunk used to construct a file" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkPartData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "The size of this part" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::UInt32, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkPartData, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "The offset of the first byte into the chunk" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::UInt32, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkPartData, Offset), METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "The GUID of the chunk containing this part" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkPartData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ChunkPartData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FChunkPartData),
				alignof(FChunkPartData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC() { return 551918921U; }
class UScriptStruct* FChunkInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfoData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkInfoData"), sizeof(FChunkInfoData), Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkInfoData(FChunkInfoData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("ChunkInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkInfoData")),new UScriptStruct::TCppStructOps<FChunkInfoData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData;
	UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkInfoData"), sizeof(FChunkInfoData), Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "A data structure describing a chunk file" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkInfoData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupNumber_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "GroupNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, GroupNumber), nullptr, METADATA_PARAMS(NewProp_GroupNumber_MetaData, ARRAY_COUNT(NewProp_GroupNumber_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FileSize = { UE4CodeGen_Private::EPropertyClass::Int64, "FileSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, FileSize), METADATA_PARAMS(NewProp_FileSize_MetaData, ARRAY_COUNT(NewProp_FileSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShaHash_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShaHash = { UE4CodeGen_Private::EPropertyClass::Struct, "ShaHash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, ShaHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(NewProp_ShaHash_MetaData, ARRAY_COUNT(NewProp_ShaHash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_Hash = { UE4CodeGen_Private::EPropertyClass::UInt64, "Hash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, Hash), METADATA_PARAMS(NewProp_Hash_MetaData, ARRAY_COUNT(NewProp_Hash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupNumber,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShaHash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ChunkInfoData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FChunkInfoData),
				alignof(FChunkInfoData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC() { return 784933823U; }
class UScriptStruct* FSHAHashData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHAHashData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("SHAHashData"), sizeof(FSHAHashData), Get_Z_Construct_UScriptStruct_FSHAHashData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSHAHashData(FSHAHashData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("SHAHashData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SHAHashData")),new UScriptStruct::TCppStructOps<FSHAHashData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData;
	UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SHAHashData"), sizeof(FSHAHashData), Get_Z_Construct_UScriptStruct_FSHAHashData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "A UStruct wrapping SHA1 hash data for serialization" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHAHashData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hash = { UE4CodeGen_Private::EPropertyClass::Byte, "Hash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Hash, FSHAHashData), nullptr, STRUCT_OFFSET(FSHAHashData, Hash), nullptr, METADATA_PARAMS(NewProp_Hash_MetaData, ARRAY_COUNT(NewProp_Hash_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hash,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SHAHashData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSHAHashData),
				alignof(FSHAHashData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC() { return 4200216472U; }
class UScriptStruct* FCustomFieldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFieldData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("CustomFieldData"), sizeof(FCustomFieldData), Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomFieldData(FCustomFieldData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("CustomFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomFieldData")),new UScriptStruct::TCppStructOps<FCustomFieldData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData;
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomFieldData"), sizeof(FCustomFieldData), Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "A data structure that hold a manifests custom field. This is a key value pair of strings" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFieldData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomFieldData, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomFieldData, Key), METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CustomFieldData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCustomFieldData),
				alignof(FCustomFieldData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC() { return 3271051009U; }
	void UBuildPatchManifest::StaticRegisterNativesUBuildPatchManifest()
	{
	}
	UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister()
	{
		return UBuildPatchManifest::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuildPatchManifest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BuildPatchManifest.h" },
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
				{ "ToolTip", "This is the manifest UObject where all manifest data is stored" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomFields_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomFields = { UE4CodeGen_Private::EPropertyClass::Array, "CustomFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, CustomFields), METADATA_PARAMS(NewProp_CustomFields_MetaData, ARRAY_COUNT(NewProp_CustomFields_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomFields_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCustomFieldData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkList_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChunkList = { UE4CodeGen_Private::EPropertyClass::Array, "ChunkList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, ChunkList), METADATA_PARAMS(NewProp_ChunkList_MetaData, ARRAY_COUNT(NewProp_ChunkList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChunkList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChunkList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChunkInfoData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileManifestList_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileManifestList = { UE4CodeGen_Private::EPropertyClass::Array, "FileManifestList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, FileManifestList), METADATA_PARAMS(NewProp_FileManifestList_MetaData, ARRAY_COUNT(NewProp_FileManifestList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileManifestList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FileManifestList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFileManifestData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqArgs_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqArgs = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqArgs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqArgs), METADATA_PARAMS(NewProp_PrereqArgs_MetaData, ARRAY_COUNT(NewProp_PrereqArgs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqPath_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqPath = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqPath), METADATA_PARAMS(NewProp_PrereqPath_MetaData, ARRAY_COUNT(NewProp_PrereqPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqName_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqName = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqName), METADATA_PARAMS(NewProp_PrereqName_MetaData, ARRAY_COUNT(NewProp_PrereqName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqIds_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_PrereqIds = { UE4CodeGen_Private::EPropertyClass::Set, "PrereqIds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqIds), METADATA_PARAMS(NewProp_PrereqIds_MetaData, ARRAY_COUNT(NewProp_PrereqIds_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqIds_ElementProp = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqIds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchCommand_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchCommand = { UE4CodeGen_Private::EPropertyClass::Str, "LaunchCommand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, LaunchCommand), METADATA_PARAMS(NewProp_LaunchCommand_MetaData, ARRAY_COUNT(NewProp_LaunchCommand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchExe_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchExe = { UE4CodeGen_Private::EPropertyClass::Str, "LaunchExe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, LaunchExe), METADATA_PARAMS(NewProp_LaunchExe_MetaData, ARRAY_COUNT(NewProp_LaunchExe_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion = { UE4CodeGen_Private::EPropertyClass::Str, "BuildVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, BuildVersion), METADATA_PARAMS(NewProp_BuildVersion_MetaData, ARRAY_COUNT(NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName = { UE4CodeGen_Private::EPropertyClass::Str, "AppName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, AppName), METADATA_PARAMS(NewProp_AppName_MetaData, ARRAY_COUNT(NewProp_AppName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AppID = { UE4CodeGen_Private::EPropertyClass::UInt32, "AppID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, AppID), METADATA_PARAMS(NewProp_AppID_MetaData, ARRAY_COUNT(NewProp_AppID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFileData_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			auto NewProp_bIsFileData_SetBit = [](void* Obj){ ((UBuildPatchManifest*)Obj)->bIsFileData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFileData = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFileData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuildPatchManifest), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFileData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFileData_MetaData, ARRAY_COUNT(NewProp_bIsFileData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManifestFileVersion_MetaData[] = {
				{ "ModuleRelativePath", "Private/BuildPatchManifest.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ManifestFileVersion = { UE4CodeGen_Private::EPropertyClass::Byte, "ManifestFileVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, ManifestFileVersion), nullptr, METADATA_PARAMS(NewProp_ManifestFileVersion_MetaData, ARRAY_COUNT(NewProp_ManifestFileVersion_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomFields,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomFields_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileManifestList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileManifestList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrereqArgs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrereqPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrereqName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrereqIds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrereqIds_ElementProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchCommand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchExe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AppName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AppID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFileData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManifestFileVersion,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBuildPatchManifest>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBuildPatchManifest::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UBuildPatchManifest, 1572306266);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuildPatchManifest(Z_Construct_UClass_UBuildPatchManifest, &UBuildPatchManifest::StaticClass, TEXT("/Script/BuildPatchServices"), TEXT("UBuildPatchManifest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildPatchManifest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
