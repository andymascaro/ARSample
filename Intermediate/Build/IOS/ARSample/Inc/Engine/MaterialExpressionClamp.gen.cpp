// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionClamp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionClamp() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClampMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EClampMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClampMode, Z_Construct_UPackage__Script_Engine(), TEXT("EClampMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClampMode(EClampMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EClampMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EClampMode_CRC() { return 1269621978U; }
	UEnum* Z_Construct_UEnum_Engine_EClampMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClampMode"), 0, Get_Z_Construct_UEnum_Engine_EClampMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMODE_Clamp", (int64)CMODE_Clamp },
				{ "CMODE_ClampMin", (int64)CMODE_ClampMin },
				{ "CMODE_ClampMax", (int64)CMODE_ClampMax },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EClampMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EClampMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionClamp::StaticRegisterNativesUMaterialExpressionClamp()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister()
	{
		return UMaterialExpressionClamp::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionClamp()
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
				{ "IncludePath", "Materials/MaterialExpressionClamp.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDefault_MetaData[] = {
				{ "Category", "MaterialExpressionClamp" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
				{ "OverridingInputProperty", "Max" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDefault = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, MaxDefault), METADATA_PARAMS(NewProp_MaxDefault_MetaData, ARRAY_COUNT(NewProp_MaxDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDefault_MetaData[] = {
				{ "Category", "MaterialExpressionClamp" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
				{ "OverridingInputProperty", "Min" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDefault = { UE4CodeGen_Private::EPropertyClass::Float, "MinDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, MinDefault), METADATA_PARAMS(NewProp_MinDefault_MetaData, ARRAY_COUNT(NewProp_MinDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMode_MetaData[] = {
				{ "Category", "MaterialExpressionClamp" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClampMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClampMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, ClampMode), Z_Construct_UEnum_Engine_EClampMode, METADATA_PARAMS(NewProp_ClampMode_MetaData, ARRAY_COUNT(NewProp_ClampMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'MaxDefault' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Struct, "Max", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, Max), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Max_MetaData, ARRAY_COUNT(NewProp_Max_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'MinDefault' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Struct, "Min", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, Min), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Min_MetaData, ARRAY_COUNT(NewProp_Min_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Max,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Min,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionClamp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionClamp::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionClamp, 3310997724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionClamp(Z_Construct_UClass_UMaterialExpressionClamp, &UMaterialExpressionClamp::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionClamp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionClamp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
