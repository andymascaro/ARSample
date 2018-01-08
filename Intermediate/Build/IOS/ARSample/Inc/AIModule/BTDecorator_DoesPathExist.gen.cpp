// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_DoesPathExist() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathExistanceQueryType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	static UEnum* EPathExistanceQueryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathExistanceQueryType, Z_Construct_UPackage__Script_AIModule(), TEXT("EPathExistanceQueryType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathExistanceQueryType(EPathExistanceQueryType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPathExistanceQueryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPathExistanceQueryType_CRC() { return 2320592842U; }
	UEnum* Z_Construct_UEnum_AIModule_EPathExistanceQueryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathExistanceQueryType"), 0, Get_Z_Construct_UEnum_AIModule_EPathExistanceQueryType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathExistanceQueryType::NavmeshRaycast2D", (int64)EPathExistanceQueryType::NavmeshRaycast2D },
				{ "EPathExistanceQueryType::HierarchicalQuery", (int64)EPathExistanceQueryType::HierarchicalQuery },
				{ "EPathExistanceQueryType::RegularPathFinding", (int64)EPathExistanceQueryType::RegularPathFinding },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HierarchicalQuery.ToolTip", "Fast" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "NavmeshRaycast2D.ToolTip", "Really Fast" },
				{ "RegularPathFinding.ToolTip", "Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPathExistanceQueryType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPathExistanceQueryType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBTDecorator_DoesPathExist::StaticRegisterNativesUBTDecorator_DoesPathExist()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister()
	{
		return UBTDecorator_DoesPathExist::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a path exists between two points from the Blackboard." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "ToolTip", "\"None\" will result in default filter being used" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FilterClass_MetaData, ARRAY_COUNT(NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathQueryType_MetaData[] = {
				{ "Category", "Condition" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathQueryType = { UE4CodeGen_Private::EPropertyClass::Byte, "PathQueryType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, PathQueryType), Z_Construct_UEnum_AIModule_EPathExistanceQueryType, METADATA_PARAMS(NewProp_PathQueryType_MetaData, ARRAY_COUNT(NewProp_PathQueryType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelf_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "ToolTip", "deprecated, set value of blackboard key A on initialization" },
			};
#endif
			auto NewProp_bUseSelf_SetBit = [](void* Obj){ ((UBTDecorator_DoesPathExist*)Obj)->bUseSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_DoesPathExist), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseSelf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseSelf_MetaData, ARRAY_COUNT(NewProp_bUseSelf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyB_MetaData[] = {
				{ "Category", "Condition" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyB = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKeyB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, BlackboardKeyB), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BlackboardKeyB_MetaData, ARRAY_COUNT(NewProp_BlackboardKeyB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyA_MetaData[] = {
				{ "Category", "Condition" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "ToolTip", "blackboard key selector" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyA = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKeyA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, BlackboardKeyA), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_BlackboardKeyA_MetaData, ARRAY_COUNT(NewProp_BlackboardKeyA_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathQueryType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardKeyB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardKeyA,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_DoesPathExist>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_DoesPathExist::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_DoesPathExist, 482477190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_DoesPathExist(Z_Construct_UClass_UBTDecorator_DoesPathExist, &UBTDecorator_DoesPathExist::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_DoesPathExist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_DoesPathExist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
