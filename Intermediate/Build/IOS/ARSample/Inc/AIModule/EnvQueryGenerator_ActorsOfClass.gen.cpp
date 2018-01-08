// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ActorsOfClass() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEnvQueryGenerator_ActorsOfClass::StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister()
	{
		return UEnvQueryGenerator_ActorsOfClass::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass()
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
				{ "DisplayName", "Actors Of Class" },
				{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchCenter_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
				{ "ToolTip", "context" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SearchCenter = { UE4CodeGen_Private::EPropertyClass::Class, "SearchCenter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, SearchCenter), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SearchCenter_MetaData, ARRAY_COUNT(NewProp_SearchCenter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
				{ "ToolTip", "Max distance of path between point and context.  NOTE: Zero and negative values will never return any results if\nUseRadius is true.  \"Within\" requires Distance < Radius.  Actors ON the circle (Distance == Radius) are excluded." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, SearchRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_SearchRadius_MetaData, ARRAY_COUNT(NewProp_SearchRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateOnlyActorsInRadius_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
				{ "ToolTip", "If true, this will only returns actors of the specified class within the SearchRadius of the SearchCenter context.  If false, it will return ALL actors of the specified class in the world." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenerateOnlyActorsInRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "GenerateOnlyActorsInRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(NewProp_GenerateOnlyActorsInRadius_MetaData, ARRAY_COUNT(NewProp_GenerateOnlyActorsInRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchedActorClass_MetaData[] = {
				{ "Category", "Generator" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SearchedActorClass = { UE4CodeGen_Private::EPropertyClass::Class, "SearchedActorClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SearchedActorClass_MetaData, ARRAY_COUNT(NewProp_SearchedActorClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchCenter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GenerateOnlyActorsInRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchedActorClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryGenerator_ActorsOfClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryGenerator_ActorsOfClass::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UEnvQueryGenerator_ActorsOfClass, 4251929587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_ActorsOfClass(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass, &UEnvQueryGenerator_ActorsOfClass::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_ActorsOfClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ActorsOfClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
