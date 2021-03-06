// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_SimpleParallel() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTParallelMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_SimpleParallel();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
// End Cross Module References
	static UEnum* EBTParallelMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTParallelMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTParallelMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTParallelMode(EBTParallelMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTParallelMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTParallelMode_CRC() { return 1100376623U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTParallelMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTParallelMode"), 0, Get_Z_Construct_UEnum_AIModule_EBTParallelMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTParallelMode::AbortBackground", (int64)EBTParallelMode::AbortBackground },
				{ "EBTParallelMode::WaitForBackground", (int64)EBTParallelMode::WaitForBackground },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbortBackground.DisplayName", "Immediate" },
				{ "AbortBackground.ToolTip", "When main task finishes, immediately abort background tree." },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
				{ "ToolTip", "keep in sync with DescribeFinishMode" },
				{ "WaitForBackground.DisplayName", "Delayed" },
				{ "WaitForBackground.ToolTip", "When main task finishes, wait for background tree to finish." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBTParallelMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBTParallelMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBTComposite_SimpleParallel::StaticRegisterNativesUBTComposite_SimpleParallel()
	{
	}
	UClass* Z_Construct_UClass_UBTComposite_SimpleParallel_NoRegister()
	{
		return UBTComposite_SimpleParallel::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTComposite_SimpleParallel()
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
				{ "IncludePath", "BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
				{ "ToolTip", "Simple Parallel composite node.\nAllows for running two children: one which must be a single task node (with optional decorators), and the other of which can be a complete subtree." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishMode_MetaData[] = {
				{ "Category", "Parallel" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h" },
				{ "ToolTip", "how background tree should be handled when main task finishes execution" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FinishMode = { UE4CodeGen_Private::EPropertyClass::Byte, "FinishMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(UBTComposite_SimpleParallel, FinishMode), Z_Construct_UEnum_AIModule_EBTParallelMode, METADATA_PARAMS(NewProp_FinishMode_MetaData, ARRAY_COUNT(NewProp_FinishMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FinishMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTComposite_SimpleParallel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTComposite_SimpleParallel::StaticClass,
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
	IMPLEMENT_CLASS(UBTComposite_SimpleParallel, 2185159896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_SimpleParallel(Z_Construct_UClass_UBTComposite_SimpleParallel, &UBTComposite_SimpleParallel::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTComposite_SimpleParallel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_SimpleParallel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
