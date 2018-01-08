// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkDefinition() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLinkBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ENavLinkDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavLinkDirection, Z_Construct_UPackage__Script_Engine(), TEXT("ENavLinkDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavLinkDirection(ENavLinkDirection_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavLinkDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavLinkDirection_CRC() { return 1947165645U; }
	UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavLinkDirection"), 0, Get_Z_Construct_UEnum_Engine_ENavLinkDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavLinkDirection::BothWays", (int64)ENavLinkDirection::BothWays },
				{ "ENavLinkDirection::LeftToRight", (int64)ENavLinkDirection::LeftToRight },
				{ "ENavLinkDirection::RightToLeft", (int64)ENavLinkDirection::RightToLeft },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENavLinkDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENavLinkDirection::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNavigationSegmentLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationSegmentLink, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationSegmentLink"), sizeof(FNavigationSegmentLink), Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationSegmentLink(FNavigationSegmentLink::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationSegmentLink"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationSegmentLink
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationSegmentLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationSegmentLink")),new UScriptStruct::TCppStructOps<FNavigationSegmentLink>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationSegmentLink;
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationSegmentLink"), sizeof(FNavigationSegmentLink), Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationSegmentLink>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEnd_MetaData[] = {
				{ "Category", "Default" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "RightEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, RightEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RightEnd_MetaData, ARRAY_COUNT(NewProp_RightEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightStart_MetaData[] = {
				{ "Category", "Default" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightStart = { UE4CodeGen_Private::EPropertyClass::Struct, "RightStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, RightStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RightStart_MetaData, ARRAY_COUNT(NewProp_RightStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEnd_MetaData[] = {
				{ "Category", "Default" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, LeftEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LeftEnd_MetaData, ARRAY_COUNT(NewProp_LeftEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftStart_MetaData[] = {
				{ "Category", "Default" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftStart = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, LeftStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LeftStart_MetaData, ARRAY_COUNT(NewProp_LeftStart_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftStart,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FNavigationLinkBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavigationSegmentLink",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNavigationSegmentLink),
				alignof(FNavigationSegmentLink),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_CRC() { return 3282906071U; }
class UScriptStruct* FNavigationLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationLink_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLink, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationLink"), sizeof(FNavigationLink), Get_Z_Construct_UScriptStruct_FNavigationLink_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationLink(FNavigationLink::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationLink"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationLink
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationLink")),new UScriptStruct::TCppStructOps<FNavigationLink>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationLink;
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationLink_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationLink"), sizeof(FNavigationLink), Get_Z_Construct_UScriptStruct_FNavigationLink_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationLink>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
				{ "Category", "Default" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Struct, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLink, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Right_MetaData, ARRAY_COUNT(NewProp_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
				{ "Category", "Default" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Struct, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FNavigationLink, Left), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Left_MetaData, ARRAY_COUNT(NewProp_Left_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Left,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FNavigationLinkBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavigationLink",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNavigationLink),
				alignof(FNavigationLink),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationLink_CRC() { return 3722111984U; }
class UScriptStruct* FNavigationLinkBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationLinkBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLinkBase, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationLinkBase"), sizeof(FNavigationLinkBase), Get_Z_Construct_UScriptStruct_FNavigationLinkBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationLinkBase(FNavigationLinkBase::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationLinkBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationLinkBase
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationLinkBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationLinkBase")),new UScriptStruct::TCppStructOps<FNavigationLinkBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationLinkBase;
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationLinkBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationLinkBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationLinkBase"), sizeof(FNavigationLinkBase), Get_Z_Construct_UScriptStruct_FNavigationLinkBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationLinkBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "Area type of this link (empty = default)" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AreaClass_MetaData, ARRAY_COUNT(NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag7_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag7_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag7_MetaData, ARRAY_COUNT(NewProp_bCustomFlag7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag6_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag6_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag6 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag6 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag6_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag6_MetaData, ARRAY_COUNT(NewProp_bCustomFlag6_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag5_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag5_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag5 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag5 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag5_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag5_MetaData, ARRAY_COUNT(NewProp_bCustomFlag5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag4_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag4_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag4 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag4 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag4_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag4_MetaData, ARRAY_COUNT(NewProp_bCustomFlag4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag3_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag3_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag3 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag3_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag3_MetaData, ARRAY_COUNT(NewProp_bCustomFlag3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag2_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag2_MetaData, ARRAY_COUNT(NewProp_bCustomFlag2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag1_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag1 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag1_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag1_MetaData, ARRAY_COUNT(NewProp_bCustomFlag1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag0_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
			};
#endif
			auto NewProp_bCustomFlag0_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bCustomFlag0 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag0 = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomFlag0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomFlag0_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomFlag0_MetaData, ARRAY_COUNT(NewProp_bCustomFlag0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToCheapestArea_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "If set, link will try to snap to cheapest area in given radius" },
			};
#endif
			auto NewProp_bSnapToCheapestArea_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSnapToCheapestArea = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToCheapestArea = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToCheapestArea", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapToCheapestArea_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSnapToCheapestArea_MetaData, ARRAY_COUNT(NewProp_bSnapToCheapestArea_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSnapHeight_MetaData[] = {
				{ "Category", "Default" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "WITH_EDITORONLY_DATA" },
			};
#endif
			auto NewProp_bUseSnapHeight_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bUseSnapHeight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSnapHeight = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSnapHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSnapHeight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSnapHeight_MetaData, ARRAY_COUNT(NewProp_bUseSnapHeight_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "this is an editor-only property to put descriptions in navlinks setup, to be able to identify it easier" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent15_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent15_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent15 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent15 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent15", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent15_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent15_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent15_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent14_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent14_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent14 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent14 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent14", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent14_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent14_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent14_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent13_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent13_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent13 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent13 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent13", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent13_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent13_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent13_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent12_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent12_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent12 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent12 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent12", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent12_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent12_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent12_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent11_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent11_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent11 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent11 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent11", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent11_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent11_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent11_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent10_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent10_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent10 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent10 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent10", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent10_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent10_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent10_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent9_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent9_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent9 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent9 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent9", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent9_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent9_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent9_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent8_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent8_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent8 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent8 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent8", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent8_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent8_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent8_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent7_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent7_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent7_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent6_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent6_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent6 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent6 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent6", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent6_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent6_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent6_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent5_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent5_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent5 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent5 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent5_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent5_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent4_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent4_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent4 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent4 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent4_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent4_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent3_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent3_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent3 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent3_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent3_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent2_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent2_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			auto NewProp_bSupportsAgent1_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent1 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent1_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent1_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent0_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "DEPRECATED AGENT CONFIG" },
			};
#endif
			auto NewProp_bSupportsAgent0_SetBit = [](void* Obj){ ((FNavigationLinkBase*)Obj)->bSupportsAgent0 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent0 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsAgent0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FNavigationLinkBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsAgent0_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsAgent0_MetaData, ARRAY_COUNT(NewProp_bSupportsAgent0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "restrict area only to specified agents" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(NewProp_SupportedAgents_MetaData, ARRAY_COUNT(NewProp_SupportedAgents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapHeight_MetaData[] = {
				{ "Category", "Default" },
				{ "ClampMin", "1.0" },
				{ "EditCondition", "bUseSnapHeight" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapHeight = { UE4CodeGen_Private::EPropertyClass::Float, "SnapHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, SnapHeight), METADATA_PARAMS(NewProp_SnapHeight_MetaData, ARRAY_COUNT(NewProp_SnapHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapRadius_MetaData[] = {
				{ "Category", "Default" },
				{ "ClampMin", "1.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SnapRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, SnapRadius), METADATA_PARAMS(NewProp_SnapRadius_MetaData, ARRAY_COUNT(NewProp_SnapRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Byte, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, Direction), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(NewProp_Direction_MetaData, ARRAY_COUNT(NewProp_Direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFallDownLength_MetaData[] = {
				{ "Category", "Default" },
				{ "ClampMin", "0.0" },
				{ "DisplayName", "Right Project Height" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "if greater than 0 nav system will attempt to project navlink's end point on geometry below" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFallDownLength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFallDownLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, MaxFallDownLength), METADATA_PARAMS(NewProp_MaxFallDownLength_MetaData, ARRAY_COUNT(NewProp_MaxFallDownLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftProjectHeight_MetaData[] = {
				{ "Category", "Default" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "if greater than 0 nav system will attempt to project navlink's start point on geometry below" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftProjectHeight = { UE4CodeGen_Private::EPropertyClass::Float, "LeftProjectHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavigationLinkBase, LeftProjectHeight), METADATA_PARAMS(NewProp_LeftProjectHeight_MetaData, ARRAY_COUNT(NewProp_LeftProjectHeight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomFlag0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapToCheapestArea,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSnapHeight,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent15,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent14,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent13,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent12,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent11,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent10,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent9,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent8,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsAgent0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedAgents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFallDownLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftProjectHeight,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavigationLinkBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FNavigationLinkBase),
				alignof(FNavigationLinkBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationLinkBase_CRC() { return 4015131554U; }
	void UNavLinkDefinition::StaticRegisterNativesUNavLinkDefinition()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister()
	{
		return UNavLinkDefinition::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLinkDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AI/Navigation/NavLinkDefinition.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
				{ "ToolTip", "Class containing definition of a navigation area" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[] = {
				{ "Category", "OffMeshLinks" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkDefinition, SegmentLinks), METADATA_PARAMS(NewProp_SegmentLinks_MetaData, ARRAY_COUNT(NewProp_SegmentLinks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
				{ "Category", "OffMeshLinks" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links = { UE4CodeGen_Private::EPropertyClass::Array, "Links", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkDefinition, Links), METADATA_PARAMS(NewProp_Links_MetaData, ARRAY_COUNT(NewProp_Links_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Links_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Links", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentLinks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentLinks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Links,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Links_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavLinkDefinition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLinkDefinition::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkDefinition, 1387232143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkDefinition(Z_Construct_UClass_UNavLinkDefinition, &UNavLinkDefinition::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
