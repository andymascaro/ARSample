// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DisableRootMotion() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotifyState_DisableRootMotion::StaticRegisterNativesUAnimNotifyState_DisableRootMotion()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister()
	{
		return UAnimNotifyState_DisableRootMotion::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Disable Root Motion" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotifyState_DisableRootMotion>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotifyState_DisableRootMotion::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00093080u,
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
	IMPLEMENT_CLASS(UAnimNotifyState_DisableRootMotion, 3607880272);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_DisableRootMotion(Z_Construct_UClass_UAnimNotifyState_DisableRootMotion, &UAnimNotifyState_DisableRootMotion::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState_DisableRootMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DisableRootMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
