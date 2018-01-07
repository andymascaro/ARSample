// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/RichTextBlockDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockDecorator() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void URichTextBlockDecorator::StaticRegisterNativesURichTextBlockDecorator()
	{
	}
	UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister()
	{
		return URichTextBlockDecorator::StaticClass();
	}
	UClass* Z_Construct_UClass_URichTextBlockDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/RichTextBlockDecorator.h" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlockDecorator.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevealedIndex_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlockDecorator.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RevealedIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RevealedIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URichTextBlockDecorator, RevealedIndex), METADATA_PARAMS(NewProp_RevealedIndex_MetaData, ARRAY_COUNT(NewProp_RevealedIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReveal_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Components/RichTextBlockDecorator.h" },
			};
#endif
			auto NewProp_bReveal_SetBit = [](void* Obj){ ((URichTextBlockDecorator*)Obj)->bReveal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReveal = { UE4CodeGen_Private::EPropertyClass::Bool, "bReveal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URichTextBlockDecorator), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReveal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReveal_MetaData, ARRAY_COUNT(NewProp_bReveal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RevealedIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReveal,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URichTextBlockDecorator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URichTextBlockDecorator::StaticClass,
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
	IMPLEMENT_CLASS(URichTextBlockDecorator, 2532325211);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlockDecorator(Z_Construct_UClass_URichTextBlockDecorator, &URichTextBlockDecorator::StaticClass, TEXT("/Script/UMG"), TEXT("URichTextBlockDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
