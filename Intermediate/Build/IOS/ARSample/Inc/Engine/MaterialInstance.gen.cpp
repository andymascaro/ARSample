// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FVectorParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVectorParameterValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("VectorParameterValue"), sizeof(FVectorParameterValue), Get_Z_Construct_UScriptStruct_FVectorParameterValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorParameterValue(FVectorParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("VectorParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVectorParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFVectorParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorParameterValue")),new UScriptStruct::TCppStructOps<FVectorParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVectorParameterValue;
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorParameterValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorParameterValue"), sizeof(FVectorParameterValue), Get_Z_Construct_UScriptStruct_FVectorParameterValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Editable vector parameter." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVectorParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
				{ "Category", "VectorParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ParameterValue_MetaData, ARRAY_COUNT(NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "VectorParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FVectorParameterValue, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VectorParameterValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVectorParameterValue),
				alignof(FVectorParameterValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorParameterValue_CRC() { return 4263055892U; }
class UScriptStruct* FTextureParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureParameterValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("TextureParameterValue"), sizeof(FTextureParameterValue), Get_Z_Construct_UScriptStruct_FTextureParameterValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureParameterValue(FTextureParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextureParameterValue")),new UScriptStruct::TCppStructOps<FTextureParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureParameterValue;
	UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureParameterValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureParameterValue"), sizeof(FTextureParameterValue), Get_Z_Construct_UScriptStruct_FTextureParameterValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Editable texture parameter." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureParameterValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
				{ "Category", "TextureParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Object, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_ParameterValue_MetaData, ARRAY_COUNT(NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "TextureParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTextureParameterValue, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TextureParameterValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTextureParameterValue),
				alignof(FTextureParameterValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureParameterValue_CRC() { return 3150291759U; }
class UScriptStruct* FScalarParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterValue"), sizeof(FScalarParameterValue), Get_Z_Construct_UScriptStruct_FScalarParameterValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterValue(FScalarParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("ScalarParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFScalarParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFScalarParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterValue")),new UScriptStruct::TCppStructOps<FScalarParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFScalarParameterValue;
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterValue"), sizeof(FScalarParameterValue), Get_Z_Construct_UScriptStruct_FScalarParameterValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Editable scalar parameter." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FScalarParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
				{ "Category", "ScalarParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Float, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScalarParameterValue, ParameterValue), METADATA_PARAMS(NewProp_ParameterValue_MetaData, ARRAY_COUNT(NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "ScalarParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FScalarParameterValue, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ScalarParameterValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FScalarParameterValue),
				alignof(FScalarParameterValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterValue_CRC() { return 1784220746U; }
class UScriptStruct* FFontParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFontParameterValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("FontParameterValue"), sizeof(FFontParameterValue), Get_Z_Construct_UScriptStruct_FFontParameterValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontParameterValue(FFontParameterValue::StaticStruct, TEXT("/Script/Engine"), TEXT("FontParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFontParameterValue
{
	FScriptStruct_Engine_StaticRegisterNativesFFontParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontParameterValue")),new UScriptStruct::TCppStructOps<FFontParameterValue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFontParameterValue;
	UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontParameterValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontParameterValue"), sizeof(FFontParameterValue), Get_Z_Construct_UScriptStruct_FFontParameterValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Editable font parameter." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontParameterValue>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFontParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[] = {
				{ "Category", "FontParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontPage = { UE4CodeGen_Private::EPropertyClass::Int, "FontPage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFontParameterValue, FontPage), METADATA_PARAMS(NewProp_FontPage_MetaData, ARRAY_COUNT(NewProp_FontPage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[] = {
				{ "Category", "FontParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontValue = { UE4CodeGen_Private::EPropertyClass::Object, "FontValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFontParameterValue, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(NewProp_FontValue_MetaData, ARRAY_COUNT(NewProp_FontValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "FontParameterValue" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFontParameterValue, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontPage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FontParameterValue",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFontParameterValue),
				alignof(FFontParameterValue),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontParameterValue_CRC() { return 4292162423U; }
	void UMaterialInstance::StaticRegisterNativesUMaterialInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialInstance_NoRegister()
	{
		return UMaterialInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Materials/MaterialInstance.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids = { UE4CodeGen_Private::EPropertyClass::Array, "ReferencedTextureGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, ReferencedTextureGuids), METADATA_PARAMS(NewProp_ReferencedTextureGuids_MetaData, ARRAY_COUNT(NewProp_ReferencedTextureGuids_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReferencedTextureGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePropertyOverrides_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePropertyOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePropertyOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, BasePropertyOverrides), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, METADATA_PARAMS(NewProp_BasePropertyOverrides_MetaData, ARRAY_COUNT(NewProp_BasePropertyOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideBaseProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
			};
#endif
			auto NewProp_bOverrideBaseProperties_SetBit = [](void* Obj){ ((UMaterialInstance*)Obj)->bOverrideBaseProperties_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideBaseProperties = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideBaseProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterialInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideBaseProperties_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideBaseProperties_MetaData, ARRAY_COUNT(NewProp_bOverrideBaseProperties_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Vector parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "VectorParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, VectorParameterValues), METADATA_PARAMS(NewProp_VectorParameterValues_MetaData, ARRAY_COUNT(NewProp_VectorParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Texture parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "TextureParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, TextureParameterValues), METADATA_PARAMS(NewProp_TextureParameterValues_MetaData, ARRAY_COUNT(NewProp_TextureParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Scalar parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "ScalarParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, ScalarParameterValues), METADATA_PARAMS(NewProp_ScalarParameterValues_MetaData, ARRAY_COUNT(NewProp_ScalarParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ScalarParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Font parameters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues = { UE4CodeGen_Private::EPropertyClass::Array, "FontParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, FontParameterValues), METADATA_PARAMS(NewProp_FontParameterValues_MetaData, ARRAY_COUNT(NewProp_FontParameterValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FontParameterValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubsurfaceProfile_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Defines if SubsurfaceProfile from this instance is used or it uses the parent one." },
			};
#endif
			auto NewProp_bOverrideSubsurfaceProfile_SetBit = [](void* Obj){ ((UMaterialInstance*)Obj)->bOverrideSubsurfaceProfile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubsurfaceProfile = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideSubsurfaceProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideSubsurfaceProfile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideSubsurfaceProfile_MetaData, ARRAY_COUNT(NewProp_bOverrideSubsurfaceProfile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStaticPermutationResource_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Indicates whether the instance has static permutation resources (which are required when static parameters are present)\nRead directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\nWhen true, StaticPermutationMaterialResources will always be valid and non-null." },
			};
#endif
			auto NewProp_bHasStaticPermutationResource_SetBit = [](void* Obj){ ((UMaterialInstance*)Obj)->bHasStaticPermutationResource = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStaticPermutationResource = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStaticPermutationResource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasStaticPermutationResource_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasStaticPermutationResource_MetaData, ARRAY_COUNT(NewProp_bHasStaticPermutationResource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Parent material." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
				{ "Category", "MaterialInstance" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
				{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialInstance, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(NewProp_PhysMaterial_MetaData, ARRAY_COUNT(NewProp_PhysMaterial_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencedTextureGuids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencedTextureGuids_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePropertyOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideBaseProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalarParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontParameterValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontParameterValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideSubsurfaceProfile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasStaticPermutationResource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysMaterial,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
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
	IMPLEMENT_CLASS(UMaterialInstance, 2796696317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstance(Z_Construct_UClass_UMaterialInstance, &UMaterialInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
