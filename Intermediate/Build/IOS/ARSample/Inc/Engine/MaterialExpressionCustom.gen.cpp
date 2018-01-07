// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustom() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* ECustomMaterialOutputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomMaterialOutputType, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomMaterialOutputType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMaterialOutputType(ECustomMaterialOutputType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomMaterialOutputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomMaterialOutputType_CRC() { return 1306140147U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMaterialOutputType"), 0, Get_Z_Construct_UEnum_Engine_ECustomMaterialOutputType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMOT_Float1", (int64)CMOT_Float1 },
				{ "CMOT_Float2", (int64)CMOT_Float2 },
				{ "CMOT_Float3", (int64)CMOT_Float3 },
				{ "CMOT_Float4", (int64)CMOT_Float4 },
				{ "CMOT_MAX", (int64)CMOT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECustomMaterialOutputType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ECustomMaterialOutputType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCustomInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomInput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomInput, Z_Construct_UPackage__Script_Engine(), TEXT("CustomInput"), sizeof(FCustomInput), Get_Z_Construct_UScriptStruct_FCustomInput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomInput(FCustomInput::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomInput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomInput
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomInput")),new UScriptStruct::TCppStructOps<FCustomInput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomInput;
	UScriptStruct* Z_Construct_UScriptStruct_FCustomInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomInput"), sizeof(FCustomInput), Get_Z_Construct_UScriptStruct_FCustomInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomInput>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
				{ "Category", "CustomInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName = { UE4CodeGen_Private::EPropertyClass::Str, "InputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCustomInput, InputName), METADATA_PARAMS(NewProp_InputName_MetaData, ARRAY_COUNT(NewProp_InputName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CustomInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCustomInput),
				alignof(FCustomInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomInput_CRC() { return 3616046207U; }
	void UMaterialExpressionCustom::StaticRegisterNativesUMaterialExpressionCustom()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister()
	{
		return UMaterialExpressionCustom::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCustom()
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
				{ "IncludePath", "Materials/MaterialExpressionCustom.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "Category", "MaterialExpressionCustom" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCustom, Inputs), METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCustomInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "MaterialExpressionCustom" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCustom, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
				{ "Category", "MaterialExpressionCustom" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType = { UE4CodeGen_Private::EPropertyClass::Byte, "OutputType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCustom, OutputType), Z_Construct_UEnum_Engine_ECustomMaterialOutputType, METADATA_PARAMS(NewProp_OutputType_MetaData, ARRAY_COUNT(NewProp_OutputType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
				{ "Category", "MaterialExpressionCustom" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
				{ "MultiLine", "TRUE" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code = { UE4CodeGen_Private::EPropertyClass::Str, "Code", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCustom, Code), METADATA_PARAMS(NewProp_Code_MetaData, ARRAY_COUNT(NewProp_Code_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Code,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionCustom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionCustom::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionCustom, 2389978101);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCustom(Z_Construct_UClass_UMaterialExpressionCustom, &UMaterialExpressionCustom::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
