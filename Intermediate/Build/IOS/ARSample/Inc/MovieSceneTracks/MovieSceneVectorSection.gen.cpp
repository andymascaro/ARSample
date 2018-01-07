// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneVectorSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVectorSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneVectorSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneVector4KeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector4KeyStruct"), sizeof(FMovieSceneVector4KeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVector4KeyStruct(FMovieSceneVector4KeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVector4KeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector4KeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector4KeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVector4KeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneVector4KeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector4KeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVector4KeyStruct"), sizeof(FMovieSceneVector4KeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "Proxy structure for vector4 section key data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector4KeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "They key's vector value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneVector4KeyStruct, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_Vector_MetaData, ARRAY_COUNT(NewProp_Vector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneVector4KeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneVector4KeyStruct),
				alignof(FMovieSceneVector4KeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC() { return 1455161552U; }
class UScriptStruct* FMovieSceneVectorKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVectorKeyStruct"), sizeof(FMovieSceneVectorKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVectorKeyStruct(FMovieSceneVectorKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVectorKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVectorKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVectorKeyStruct"), sizeof(FMovieSceneVectorKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "Proxy structure for vector section key data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "They key's vector value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneVectorKeyStruct, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Vector_MetaData, ARRAY_COUNT(NewProp_Vector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneVectorKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneVectorKeyStruct),
				alignof(FMovieSceneVectorKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC() { return 887387272U; }
class UScriptStruct* FMovieSceneVector2DKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVector2DKeyStruct"), sizeof(FMovieSceneVector2DKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVector2DKeyStruct(FMovieSceneVector2DKeyStruct::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVector2DKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector2DKeyStruct
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector2DKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVector2DKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneVector2DKeyStruct>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVector2DKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVector2DKeyStruct"), sizeof(FMovieSceneVector2DKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "Proxy structure for 2D vector section key data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVector2DKeyStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "They key's vector value." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneVector2DKeyStruct, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Vector_MetaData, ARRAY_COUNT(NewProp_Vector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneVector2DKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneVector2DKeyStruct),
				alignof(FMovieSceneVector2DKeyStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC() { return 2385521865U; }
class UScriptStruct* FMovieSceneVectorKeyStructBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVectorKeyStructBase"), sizeof(FMovieSceneVectorKeyStructBase), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVectorKeyStructBase(FMovieSceneVectorKeyStructBase::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVectorKeyStructBase"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStructBase
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStructBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVectorKeyStructBase")),new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStructBase>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorKeyStructBase;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVectorKeyStructBase"), sizeof(FMovieSceneVectorKeyStructBase), Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "Base Proxy structure for vector section key data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVectorKeyStructBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Key" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "The key's time." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneVectorKeyStructBase, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneVectorKeyStructBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneVectorKeyStructBase),
				alignof(FMovieSceneVectorKeyStructBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC() { return 2978365318U; }
	void UMovieSceneVectorSection::StaticRegisterNativesUMovieSceneVectorSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneVectorSection_NoRegister()
	{
		return UMovieSceneVectorSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneVectorSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneVectorSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "A vector section." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "How many curves are actually used" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed = { UE4CodeGen_Private::EPropertyClass::Int, "ChannelsUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneVectorSection, ChannelsUsed), METADATA_PARAMS(NewProp_ChannelsUsed_MetaData, ARRAY_COUNT(NewProp_ChannelsUsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneVectorSection.h" },
				{ "ToolTip", "Vector t" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Struct, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, CPP_ARRAY_DIM(Curves, UMovieSceneVectorSection), nullptr, STRUCT_OFFSET(UMovieSceneVectorSection, Curves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_Curves_MetaData, ARRAY_COUNT(NewProp_Curves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelsUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneVectorSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneVectorSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneVectorSection, 2249834508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneVectorSection(Z_Construct_UClass_UMovieSceneVectorSection, &UMovieSceneVectorSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneVectorSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneVectorSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
