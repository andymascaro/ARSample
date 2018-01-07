// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthOfFieldFunction() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EDepthOfFieldFunctionValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldFunctionValue"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDepthOfFieldFunctionValue(EDepthOfFieldFunctionValue_StaticEnum, TEXT("/Script/Engine"), TEXT("EDepthOfFieldFunctionValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_CRC() { return 1139270881U; }
	UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDepthOfFieldFunctionValue"), 0, Get_Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TDOF_NearAndFarMask", (int64)TDOF_NearAndFarMask },
				{ "TDOF_NearMask", (int64)TDOF_NearMask },
				{ "TDOF_FarMask", (int64)TDOF_FarMask },
				{ "TDOF_CircleOfConfusionRadius", (int64)TDOF_CircleOfConfusionRadius },
				{ "TDOF_MAX", (int64)TDOF_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
				{ "TDOF_CircleOfConfusionRadius.ToolTip", "in pixels, only works for CircleDOF, use Abs for the actual radius as the sign of the value indicates near out of focus, positive indicates far out of focus" },
				{ "TDOF_FarMask.ToolTip", "0:in Focus or Near .. 1:Far." },
				{ "TDOF_NearAndFarMask.ToolTip", "0:in Focus .. 1:Near or Far." },
				{ "TDOF_NearMask.ToolTip", "0:in Focus or Far .. 1:Near." },
				{ "ToolTip", "Note: The index is used to map the enum to different code in the shader" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDepthOfFieldFunctionValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDepthOfFieldFunctionValue",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionDepthOfFieldFunction::StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister()
	{
		return UMaterialExpressionDepthOfFieldFunction::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialExpressionDepthOfFieldFunction.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
				{ "ToolTip", "usually nothing or PixelDepth" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Depth = { UE4CodeGen_Private::EPropertyClass::Struct, "Depth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, Depth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Depth_MetaData, ARRAY_COUNT(NewProp_Depth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionValue_MetaData[] = {
				{ "Category", "MaterialExpressionDepthOfFieldFunction" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
				{ "ToolTip", "Determines the mapping place to use on the terrain." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FunctionValue = { UE4CodeGen_Private::EPropertyClass::Byte, "FunctionValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, FunctionValue), Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, METADATA_PARAMS(NewProp_FunctionValue_MetaData, ARRAY_COUNT(NewProp_FunctionValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Depth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDepthOfFieldFunction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDepthOfFieldFunction::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionDepthOfFieldFunction, 1420225232);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDepthOfFieldFunction(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction, &UMaterialExpressionDepthOfFieldFunction::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDepthOfFieldFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthOfFieldFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
