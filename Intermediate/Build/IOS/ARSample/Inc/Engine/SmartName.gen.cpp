// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/SmartName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartName() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType();
// End Cross Module References
class UScriptStruct* FSmartName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSmartName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartName, Z_Construct_UPackage__Script_Engine(), TEXT("SmartName"), sizeof(FSmartName), Get_Z_Construct_UScriptStruct_FSmartName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartName(FSmartName::StaticStruct, TEXT("/Script/Engine"), TEXT("SmartName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSmartName
{
	FScriptStruct_Engine_StaticRegisterNativesFSmartName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartName")),new UScriptStruct::TCppStructOps<FSmartName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSmartName;
	UScriptStruct* Z_Construct_UScriptStruct_FSmartName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartName"), sizeof(FSmartName), Get_Z_Construct_UScriptStruct_FSmartName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "FSmartName" },
				{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
				{ "ToolTip", "name" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Name, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FSmartName, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SmartName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSmartName),
				alignof(FSmartName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartName_CRC() { return 28611858U; }
class UScriptStruct* FSmartNameContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameContainer, Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameContainer"), sizeof(FSmartNameContainer), Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartNameContainer(FSmartNameContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("SmartNameContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSmartNameContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFSmartNameContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartNameContainer")),new UScriptStruct::TCppStructOps<FSmartNameContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSmartNameContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartNameContainer"), sizeof(FSmartNameContainer), Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameContainer>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SmartNameContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSmartNameContainer),
				alignof(FSmartNameContainer),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC() { return 3667901911U; }
class UScriptStruct* FSmartNameMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameMapping, Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameMapping"), sizeof(FSmartNameMapping), Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartNameMapping(FSmartNameMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("SmartNameMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSmartNameMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFSmartNameMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartNameMapping")),new UScriptStruct::TCppStructOps<FSmartNameMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSmartNameMapping;
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartNameMapping"), sizeof(FSmartNameMapping), Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameMapping>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SmartNameMapping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSmartNameMapping),
				alignof(FSmartNameMapping),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC() { return 2286682915U; }
class UScriptStruct* FCurveMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveMetaData, Z_Construct_UPackage__Script_Engine(), TEXT("CurveMetaData"), sizeof(FCurveMetaData), Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveMetaData(FCurveMetaData::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveMetaData
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveMetaData")),new UScriptStruct::TCppStructOps<FCurveMetaData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveMetaData;
	UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveMetaData"), sizeof(FCurveMetaData), Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
				{ "ToolTip", "Curve Meta Data for each name\nUnfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\nWe only add this if anything changed, by default, it is attribute curve" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveMetaData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CurveMetaData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCurveMetaData),
				alignof(FCurveMetaData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC() { return 2906928344U; }
class UScriptStruct* FAnimCurveType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveType, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveType"), sizeof(FAnimCurveType), Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveType(FAnimCurveType::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveType
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimCurveType")),new UScriptStruct::TCppStructOps<FAnimCurveType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveType;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveType"), sizeof(FAnimCurveType), Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
				{ "ToolTip", "in the future if we need more bools, please convert to bitfield\nThese are not saved in asset but per skeleton." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveType>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimCurveType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimCurveType),
				alignof(FAnimCurveType),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC() { return 498637307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
