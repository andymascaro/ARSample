// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/Blending/MovieSceneBlendType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBlendType() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType();
// End Cross Module References
	static UEnum* EMovieSceneBlendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBlendType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneBlendType(EMovieSceneBlendType_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneBlendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_CRC() { return 3510764775U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneBlendType"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneBlendType::Absolute", (int64)EMovieSceneBlendType::Absolute },
				{ "EMovieSceneBlendType::Additive", (int64)EMovieSceneBlendType::Additive },
				{ "EMovieSceneBlendType::Relative", (int64)EMovieSceneBlendType::Relative },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.ToolTip", "Blends all other weighted values together as an average of the total weight" },
				{ "Additive.ToolTip", "Applies this value as a sum total of all other additives" },
				{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
				{ "Relative.ToolTip", "Applies this value as a sum total of all other additives and the initial value before the animation" },
				{ "ToolTip", "Movie scene blend type enumeration" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieSceneBlendType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovieSceneBlendType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOptionalMovieSceneBlendType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, Z_Construct_UPackage__Script_MovieScene(), TEXT("OptionalMovieSceneBlendType"), sizeof(FOptionalMovieSceneBlendType), Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOptionalMovieSceneBlendType(FOptionalMovieSceneBlendType::StaticStruct, TEXT("/Script/MovieScene"), TEXT("OptionalMovieSceneBlendType"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFOptionalMovieSceneBlendType
{
	FScriptStruct_MovieScene_StaticRegisterNativesFOptionalMovieSceneBlendType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OptionalMovieSceneBlendType")),new UScriptStruct::TCppStructOps<FOptionalMovieSceneBlendType>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFOptionalMovieSceneBlendType;
	UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OptionalMovieSceneBlendType"), sizeof(FOptionalMovieSceneBlendType), Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
				{ "ToolTip", "Optional blend type structure" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalMovieSceneBlendType>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
				{ "ToolTip", "Boolean indicating whether BlendType is valid" },
			};
#endif
			auto NewProp_bIsValid_SetBit = [](void* Obj){ ((FOptionalMovieSceneBlendType*)Obj)->bIsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FOptionalMovieSceneBlendType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsValid_MetaData, ARRAY_COUNT(NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
				{ "ToolTip", "The actual blend type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FOptionalMovieSceneBlendType, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsValid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"OptionalMovieSceneBlendType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FOptionalMovieSceneBlendType),
				alignof(FOptionalMovieSceneBlendType),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_CRC() { return 3290542020U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
