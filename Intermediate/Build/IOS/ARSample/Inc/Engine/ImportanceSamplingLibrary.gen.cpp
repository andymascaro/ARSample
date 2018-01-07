// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/ImportanceSamplingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportanceSamplingLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceWeight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat();
// End Cross Module References
	static UEnum* EImportanceWeight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceWeight, Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceWeight"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportanceWeight(EImportanceWeight_StaticEnum, TEXT("/Script/Engine"), TEXT("EImportanceWeight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EImportanceWeight_CRC() { return 1271256693U; }
	UEnum* Z_Construct_UEnum_Engine_EImportanceWeight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportanceWeight"), 0, Get_Z_Construct_UEnum_Engine_EImportanceWeight_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImportanceWeight::Luminance", (int64)EImportanceWeight::Luminance },
				{ "EImportanceWeight::Red", (int64)EImportanceWeight::Red },
				{ "EImportanceWeight::Green", (int64)EImportanceWeight::Green },
				{ "EImportanceWeight::Blue", (int64)EImportanceWeight::Blue },
				{ "EImportanceWeight::Alpha", (int64)EImportanceWeight::Alpha },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.ToolTip", "Importance from alpha channel of texture." },
				{ "Blue.ToolTip", "Importance from blue channel of texture." },
				{ "BlueprintType", "true" },
				{ "Green.ToolTip", "Importance from green channel of texture." },
				{ "Luminance.ToolTip", "Importance from color luminance." },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "Red.ToolTip", "Importance from red channel of texture." },
				{ "ToolTip", "Provides different weighting functions for texture importance sampling" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EImportanceWeight",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EImportanceWeight::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FImportanceTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportanceTexture, Z_Construct_UPackage__Script_Engine(), TEXT("ImportanceTexture"), sizeof(FImportanceTexture), Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportanceTexture(FImportanceTexture::StaticStruct, TEXT("/Script/Engine"), TEXT("ImportanceTexture"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFImportanceTexture
{
	FScriptStruct_Engine_StaticRegisterNativesFImportanceTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImportanceTexture")),new UScriptStruct::TCppStructOps<FImportanceTexture>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFImportanceTexture;
	UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportanceTexture"), sizeof(FImportanceTexture), Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasNativeBreak", "Engine.ImportanceLibrary.BreakImportanceTexture" },
				{ "HasNativeMake", "Engine.ImportanceLibrary.MakeImportanceTexture" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "Texture processed for importance sampling\nHolds marginal PDF of the rows, as well as the PDF of each row" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportanceTexture>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weighting_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "Original importance weight for Break function" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weighting = { UE4CodeGen_Private::EPropertyClass::Byte, "Weighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, Weighting), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(NewProp_Weighting_MetaData, ARRAY_COUNT(NewProp_Weighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "Original texture object for Break function" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "packed copy of MIP level data for filtered sampling (capped to 1024x1024)\nlocal copy seems better than allocating and copying the same data temporarily for each sample" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureData = { UE4CodeGen_Private::EPropertyClass::Array, "TextureData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, TextureData), METADATA_PARAMS(NewProp_TextureData_MetaData, ARRAY_COUNT(NewProp_TextureData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalCDF_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "Unnormalized cumulative probability of each pixel in a row (Size.Y row CDFs of Size.X+1)\nFirst entry of each row is zero, final entry in each row is the CDF normalization factor for that row" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConditionalCDF = { UE4CodeGen_Private::EPropertyClass::Array, "ConditionalCDF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, ConditionalCDF), METADATA_PARAMS(NewProp_ConditionalCDF_MetaData, ARRAY_COUNT(NewProp_ConditionalCDF_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConditionalCDF_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ConditionalCDF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarginalCDF_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "Unnormalized cumulative density of the image by rows (Size.Y+1)\nFirst entry is zero, final entry is the CDF normalization factor" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MarginalCDF = { UE4CodeGen_Private::EPropertyClass::Array, "MarginalCDF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, MarginalCDF), METADATA_PARAMS(NewProp_MarginalCDF_MetaData, ARRAY_COUNT(NewProp_MarginalCDF_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarginalCDF_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "MarginalCDF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "active number of MIP levels" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumMips = { UE4CodeGen_Private::EPropertyClass::Int, "NumMips", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, NumMips), METADATA_PARAMS(NewProp_NumMips_MetaData, ARRAY_COUNT(NewProp_NumMips_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "active texture dimensions, capped to 1024 x 1024" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImportanceTexture, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalCDF,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalCDF_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarginalCDF,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarginalCDF_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumMips,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ImportanceTexture",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FImportanceTexture),
				alignof(FImportanceTexture),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC() { return 3926361940U; }
	void UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary()
	{
		UClass* Class = UImportanceSamplingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakImportanceTexture", (Native)&UImportanceSamplingLibrary::execBreakImportanceTexture },
			{ "ImportanceSample", (Native)&UImportanceSamplingLibrary::execImportanceSample },
			{ "MakeImportanceTexture", (Native)&UImportanceSamplingLibrary::execMakeImportanceTexture },
			{ "NextSobolCell2D", (Native)&UImportanceSamplingLibrary::execNextSobolCell2D },
			{ "NextSobolCell3D", (Native)&UImportanceSamplingLibrary::execNextSobolCell3D },
			{ "NextSobolFloat", (Native)&UImportanceSamplingLibrary::execNextSobolFloat },
			{ "RandomSobolCell2D", (Native)&UImportanceSamplingLibrary::execRandomSobolCell2D },
			{ "RandomSobolCell3D", (Native)&UImportanceSamplingLibrary::execRandomSobolCell3D },
			{ "RandomSobolFloat", (Native)&UImportanceSamplingLibrary::execRandomSobolFloat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture()
	{
		struct ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms
		{
			FImportanceTexture ImportanceTexture;
			UTexture2D* Texture;
			TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightingFunc = { UE4CodeGen_Private::EPropertyClass::Byte, "WeightingFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportanceTexture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportanceTexture = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportanceTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, ImportanceTexture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(NewProp_ImportanceTexture_MetaData, ARRAY_COUNT(NewProp_ImportanceTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightingFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportanceTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Get texture used to create an ImportanceTexture object\n@param ImportanceTexture - The source ImportanceTexture object\n@outparam Texture - Texture object for this ImportanceTexture.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "BreakImportanceTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422403, sizeof(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample()
	{
		struct ImportanceSamplingLibrary_eventImportanceSample_Parms
		{
			FImportanceTexture Texture;
			FVector2D Rand;
			int32 Samples;
			float Intensity;
			FVector2D SamplePosition;
			FLinearColor SampleColor;
			float SampleIntensity;
			float SampleSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleSize = { UE4CodeGen_Private::EPropertyClass::Float, "SampleSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "SampleIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SampleColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SamplePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "SamplePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SamplePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Samples = { UE4CodeGen_Private::EPropertyClass::Int, "Samples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Samples), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rand_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rand = { UE4CodeGen_Private::EPropertyClass::Struct, "Rand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Rand), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Rand_MetaData, ARRAY_COUNT(NewProp_Rand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Struct, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Texture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Intensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Samples,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "Distribute sample points proportional to Texture2D luminance.\n@param Rand - Random 2D point with components evenly distributed between 0 and 1\n@param Samples - Total number of samples that will be used\n@param Intensity - Total intensity for light\n@outparam SamplePosition - Importance sampled 2D output texture coordinate (0-1)\n@outparam SampleColor - Representative color near Position from MIP level for SampleSize\n@outparam SampleIntensity - Intensity of individual points, scaled by probability and number of samples\n@outparam SampleSize - Local density of points near Position (scaled for 1x1 texture space)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "ImportanceSample", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22403, sizeof(ImportanceSamplingLibrary_eventImportanceSample_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture()
	{
		struct ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms
		{
			UTexture2D* Texture;
			TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
			FImportanceTexture ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightingFunc = { UE4CodeGen_Private::EPropertyClass::Byte, "WeightingFunc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeightingFunc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "NativeMakeFunc", "" },
				{ "ToolTip", "Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture\n@param Texture - Texture object to use. Must be RGBA8 format.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "MakeImportanceTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022403, sizeof(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D()
	{
		struct ImportanceSamplingLibrary_eventNextSobolCell2D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector2D PreviousValue;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousValue = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells = { UE4CodeGen_Private::EPropertyClass::Int, "NumCells", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCells,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "CPP_Default_NumCells", "1" },
				{ "CPP_Default_PreviousValue", "(X=0.000,Y=0.000)" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 2D position in the same grid cell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "NextSobolCell2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822403, sizeof(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D()
	{
		struct ImportanceSamplingLibrary_eventNextSobolCell3D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector PreviousValue;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousValue = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells = { UE4CodeGen_Private::EPropertyClass::Int, "NumCells", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCells,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "CPP_Default_NumCells", "1" },
				{ "CPP_Default_PreviousValue", "0.000000,0.000000,0.000000" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 3D position in the same grid cell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "NextSobolCell3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822403, sizeof(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat()
	{
		struct ImportanceSamplingLibrary_eventNextSobolFloat_Parms
		{
			int32 Index;
			int32 Dimension;
			float PreviousValue;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousValue = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, PreviousValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dimension = { UE4CodeGen_Private::EPropertyClass::Int, "Dimension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Dimension), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dimension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random number between 0 and 1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "NextSobolFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022403, sizeof(ImportanceSamplingLibrary_eventNextSobolFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D()
	{
		struct ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector2D Cell;
			FVector2D Seed;
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed = { UE4CodeGen_Private::EPropertyClass::Struct, "Seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Seed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cell = { UE4CodeGen_Private::EPropertyClass::Struct, "Cell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells = { UE4CodeGen_Private::EPropertyClass::Int, "NumCells", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cell,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCells,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "CPP_Default_Cell", "(X=0.000,Y=0.000)" },
				{ "CPP_Default_NumCells", "1" },
				{ "CPP_Default_Seed", "(X=0.000,Y=0.000)" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 2D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 2D position in the given grid cell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "RandomSobolCell2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822403, sizeof(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D()
	{
		struct ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector Cell;
			FVector Seed;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed = { UE4CodeGen_Private::EPropertyClass::Struct, "Seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Seed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cell = { UE4CodeGen_Private::EPropertyClass::Struct, "Cell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Cell), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells = { UE4CodeGen_Private::EPropertyClass::Int, "NumCells", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cell,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumCells,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "CPP_Default_Cell", "0.000000,0.000000,0.000000" },
				{ "CPP_Default_NumCells", "1" },
				{ "CPP_Default_Seed", "0.000000,0.000000,0.000000" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 3D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 3D vector in the given grid cell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "RandomSobolCell3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822403, sizeof(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat()
	{
		struct ImportanceSamplingLibrary_eventRandomSobolFloat_Parms
		{
			int32 Index;
			int32 Dimension;
			float Seed;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seed = { UE4CodeGen_Private::EPropertyClass::Float, "Seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dimension = { UE4CodeGen_Private::EPropertyClass::Int, "Dimension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Dimension), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dimension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Math|Random" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param Seed - Random seed (in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random number between 0 and 1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, "RandomSobolFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022403, sizeof(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister()
	{
		return UImportanceSamplingLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UImportanceSamplingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture, "BreakImportanceTexture" }, // 70660141
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample, "ImportanceSample" }, // 1925071107
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture, "MakeImportanceTexture" }, // 3169589370
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D, "NextSobolCell2D" }, // 1844208251
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D, "NextSobolCell3D" }, // 4034109263
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat, "NextSobolFloat" }, // 2862060217
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D, "RandomSobolCell2D" }, // 3366123665
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D, "RandomSobolCell3D" }, // 869062961
				{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat, "RandomSobolFloat" }, // 1813405999
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/ImportanceSamplingLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UImportanceSamplingLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UImportanceSamplingLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportanceSamplingLibrary, 1556478320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportanceSamplingLibrary(Z_Construct_UClass_UImportanceSamplingLibrary, &UImportanceSamplingLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UImportanceSamplingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportanceSamplingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
