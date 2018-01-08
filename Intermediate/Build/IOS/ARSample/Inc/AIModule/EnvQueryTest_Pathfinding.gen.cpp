// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Pathfinding() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPathfinding();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	static UEnum* EEnvTestPathfinding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPathfinding, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestPathfinding"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestPathfinding(EEnvTestPathfinding_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestPathfinding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestPathfinding_CRC() { return 2510490706U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestPathfinding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestPathfinding"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestPathfinding_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestPathfinding::PathExist", (int64)EEnvTestPathfinding::PathExist },
				{ "EEnvTestPathfinding::PathCost", (int64)EEnvTestPathfinding::PathCost },
				{ "EEnvTestPathfinding::PathLength", (int64)EEnvTestPathfinding::PathLength },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestPathfinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestPathfinding::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryTest_Pathfinding::StaticRegisterNativesUEnvQueryTest_Pathfinding()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding_NoRegister()
	{
		return UEnvQueryTest_Pathfinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
				{ "ToolTip", "navigation filter to use in pathfinding" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FilterClass_MetaData, ARRAY_COUNT(NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipUnreachable_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
				{ "ToolTip", "if set, items with failed path will be invalidated (PathCost, PathLength)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkipUnreachable = { UE4CodeGen_Private::EPropertyClass::Struct, "SkipUnreachable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010048000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, SkipUnreachable), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(NewProp_SkipUnreachable_MetaData, ARRAY_COUNT(NewProp_SkipUnreachable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFromContext_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
				{ "ToolTip", "pathfinding direction" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathFromContext = { UE4CodeGen_Private::EPropertyClass::Struct, "PathFromContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, PathFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(NewProp_PathFromContext_MetaData, ARRAY_COUNT(NewProp_PathFromContext_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
				{ "ToolTip", "context: other end of pathfinding test" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Class, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Context_MetaData, ARRAY_COUNT(NewProp_Context_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
				{ "Category", "Pathfinding" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h" },
				{ "ToolTip", "testing mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TestMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Pathfinding, TestMode), Z_Construct_UEnum_AIModule_EEnvTestPathfinding, METADATA_PARAMS(NewProp_TestMode_MetaData, ARRAY_COUNT(NewProp_TestMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkipUnreachable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathFromContext,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_Pathfinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_Pathfinding::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UEnvQueryTest_Pathfinding, 2636636780);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Pathfinding(Z_Construct_UClass_UEnvQueryTest_Pathfinding, &UEnvQueryTest_Pathfinding::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Pathfinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Pathfinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
