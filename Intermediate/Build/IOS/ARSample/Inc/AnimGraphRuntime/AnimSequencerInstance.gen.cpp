// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimSequencerInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerInstance() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimCustomInstance();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	void UAnimSequencerInstance::StaticRegisterNativesUAnimSequencerInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister()
	{
		return UAnimSequencerInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimSequencerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCustomInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "AnimSequencerInstance.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Public/AnimSequencerInstance.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimSequencerInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimSequencerInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
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
	IMPLEMENT_CLASS(UAnimSequencerInstance, 1037439908);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequencerInstance(Z_Construct_UClass_UAnimSequencerInstance, &UAnimSequencerInstance::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UAnimSequencerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequencerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
