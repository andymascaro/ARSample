// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavAreas/NavArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UNavArea::StaticRegisterNativesUNavArea()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_NoRegister()
	{
		return UNavArea::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavArea()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "AI/Navigation/NavAreas/NavArea.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
				{ "ToolTip", "Class containing definition of a navigation area" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent15_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent15_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent15 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent15 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent15", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent15_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent15_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent15_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent14_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent14_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent14 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent14 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent14", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent14_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent14_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent14_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent13_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent13_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent13 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent13 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent13", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent13_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent13_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent13_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent12_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent12_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent12 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent12 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent12", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent12_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent12_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent12_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent11_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent11_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent11 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent11 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent11", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent11_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent11_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent11_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent10_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent10_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent10 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent10 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent10", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent10_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent10_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent10_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent9_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent9_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent9 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent9 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent9", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent9_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent9_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent9_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent8_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent8_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent8 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent8 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent8", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent8_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent8_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent8_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent7_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent7_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent7_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent6_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent6_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent6 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent6 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent6_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent6_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent6_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent5_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent5_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent5 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent5 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent5_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent5_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent4_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent4_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent4 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent4 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent4_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent4_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent3_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent3_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent3 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent3_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent3_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent2_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent2_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
			};
#endif
			auto NewProp_bSupportsAgent1_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent1 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent1_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent1_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent0_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
				{ "ToolTip", "DEPRECATED AGENT CONFIG" },
			};
#endif
			auto NewProp_bSupportsAgent0_SetBit = [](void* Obj){ ((UNavArea*)Obj)->bSupportsAgent0 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent0 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavArea), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent0_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent0_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
				{ "Category", "NavArea" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
				{ "ToolTip", "restrict area only to specified agents" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNavArea, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(NewProp_SupportedAgents_MetaData, ARRAY_COUNT(NewProp_SupportedAgents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[] = {
				{ "Category", "NavArea" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
				{ "ToolTip", "area color in navigation view" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNavArea, DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_DrawColor_MetaData, ARRAY_COUNT(NewProp_DrawColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedAreaEnteringCost_MetaData[] = {
				{ "Category", "NavArea" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
				{ "ToolTip", "entering cost" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedAreaEnteringCost = { UE4CodeGen_Private::EPropertyClass::Float, "FixedAreaEnteringCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UNavArea, FixedAreaEnteringCost), METADATA_PARAMS(NewProp_FixedAreaEnteringCost_MetaData, ARRAY_COUNT(NewProp_FixedAreaEnteringCost_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCost_MetaData[] = {
				{ "Category", "NavArea" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea.h" },
				{ "ToolTip", "travel cost multiplier for path distance" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCost = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultCost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNavArea, DefaultCost), METADATA_PARAMS(NewProp_DefaultCost_MetaData, ARRAY_COUNT(NewProp_DefaultCost_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent15,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent14,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent13,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent12,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent11,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent10,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent9,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent8,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAgents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FixedAreaEnteringCost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultCost,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavArea>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavArea::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300085u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea, 1330925404);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea(Z_Construct_UClass_UNavArea, &UNavArea::StaticClass, TEXT("/Script/Engine"), TEXT("UNavArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
