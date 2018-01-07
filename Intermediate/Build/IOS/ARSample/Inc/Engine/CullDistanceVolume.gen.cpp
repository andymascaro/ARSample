// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/CullDistanceVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCullDistanceVolume() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
// End Cross Module References
class UScriptStruct* FCullDistanceSizePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCullDistanceSizePair, Z_Construct_UPackage__Script_Engine(), TEXT("CullDistanceSizePair"), sizeof(FCullDistanceSizePair), Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCullDistanceSizePair(FCullDistanceSizePair::StaticStruct, TEXT("/Script/Engine"), TEXT("CullDistanceSizePair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCullDistanceSizePair
{
	FScriptStruct_Engine_StaticRegisterNativesFCullDistanceSizePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CullDistanceSizePair")),new UScriptStruct::TCppStructOps<FCullDistanceSizePair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCullDistanceSizePair;
	UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CullDistanceSizePair"), sizeof(FCullDistanceSizePair), Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
				{ "ToolTip", "Helper structure containing size and cull distance pair." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCullDistanceSizePair>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
				{ "Category", "CullDistanceSizePair" },
				{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
				{ "ToolTip", "Cull distance associated with size." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCullDistanceSizePair, CullDistance), METADATA_PARAMS(NewProp_CullDistance_MetaData, ARRAY_COUNT(NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "CullDistanceSizePair" },
				{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
				{ "ToolTip", "Size to associate with cull distance." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Float, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCullDistanceSizePair, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CullDistanceSizePair",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCullDistanceSizePair),
				alignof(FCullDistanceSizePair),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCullDistanceSizePair_CRC() { return 2125909828U; }
	void ACullDistanceVolume::StaticRegisterNativesACullDistanceVolume()
	{
	}
	UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister()
	{
		return ACullDistanceVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ACullDistanceVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Engine/CullDistanceVolume.h" },
				{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "Category", "CullDistanceVolume" },
				{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
				{ "ToolTip", "Whether the volume is currently enabled or not." },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((ACullDistanceVolume*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACullDistanceVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistances_MetaData[] = {
				{ "Category", "CullDistanceVolume" },
				{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
				{ "ToolTip", "Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best\nfit in this array to determine which cull distance to use." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CullDistances = { UE4CodeGen_Private::EPropertyClass::Array, "CullDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ACullDistanceVolume, CullDistances), METADATA_PARAMS(NewProp_CullDistances_MetaData, ARRAY_COUNT(NewProp_CullDistances_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CullDistances_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CullDistances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCullDistanceSizePair, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CullDistances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CullDistances_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACullDistanceVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACullDistanceVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(ACullDistanceVolume, 2902213391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACullDistanceVolume(Z_Construct_UClass_ACullDistanceVolume, &ACullDistanceVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ACullDistanceVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACullDistanceVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
