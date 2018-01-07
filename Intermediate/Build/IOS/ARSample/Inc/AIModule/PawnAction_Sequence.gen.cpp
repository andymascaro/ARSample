// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Actions/PawnAction_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Sequence() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Sequence_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Sequence();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
// End Cross Module References
	void UPawnAction_Sequence::StaticRegisterNativesUPawnAction_Sequence()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Sequence_NoRegister()
	{
		return UPawnAction_Sequence::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnAction_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPawnAction,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Actions/PawnAction_Sequence.h" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentActionCopy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecentActionCopy = { UE4CodeGen_Private::EPropertyClass::Object, "RecentActionCopy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UPawnAction_Sequence, RecentActionCopy), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_RecentActionCopy_MetaData, ARRAY_COUNT(NewProp_RecentActionCopy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailureHandlingMode_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChildFailureHandlingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ChildFailureHandlingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPawnAction_Sequence, ChildFailureHandlingMode), Z_Construct_UEnum_AIModule_EPawnActionFailHandling, METADATA_PARAMS(NewProp_ChildFailureHandlingMode_MetaData, ARRAY_COUNT(NewProp_ChildFailureHandlingMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSequence_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionSequence = { UE4CodeGen_Private::EPropertyClass::Array, "ActionSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPawnAction_Sequence, ActionSequence), METADATA_PARAMS(NewProp_ActionSequence_MetaData, ARRAY_COUNT(NewProp_ActionSequence_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSequence_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActionSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RecentActionCopy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildFailureHandlingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionSequence_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnAction_Sequence>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnAction_Sequence::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UPawnAction_Sequence, 3985555463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Sequence(Z_Construct_UClass_UPawnAction_Sequence, &UPawnAction_Sequence::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
