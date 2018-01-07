// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Services/BTService_DefaultFocus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_DefaultFocus() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_DefaultFocus();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTService_DefaultFocus::StaticRegisterNativesUBTService_DefaultFocus()
	{
	}
	UClass* Z_Construct_UClass_UBTService_DefaultFocus_NoRegister()
	{
		return UBTService_DefaultFocus::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTService_DefaultFocus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Service" },
				{ "IncludePath", "BehaviorTree/Services/BTService_DefaultFocus.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_DefaultFocus.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Default Focus service node.\nA service node that automatically sets the AI controller's focus when it becomes active." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPriority_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_DefaultFocus.h" },
				{ "ToolTip", "not exposed to users on purpose. Here to make reusing focus-setting mechanics by derived classes possible" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusPriority = { UE4CodeGen_Private::EPropertyClass::Byte, "FocusPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTService_DefaultFocus, FocusPriority), nullptr, METADATA_PARAMS(NewProp_FocusPriority_MetaData, ARRAY_COUNT(NewProp_FocusPriority_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FocusPriority,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTService_DefaultFocus>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTService_DefaultFocus::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTService_DefaultFocus, 449243583);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_DefaultFocus(Z_Construct_UClass_UBTService_DefaultFocus, &UBTService_DefaultFocus::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService_DefaultFocus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_DefaultFocus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
