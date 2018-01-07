// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType();
// End Cross Module References
	void UAISense::StaticRegisterNativesUAISense()
	{
	}
	UClass* Z_Construct_UClass_UAISense_NoRegister()
	{
		return UAISense::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense()
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
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemInstance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionSystemInstance = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionSystemInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UAISense, PerceptionSystemInstance), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(NewProp_PerceptionSystemInstance_MetaData, ARRAY_COUNT(NewProp_PerceptionSystemInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterAllPawnsAsSources_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
				{ "ToolTip", "If true all newly spawned pawns will get auto registered as source for this sense." },
			};
#endif
			auto NewProp_bAutoRegisterAllPawnsAsSources_SetBit = [](void* Obj){ ((UAISense*)Obj)->bAutoRegisterAllPawnsAsSources = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterAllPawnsAsSources = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoRegisterAllPawnsAsSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAISense), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoRegisterAllPawnsAsSources_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoRegisterAllPawnsAsSources_MetaData, ARRAY_COUNT(NewProp_bAutoRegisterAllPawnsAsSources_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsNewPawnNotification_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
				{ "ToolTip", "whether this sense is interested in getting notified about new Pawns being spawned\n    this can be used for example for automated sense sources registration" },
			};
#endif
			auto NewProp_bWantsNewPawnNotification_SetBit = [](void* Obj){ ((UAISense*)Obj)->bWantsNewPawnNotification = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsNewPawnNotification = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsNewPawnNotification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAISense), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWantsNewPawnNotification_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWantsNewPawnNotification_MetaData, ARRAY_COUNT(NewProp_bWantsNewPawnNotification_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyType_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotifyType = { UE4CodeGen_Private::EPropertyClass::Enum, "NotifyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014015, 1, nullptr, STRUCT_OFFSET(UAISense, NotifyType), Z_Construct_UEnum_AIModule_EAISenseNotifyType, METADATA_PARAMS(NewProp_NotifyType_MetaData, ARRAY_COUNT(NewProp_NotifyType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultExpirationAge_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
				{ "ToolTip", "age past which stimulus of this sense are \"forgotten\"" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultExpirationAge = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultExpirationAge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004015, 1, nullptr, STRUCT_OFFSET(UAISense, DefaultExpirationAge), METADATA_PARAMS(NewProp_DefaultExpirationAge_MetaData, ARRAY_COUNT(NewProp_DefaultExpirationAge_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionSystemInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoRegisterAllPawnsAsSources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWantsNewPawnNotification,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultExpirationAge,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100085u,
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
	IMPLEMENT_CLASS(UAISense, 2753936785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense(Z_Construct_UClass_UAISense, &UAISense::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
