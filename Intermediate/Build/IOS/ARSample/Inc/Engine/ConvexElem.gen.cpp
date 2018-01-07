// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/ConvexElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvexElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FKConvexElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKConvexElem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKConvexElem, Z_Construct_UPackage__Script_Engine(), TEXT("KConvexElem"), sizeof(FKConvexElem), Get_Z_Construct_UScriptStruct_FKConvexElem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKConvexElem(FKConvexElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KConvexElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKConvexElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKConvexElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KConvexElem")),new UScriptStruct::TCppStructOps<FKConvexElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKConvexElem;
	UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKConvexElem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KConvexElem"), sizeof(FKConvexElem), Get_Z_Construct_UScriptStruct_FKConvexElem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
				{ "ToolTip", "One convex hull, used for simplified collision." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKConvexElem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
				{ "ToolTip", "Transform of this element" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FKConvexElem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Transform_MetaData, ARRAY_COUNT(NewProp_Transform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElemBox_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
				{ "ToolTip", "Bounding box of this convex hull." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElemBox = { UE4CodeGen_Private::EPropertyClass::Struct, "ElemBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FKConvexElem, ElemBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_ElemBox_MetaData, ARRAY_COUNT(NewProp_ElemBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
				{ "ToolTip", "Array of indices that make up the convex hull." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexData = { UE4CodeGen_Private::EPropertyClass::Array, "VertexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FKConvexElem, VertexData), METADATA_PARAMS(NewProp_VertexData_MetaData, ARRAY_COUNT(NewProp_VertexData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VertexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ElemBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexData_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FKShapeElem,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KConvexElem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKConvexElem),
				alignof(FKConvexElem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKConvexElem_CRC() { return 2627774915U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
