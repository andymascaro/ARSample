// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FoliageTypeObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageTypeObject() {}
// Cross Module References
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FFoliageTypeObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOLIAGE_API uint32 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageTypeObject, Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageTypeObject"), sizeof(FFoliageTypeObject), Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageTypeObject(FFoliageTypeObject::StaticStruct, TEXT("/Script/Foliage"), TEXT("FoliageTypeObject"), false, nullptr, nullptr);
static struct FScriptStruct_Foliage_StaticRegisterNativesFFoliageTypeObject
{
	FScriptStruct_Foliage_StaticRegisterNativesFFoliageTypeObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoliageTypeObject")),new UScriptStruct::TCppStructOps<FFoliageTypeObject>);
	}
} ScriptStruct_Foliage_StaticRegisterNativesFFoliageTypeObject;
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageTypeObject"), sizeof(FFoliageTypeObject), Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
				{ "ToolTip", "A wrapper struct used to allow the use of either FoliageType assets or FoliageType blueprint classes" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageTypeObject>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Class, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000020000000, 1, nullptr, STRUCT_OFFSET(FFoliageTypeObject, Type_DEPRECATED), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAsset_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
				{ "ToolTip", "Whether this contains an asset object (as opposed to a BP class)" },
			};
#endif
			auto NewProp_bIsAsset_SetBit = [](void* Obj){ ((FFoliageTypeObject*)Obj)->bIsAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFoliageTypeObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAsset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAsset_MetaData, ARRAY_COUNT(NewProp_bIsAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeInstance_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
				{ "ToolTip", "The actual instance of the foliage type that is used for spawning" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TypeInstance = { UE4CodeGen_Private::EPropertyClass::Object, "TypeInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FFoliageTypeObject, TypeInstance), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(NewProp_TypeInstance_MetaData, ARRAY_COUNT(NewProp_TypeInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageTypeObject_MetaData[] = {
				{ "AllowedClasses", "FoliageType_InstancedStaticMesh,Blueprint" },
				{ "Category", "ProceduralFoliageSimulation" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/FoliageTypeObject.h" },
				{ "ThumbnailSize", "X=40 Y=40" },
				{ "ToolTip", "The foliage type that will be spawned by the procedural foliage simulation" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageTypeObject = { UE4CodeGen_Private::EPropertyClass::Object, "FoliageTypeObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FFoliageTypeObject, FoliageTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_FoliageTypeObject_MetaData, ARRAY_COUNT(NewProp_FoliageTypeObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TypeInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageTypeObject,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FoliageTypeObject",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FFoliageTypeObject),
				alignof(FFoliageTypeObject),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageTypeObject_CRC() { return 886869099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
