// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Composites/BTComposite_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Sequence() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTComposite_Sequence::StaticRegisterNativesUBTComposite_Sequence()
	{
	}
	UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister()
	{
		return UBTComposite_Sequence::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTComposite_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Composites/BTComposite_Sequence.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_Sequence.h" },
				{ "ToolTip", "Sequence composite node.\nSequence Nodes execute their children from left to right, and will stop executing its children when one of their children fails.\nIf a child fails, then the Sequence fails. If all the Sequence's children succeed, then the Sequence succeeds." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTComposite_Sequence>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTComposite_Sequence::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTComposite_Sequence, 208715961);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_Sequence(Z_Construct_UClass_UBTComposite_Sequence, &UBTComposite_Sequence::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTComposite_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
