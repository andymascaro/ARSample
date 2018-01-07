// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/AISystemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystemBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UAISystemBase::StaticRegisterNativesUAISystemBase()
	{
	}
	UClass* Z_Construct_UClass_UAISystemBase_NoRegister()
	{
		return UAISystemBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISystemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/AISystemBase.h" },
				{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstantiateAISystemOnClient_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
			};
#endif
			auto NewProp_bInstantiateAISystemOnClient_SetBit = [](void* Obj){ ((UAISystemBase*)Obj)->bInstantiateAISystemOnClient = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstantiateAISystemOnClient = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstantiateAISystemOnClient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000002044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAISystemBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInstantiateAISystemOnClient_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInstantiateAISystemOnClient_MetaData, ARRAY_COUNT(NewProp_bInstantiateAISystemOnClient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISystemModuleName_MetaData[] = {
				{ "DisplayName", "AISystem Module" },
				{ "MetaClass", "AISystem" },
				{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AISystemModuleName = { UE4CodeGen_Private::EPropertyClass::Name, "AISystemModuleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000002044000, 1, nullptr, STRUCT_OFFSET(UAISystemBase, AISystemModuleName), METADATA_PARAMS(NewProp_AISystemModuleName_MetaData, ARRAY_COUNT(NewProp_AISystemModuleName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISystemClassName_MetaData[] = {
				{ "DisplayName", "AISystem Class" },
				{ "MetaClass", "AISystem" },
				{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AISystemClassName = { UE4CodeGen_Private::EPropertyClass::Struct, "AISystemClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000002044000, 1, nullptr, STRUCT_OFFSET(UAISystemBase, AISystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_AISystemClassName_MetaData, ARRAY_COUNT(NewProp_AISystemClassName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInstantiateAISystemOnClient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AISystemModuleName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AISystemClassName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISystemBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISystemBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100087u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISystemBase, 2570323108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISystemBase(Z_Construct_UClass_UAISystemBase, &UAISystemBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAISystemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
