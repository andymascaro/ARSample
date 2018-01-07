// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavAreas/NavArea_LowHeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_LowHeight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_LowHeight();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavArea_LowHeight::StaticRegisterNativesUNavArea_LowHeight()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister()
	{
		return UNavArea_LowHeight::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavArea_LowHeight()
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
				{ "IncludePath", "AI/Navigation/NavAreas/NavArea_LowHeight.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea_LowHeight.h" },
				{ "ToolTip", "Special area that can be generated in spaces with insufficient free height above. Cannot be traversed by anyone." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavArea_LowHeight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavArea_LowHeight::StaticClass,
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
	IMPLEMENT_CLASS(UNavArea_LowHeight, 315668636);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_LowHeight(Z_Construct_UClass_UNavArea_LowHeight, &UNavArea_LowHeight::StaticClass, TEXT("/Script/Engine"), TEXT("UNavArea_LowHeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_LowHeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
