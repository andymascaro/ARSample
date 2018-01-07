// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SpringInterpolator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringInterpolator() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator();
// End Cross Module References
	UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator()
	{
		struct FVectorRK4SpringInterpolator
		{
			float StiffnessConstant;
			float DampeningRatio;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorRK4SpringInterpolator"), sizeof(FVectorRK4SpringInterpolator), Get_Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampeningRatio_MetaData[] = {
				{ "Category", "VectorRK4SpringInterpolator" },
				{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
				{ "ToolTip", "0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampeningRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DampeningRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVectorRK4SpringInterpolator, DampeningRatio), METADATA_PARAMS(NewProp_DampeningRatio_MetaData, ARRAY_COUNT(NewProp_DampeningRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessConstant_MetaData[] = {
				{ "Category", "VectorRK4SpringInterpolator" },
				{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessConstant = { UE4CodeGen_Private::EPropertyClass::Float, "StiffnessConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVectorRK4SpringInterpolator, StiffnessConstant), METADATA_PARAMS(NewProp_StiffnessConstant_MetaData, ARRAY_COUNT(NewProp_StiffnessConstant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampeningRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StiffnessConstant,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"VectorRK4SpringInterpolator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FVectorRK4SpringInterpolator),
				alignof(FVectorRK4SpringInterpolator),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_CRC() { return 395854077U; }
	UScriptStruct* Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator()
	{
		struct FFloatRK4SpringInterpolator
		{
			float StiffnessConstant;
			float DampeningRatio;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatRK4SpringInterpolator"), sizeof(FFloatRK4SpringInterpolator), Get_Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampeningRatio_MetaData[] = {
				{ "Category", "FloatRK4SpringInterpolator" },
				{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
				{ "ToolTip", "0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampeningRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DampeningRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFloatRK4SpringInterpolator, DampeningRatio), METADATA_PARAMS(NewProp_DampeningRatio_MetaData, ARRAY_COUNT(NewProp_DampeningRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessConstant_MetaData[] = {
				{ "Category", "FloatRK4SpringInterpolator" },
				{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessConstant = { UE4CodeGen_Private::EPropertyClass::Float, "StiffnessConstant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFloatRK4SpringInterpolator, StiffnessConstant), METADATA_PARAMS(NewProp_StiffnessConstant_MetaData, ARRAY_COUNT(NewProp_StiffnessConstant_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DampeningRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StiffnessConstant,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"FloatRK4SpringInterpolator",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FFloatRK4SpringInterpolator),
				alignof(FFloatRK4SpringInterpolator),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_CRC() { return 2603927894U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
