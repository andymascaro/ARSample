// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavAreas/NavArea_Null.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Null() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_Null_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_Null();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavArea_Null::StaticRegisterNativesUNavArea_Null()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Null_NoRegister()
	{
		return UNavArea_Null::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavArea_Null()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavArea,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavAreas/NavArea_Null.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea_Null.h" },
				{ "ToolTip", "In general represents an empty area, that cannot be traversed by anyone. Ever." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavArea_Null>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavArea_Null::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300084u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_Null, 1520792591);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Null(Z_Construct_UClass_UNavArea_Null, &UNavArea_Null::StaticClass, TEXT("/Script/Engine"), TEXT("UNavArea_Null"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Null);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
