// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/BoxElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
class UScriptStruct* FKBoxElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKBoxElem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKBoxElem, Z_Construct_UPackage__Script_Engine(), TEXT("KBoxElem"), sizeof(FKBoxElem), Get_Z_Construct_UScriptStruct_FKBoxElem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKBoxElem(FKBoxElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KBoxElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKBoxElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKBoxElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KBoxElem")),new UScriptStruct::TCppStructOps<FKBoxElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKBoxElem;
	UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKBoxElem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KBoxElem"), sizeof(FKBoxElem), Get_Z_Construct_UScriptStruct_FKBoxElem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
				{ "ToolTip", "Box shape used for collision" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKBoxElem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
				{ "Category", "Box" },
				{ "DisplayName", "Z Extent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
				{ "ToolTip", "Extent of the box along the z-axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Float, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKBoxElem, Z), METADATA_PARAMS(NewProp_Z_MetaData, ARRAY_COUNT(NewProp_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "Box" },
				{ "DisplayName", "Y Extent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
				{ "ToolTip", "Extent of the box along the y-axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Float, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKBoxElem, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "Box" },
				{ "DisplayName", "X Extent" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
				{ "ToolTip", "Extent of the box along the y-axis" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKBoxElem, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Box" },
				{ "ClampMax", "360" },
				{ "ClampMin", "-360" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
				{ "ToolTip", "Rotation of the box" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKBoxElem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "Box" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
				{ "ToolTip", "Position of the box's origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKBoxElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FKBoxElem, Orientation_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TM_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TM = { UE4CodeGen_Private::EPropertyClass::Struct, "TM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FKBoxElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(NewProp_TM_MetaData, ARRAY_COUNT(NewProp_TM_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TM,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FKShapeElem,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KBoxElem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKBoxElem),
				alignof(FKBoxElem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKBoxElem_CRC() { return 1204270452U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
