// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryNode::StaticRegisterNativesUEnvQueryNode()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryNode_NoRegister()
	{
		return UEnvQueryNode::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/EnvQueryNode.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryNode.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerNum_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryNode.h" },
				{ "ToolTip", "Versioning for updating deprecated properties" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerNum = { UE4CodeGen_Private::EPropertyClass::Int, "VerNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryNode, VerNum), METADATA_PARAMS(NewProp_VerNum_MetaData, ARRAY_COUNT(NewProp_VerNum_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerNum,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryNode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryNode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UEnvQueryNode, 3502232610);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryNode(Z_Construct_UClass_UEnvQueryNode, &UEnvQueryNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
