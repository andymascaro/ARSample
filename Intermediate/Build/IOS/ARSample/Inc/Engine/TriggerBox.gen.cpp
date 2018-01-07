// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerBox::StaticRegisterNativesATriggerBox()
	{
	}
	UClass* Z_Construct_UClass_ATriggerBox_NoRegister()
	{
		return ATriggerBox::StaticClass();
	}
	UClass* Z_Construct_UClass_ATriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATriggerBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/TriggerBox.h" },
				{ "ModuleRelativePath", "Classes/Engine/TriggerBox.h" },
				{ "ToolTip", "A box shaped trigger, used to generate overlap events in the level" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATriggerBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATriggerBox::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerBox, 1122805215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBox(Z_Construct_UClass_ATriggerBox, &ATriggerBox::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
