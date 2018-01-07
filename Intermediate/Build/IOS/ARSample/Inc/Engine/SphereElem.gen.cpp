// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/SphereElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
class UScriptStruct* FKSphereElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKSphereElem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKSphereElem, Z_Construct_UPackage__Script_Engine(), TEXT("KSphereElem"), sizeof(FKSphereElem), Get_Z_Construct_UScriptStruct_FKSphereElem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKSphereElem(FKSphereElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KSphereElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKSphereElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKSphereElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KSphereElem")),new UScriptStruct::TCppStructOps<FKSphereElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKSphereElem;
	UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKSphereElem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KSphereElem"), sizeof(FKSphereElem), Get_Z_Construct_UScriptStruct_FKSphereElem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
				{ "ToolTip", "Sphere shape used for collision" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKSphereElem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Sphere" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
				{ "ToolTip", "Radius of the sphere" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKSphereElem, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "Sphere" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
				{ "ToolTip", "Position of the sphere's origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FKSphereElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TM_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TM = { UE4CodeGen_Private::EPropertyClass::Struct, "TM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FKSphereElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(NewProp_TM_MetaData, ARRAY_COUNT(NewProp_TM_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TM,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FKShapeElem,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KSphereElem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKSphereElem),
				alignof(FKSphereElem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKSphereElem_CRC() { return 470930779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
