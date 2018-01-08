// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_CurrentLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_CurrentLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void UEnvQueryGenerator_CurrentLocation::StaticRegisterNativesUEnvQueryGenerator_CurrentLocation()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation_NoRegister()
	{
		return UEnvQueryGenerator_CurrentLocation::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Current Location" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_CurrentLocation.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_CurrentLocation.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryContext_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_CurrentLocation.h" },
				{ "ToolTip", "context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_QueryContext = { UE4CodeGen_Private::EPropertyClass::Class, "QueryContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_CurrentLocation, QueryContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_QueryContext_MetaData, ARRAY_COUNT(NewProp_QueryContext_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryContext,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_CurrentLocation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_CurrentLocation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_CurrentLocation, 3156959511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_CurrentLocation(Z_Construct_UClass_UEnvQueryGenerator_CurrentLocation, &UEnvQueryGenerator_CurrentLocation::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_CurrentLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_CurrentLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
