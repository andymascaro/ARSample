// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavAreas/NavArea_Default.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Default() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_Default_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_Default();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavArea_Default::StaticRegisterNativesUNavArea_Default()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Default_NoRegister()
	{
		return UNavArea_Default::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavArea_Default()
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
				{ "IncludePath", "AI/Navigation/NavAreas/NavArea_Default.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea_Default.h" },
				{ "ToolTip", "Regular navigation area, applied to entire navigation data by default" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavArea_Default>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavArea_Default::StaticClass,
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
	IMPLEMENT_CLASS(UNavArea_Default, 3417542300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Default(Z_Construct_UClass_UNavArea_Default, &UNavArea_Default::StaticClass, TEXT("/Script/Engine"), TEXT("UNavArea_Default"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Default);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
