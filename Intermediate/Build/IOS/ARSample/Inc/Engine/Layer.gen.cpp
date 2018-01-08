// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Layers/Layer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FLayerActorStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLayerActorStats_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerActorStats, Z_Construct_UPackage__Script_Engine(), TEXT("LayerActorStats"), sizeof(FLayerActorStats), Get_Z_Construct_UScriptStruct_FLayerActorStats_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLayerActorStats(FLayerActorStats::StaticStruct, TEXT("/Script/Engine"), TEXT("LayerActorStats"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLayerActorStats
{
	FScriptStruct_Engine_StaticRegisterNativesFLayerActorStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LayerActorStats")),new UScriptStruct::TCppStructOps<FLayerActorStats>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLayerActorStats;
	UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLayerActorStats_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LayerActorStats"), sizeof(FLayerActorStats), Get_Z_Construct_UScriptStruct_FLayerActorStats_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerActorStats>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
				{ "ToolTip", "The total number of Actors of Type assigned to the Layer" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total = { UE4CodeGen_Private::EPropertyClass::Int, "Total", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLayerActorStats, Total), METADATA_PARAMS(NewProp_Total_MetaData, ARRAY_COUNT(NewProp_Total_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
				{ "ToolTip", "A Type of Actor currently associated with the Layer" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Class, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLayerActorStats, Type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Total,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LayerActorStats",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLayerActorStats),
				alignof(FLayerActorStats),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLayerActorStats_CRC() { return 645870139U; }
	void ULayer::StaticRegisterNativesULayer()
	{
	}
	UClass* Z_Construct_UClass_ULayer_NoRegister()
	{
		return ULayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ULayer()
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
				{ "IncludePath", "Layers/Layer.h" },
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorStats_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
				{ "ToolTip", "Basic stats regarding the number of Actors and their types currently assigned to the Layer" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorStats = { UE4CodeGen_Private::EPropertyClass::Array, "ActorStats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(ULayer, ActorStats), METADATA_PARAMS(NewProp_ActorStats_MetaData, ARRAY_COUNT(NewProp_ActorStats_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorStats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActorStats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLayerActorStats, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
				{ "ToolTip", "Whether actors associated with the layer are visible in the viewport" },
			};
#endif
			auto NewProp_bIsVisible_SetBit = [](void* Obj){ ((ULayer*)Obj)->bIsVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsVisible_MetaData, ARRAY_COUNT(NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
				{ "ToolTip", "The display name of the layer" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULayer, LayerName), METADATA_PARAMS(NewProp_LayerName_MetaData, ARRAY_COUNT(NewProp_LayerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorStats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorStats_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULayer::StaticClass,
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
	IMPLEMENT_CLASS(ULayer, 3111950084);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULayer(Z_Construct_UClass_ULayer, &ULayer::StaticClass, TEXT("/Script/Engine"), TEXT("ULayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
