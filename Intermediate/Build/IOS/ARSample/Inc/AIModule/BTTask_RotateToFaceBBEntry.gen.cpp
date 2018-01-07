// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToFaceBBEntry() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_RotateToFaceBBEntry::StaticRegisterNativesUBTTask_RotateToFaceBBEntry()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry_NoRegister()
	{
		return UBTTask_RotateToFaceBBEntry::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceBBEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
				{ "Category", "Node" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h" },
				{ "ToolTip", "Success condition precision in degrees" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Precision = { UE4CodeGen_Private::EPropertyClass::Float, "Precision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UBTTask_RotateToFaceBBEntry, Precision), METADATA_PARAMS(NewProp_Precision_MetaData, ARRAY_COUNT(NewProp_Precision_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Precision,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_RotateToFaceBBEntry>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_RotateToFaceBBEntry::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RotateToFaceBBEntry, 2214815849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RotateToFaceBBEntry(Z_Construct_UClass_UBTTask_RotateToFaceBBEntry, &UBTTask_RotateToFaceBBEntry::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_RotateToFaceBBEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToFaceBBEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
