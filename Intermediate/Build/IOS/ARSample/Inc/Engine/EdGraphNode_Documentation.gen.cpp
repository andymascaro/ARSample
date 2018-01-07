// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EdGraph/EdGraphNode_Documentation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Documentation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEdGraphNode_Documentation::StaticRegisterNativesUEdGraphNode_Documentation()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister()
	{
		return UEdGraphNode_Documentation::StaticClass();
	}
	UClass* Z_Construct_UClass_UEdGraphNode_Documentation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EdGraph/EdGraphNode_Documentation.h" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Excerpt_MetaData[] = {
				{ "DisplayName", "Documentation Excerpt" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
				{ "ToolTip", "Documentation Excerpt" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Excerpt = { UE4CodeGen_Private::EPropertyClass::Str, "Excerpt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode_Documentation, Excerpt), METADATA_PARAMS(NewProp_Excerpt_MetaData, ARRAY_COUNT(NewProp_Excerpt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[] = {
				{ "DisplayName", "Documentation Link" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
				{ "ToolTip", "Documentation Link" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link = { UE4CodeGen_Private::EPropertyClass::Str, "Link", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraphNode_Documentation, Link), METADATA_PARAMS(NewProp_Link_MetaData, ARRAY_COUNT(NewProp_Link_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Excerpt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Link,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEdGraphNode_Documentation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEdGraphNode_Documentation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UEdGraphNode_Documentation, 1704768629);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphNode_Documentation(Z_Construct_UClass_UEdGraphNode_Documentation, &UEdGraphNode_Documentation::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphNode_Documentation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Documentation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
