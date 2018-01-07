// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionPanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPanner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionPanner::StaticRegisterNativesUMaterialExpressionPanner()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister()
	{
		return UMaterialExpressionPanner::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionPanner.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFractionalPart_MetaData[] = {
				{ "Category", "MaterialExpressionPanner" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
				{ "ToolTip", "Output only the fractional part of the pan calculation for greater precision.\nOutput is greater than or equal to 0 and less than 1." },
			};
#endif
			auto NewProp_bFractionalPart_SetBit = [](void* Obj){ ((UMaterialExpressionPanner*)Obj)->bFractionalPart = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFractionalPart = { UE4CodeGen_Private::EPropertyClass::Bool, "bFractionalPart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterialExpressionPanner), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFractionalPart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFractionalPart_MetaData, ARRAY_COUNT(NewProp_bFractionalPart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
				{ "Category", "MaterialExpressionPanner" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
				{ "ToolTip", "only used if Coordinate is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate = { UE4CodeGen_Private::EPropertyClass::UInt32, "ConstCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, ConstCoordinate), METADATA_PARAMS(NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedY_MetaData[] = {
				{ "Category", "MaterialExpressionPanner" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedY = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, SpeedY), METADATA_PARAMS(NewProp_SpeedY_MetaData, ARRAY_COUNT(NewProp_SpeedY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedX_MetaData[] = {
				{ "Category", "MaterialExpressionPanner" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedX = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, SpeedX), METADATA_PARAMS(NewProp_SpeedX_MetaData, ARRAY_COUNT(NewProp_SpeedX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Vector2 speed scale, if specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Struct, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, Speed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to Game Time if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Struct, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Coordinate_MetaData, ARRAY_COUNT(NewProp_Coordinate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFractionalPart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionPanner>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionPanner::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionPanner, 3154078215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPanner(Z_Construct_UClass_UMaterialExpressionPanner, &UMaterialExpressionPanner::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
