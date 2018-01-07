// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat();
// End Cross Module References
class UScriptStruct* FComponentSpacePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePose, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSpacePose"), sizeof(FComponentSpacePose), Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentSpacePose(FComponentSpacePose::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentSpacePose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentSpacePose")),new UScriptStruct::TCppStructOps<FComponentSpacePose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentSpacePose;
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentSpacePose"), sizeof(FComponentSpacePose), Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
				{ "ToolTip", "A pose in component space (i.e. each transform is relative to the component's transform)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSpacePose>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
				{ "Category", "Names" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names = { UE4CodeGen_Private::EPropertyClass::Array, "Names", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComponentSpacePose, Names), METADATA_PARAMS(NewProp_Names_MetaData, ARRAY_COUNT(NewProp_Names_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Names", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
				{ "Category", "Transforms" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FComponentSpacePose, Transforms), METADATA_PARAMS(NewProp_Transforms_MetaData, ARRAY_COUNT(NewProp_Transforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Names,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Names_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ComponentSpacePose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FComponentSpacePose),
				alignof(FComponentSpacePose),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentSpacePose_CRC() { return 1436183514U; }
class UScriptStruct* FLocalSpacePose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSpacePose, Z_Construct_UPackage__Script_Engine(), TEXT("LocalSpacePose"), sizeof(FLocalSpacePose), Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalSpacePose(FLocalSpacePose::StaticStruct, TEXT("/Script/Engine"), TEXT("LocalSpacePose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose
{
	FScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalSpacePose")),new UScriptStruct::TCppStructOps<FLocalSpacePose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLocalSpacePose;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalSpacePose"), sizeof(FLocalSpacePose), Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
				{ "ToolTip", "A pose in local space (i.e. each transform is relative to its parent)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSpacePose>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
				{ "Category", "Names" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names = { UE4CodeGen_Private::EPropertyClass::Array, "Names", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLocalSpacePose, Names), METADATA_PARAMS(NewProp_Names_MetaData, ARRAY_COUNT(NewProp_Names_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Names_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Names", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
				{ "Category", "Transforms" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms = { UE4CodeGen_Private::EPropertyClass::Array, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLocalSpacePose, Transforms), METADATA_PARAMS(NewProp_Transforms_MetaData, ARRAY_COUNT(NewProp_Transforms_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transforms", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Names,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Names_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transforms_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LocalSpacePose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLocalSpacePose),
				alignof(FLocalSpacePose),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalSpacePose_CRC() { return 1047029618U; }
class UScriptStruct* FNamedTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedTransform, Z_Construct_UPackage__Script_Engine(), TEXT("NamedTransform"), sizeof(FNamedTransform), Get_Z_Construct_UScriptStruct_FNamedTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedTransform(FNamedTransform::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedTransform"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedTransform
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedTransform")),new UScriptStruct::TCppStructOps<FNamedTransform>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedTransform;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedTransform"), sizeof(FNamedTransform), Get_Z_Construct_UScriptStruct_FNamedTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
				{ "ToolTip", "A named transform" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedTransform>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Transform" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedTransform, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Transform" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedTransform",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNamedTransform),
				alignof(FNamedTransform),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedTransform_CRC() { return 873838854U; }
class UScriptStruct* FNamedColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedColor_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedColor, Z_Construct_UPackage__Script_Engine(), TEXT("NamedColor"), sizeof(FNamedColor), Get_Z_Construct_UScriptStruct_FNamedColor_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedColor(FNamedColor::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedColor"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedColor
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedColor")),new UScriptStruct::TCppStructOps<FNamedColor>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedColor;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedColor_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedColor"), sizeof(FNamedColor), Get_Z_Construct_UScriptStruct_FNamedColor_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
				{ "ToolTip", "A named color" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedColor>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedColor, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Color" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedColor, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedColor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNamedColor),
				alignof(FNamedColor),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedColor_CRC() { return 424613917U; }
class UScriptStruct* FNamedVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedVector_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedVector, Z_Construct_UPackage__Script_Engine(), TEXT("NamedVector"), sizeof(FNamedVector), Get_Z_Construct_UScriptStruct_FNamedVector_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedVector(FNamedVector::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedVector"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedVector
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedVector")),new UScriptStruct::TCppStructOps<FNamedVector>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedVector;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedVector_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedVector"), sizeof(FNamedVector), Get_Z_Construct_UScriptStruct_FNamedVector_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
				{ "ToolTip", "A named float" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedVector>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Vector" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedVector, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Vector" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedVector",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNamedVector),
				alignof(FNamedVector),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedVector_CRC() { return 247600161U; }
class UScriptStruct* FNamedFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedFloat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFloat, Z_Construct_UPackage__Script_Engine(), TEXT("NamedFloat"), sizeof(FNamedFloat), Get_Z_Construct_UScriptStruct_FNamedFloat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedFloat(FNamedFloat::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedFloat
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedFloat")),new UScriptStruct::TCppStructOps<FNamedFloat>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedFloat;
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedFloat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedFloat"), sizeof(FNamedFloat), Get_Z_Construct_UScriptStruct_FNamedFloat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
				{ "ToolTip", "A named float" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFloat>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Float" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedFloat, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Float" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNamedFloat, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NamedFloat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNamedFloat),
				alignof(FNamedFloat),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedFloat_CRC() { return 2161315375U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
