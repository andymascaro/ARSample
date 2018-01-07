// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeGrassOutput() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassInput();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
// End Cross Module References
class UScriptStruct* FGrassInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FGrassInput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassInput, Z_Construct_UPackage__Script_Landscape(), TEXT("GrassInput"), sizeof(FGrassInput), Get_Z_Construct_UScriptStruct_FGrassInput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGrassInput(FGrassInput::StaticStruct, TEXT("/Script/Landscape"), TEXT("GrassInput"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFGrassInput
{
	FScriptStruct_Landscape_StaticRegisterNativesFGrassInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GrassInput")),new UScriptStruct::TCppStructOps<FGrassInput>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFGrassInput;
	UScriptStruct* Z_Construct_UScriptStruct_FGrassInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGrassInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GrassInput"), sizeof(FGrassInput), Get_Z_Construct_UScriptStruct_FGrassInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassInput>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
				{ "RequiredInput", "true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGrassInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassType_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrassType = { UE4CodeGen_Private::EPropertyClass::Object, "GrassType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassInput, GrassType), Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(NewProp_GrassType_MetaData, ARRAY_COUNT(NewProp_GrassType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassInput, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GrassInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGrassInput),
				alignof(FGrassInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGrassInput_CRC() { return 3618398834U; }
	void UMaterialExpressionLandscapeGrassOutput::StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister()
	{
		return UMaterialExpressionLandscapeGrassOutput::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionLandscapeGrassOutput.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[] = {
				{ "Category", "UMaterialExpressionLandscapeGrassOutput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrassTypes = { UE4CodeGen_Private::EPropertyClass::Array, "GrassTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeGrassOutput, GrassTypes), METADATA_PARAMS(NewProp_GrassTypes_MetaData, ARRAY_COUNT(NewProp_GrassTypes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrassTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GrassTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGrassInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassTypes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLandscapeGrassOutput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLandscapeGrassOutput::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeGrassOutput, 1193951346);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeGrassOutput(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput, &UMaterialExpressionLandscapeGrassOutput::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeGrassOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeGrassOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
