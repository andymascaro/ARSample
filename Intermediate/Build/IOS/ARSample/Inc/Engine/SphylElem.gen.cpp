// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/SphylElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphylElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
class UScriptStruct* FKSphylElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKSphylElem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKSphylElem, Z_Construct_UPackage__Script_Engine(), TEXT("KSphylElem"), sizeof(FKSphylElem), Get_Z_Construct_UScriptStruct_FKSphylElem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKSphylElem(FKSphylElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KSphylElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKSphylElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKSphylElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KSphylElem")),new UScriptStruct::TCppStructOps<FKSphylElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKSphylElem;
	UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKSphylElem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KSphylElem"), sizeof(FKSphylElem), Get_Z_Construct_UScriptStruct_FKSphylElem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
				{ "ToolTip", "Capsule shape used for collision. Z axis is capsule axis." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKSphylElem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
				{ "Category", "Capsule" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
				{ "ToolTip", "This is of line-segment ie. add Radius to both ends to find total length." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKSphylElem, Length), METADATA_PARAMS(NewProp_Length_MetaData, ARRAY_COUNT(NewProp_Length_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Capsule" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
				{ "ToolTip", "Radius of the capsule" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKSphylElem, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Capsule" },
				{ "ClampMax", "360" },
				{ "ClampMin", "-360" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
				{ "ToolTip", "Rotation of the capsule" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKSphylElem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "Capsule" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
				{ "ToolTip", "Position of the capsule's origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKSphylElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FKSphylElem, Orientation_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TM_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TM = { UE4CodeGen_Private::EPropertyClass::Struct, "TM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FKSphylElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(NewProp_TM_MetaData, ARRAY_COUNT(NewProp_TM_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Length,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TM,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FKShapeElem,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KSphylElem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKSphylElem),
				alignof(FKSphylElem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKSphylElem_CRC() { return 922449320U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
