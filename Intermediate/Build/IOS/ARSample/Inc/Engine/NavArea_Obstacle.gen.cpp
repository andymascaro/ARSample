// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Obstacle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_Obstacle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_Obstacle();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavArea_Obstacle::StaticRegisterNativesUNavArea_Obstacle()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Obstacle_NoRegister()
	{
		return UNavArea_Obstacle::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavArea_Obstacle()
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
				{ "IncludePath", "AI/Navigation/NavAreas/NavArea_Obstacle.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h" },
				{ "ToolTip", "In general represents a high cost area, that shouldn't be traversed by anyone unless no other path exist." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavArea_Obstacle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavArea_Obstacle::StaticClass,
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
	IMPLEMENT_CLASS(UNavArea_Obstacle, 522367364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Obstacle(Z_Construct_UClass_UNavArea_Obstacle, &UNavArea_Obstacle::StaticClass, TEXT("/Script/Engine"), TEXT("UNavArea_Obstacle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Obstacle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
