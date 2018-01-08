// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Distance() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDistance();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Distance();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	static UEnum* EEnvTestDistance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDistance, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDistance"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestDistance(EEnvTestDistance_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestDistance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestDistance_CRC() { return 3536866142U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestDistance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestDistance"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestDistance_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestDistance::Distance3D", (int64)EEnvTestDistance::Distance3D },
				{ "EEnvTestDistance::Distance2D", (int64)EEnvTestDistance::Distance2D },
				{ "EEnvTestDistance::DistanceZ", (int64)EEnvTestDistance::DistanceZ },
				{ "EEnvTestDistance::DistanceAbsoluteZ", (int64)EEnvTestDistance::DistanceAbsoluteZ },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DistanceAbsoluteZ.DisplayName", "Distance Z (Absolute)" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestDistance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEnvTestDistance::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryTest_Distance::StaticRegisterNativesUEnvQueryTest_Distance()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Distance_NoRegister()
	{
		return UEnvQueryTest_Distance::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Distance()
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
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTo_MetaData[] = {
				{ "Category", "Distance" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
				{ "ToolTip", "context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DistanceTo = { UE4CodeGen_Private::EPropertyClass::Class, "DistanceTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Distance, DistanceTo), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DistanceTo_MetaData, ARRAY_COUNT(NewProp_DistanceTo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
				{ "Category", "Distance" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Distance.h" },
				{ "ToolTip", "testing mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TestMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Distance, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDistance, METADATA_PARAMS(NewProp_TestMode_MetaData, ARRAY_COUNT(NewProp_TestMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_Distance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_Distance::StaticClass,
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
	IMPLEMENT_CLASS(UEnvQueryTest_Distance, 2423440262);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Distance(Z_Construct_UClass_UEnvQueryTest_Distance, &UEnvQueryTest_Distance::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Distance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Distance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
