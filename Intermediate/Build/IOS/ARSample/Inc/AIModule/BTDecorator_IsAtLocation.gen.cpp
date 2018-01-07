// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsAtLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UBTDecorator_IsAtLocation::StaticRegisterNativesUBTDecorator_IsAtLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation_NoRegister()
	{
		return UBTDecorator_IsAtLocation::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsAtLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
				{ "ToolTip", "Is At Location decorator node.\nA decorator node that checks if AI controlled pawn is at given location." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPathFindingBasedTest_MetaData[] = {
				{ "Category", "Condition" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
				{ "ToolTip", "If true the result will be consistent with tests done while following paths.\n    Set to false to use geometric distance as configured with DistanceType" },
			};
#endif
			auto NewProp_bPathFindingBasedTest_SetBit = [](void* Obj){ ((UBTDecorator_IsAtLocation*)Obj)->bPathFindingBasedTest = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathFindingBasedTest = { UE4CodeGen_Private::EPropertyClass::Bool, "bPathFindingBasedTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_IsAtLocation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPathFindingBasedTest_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPathFindingBasedTest_MetaData, ARRAY_COUNT(NewProp_bPathFindingBasedTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNavAgentGoalLocation_MetaData[] = {
				{ "Category", "Condition" },
				{ "EditCondition", "bPathFindingBasedTest" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
				{ "ToolTip", "if moving to an actor and this actor is a nav agent, then we will move to their nav agent location" },
			};
#endif
			auto NewProp_bUseNavAgentGoalLocation_SetBit = [](void* Obj){ ((UBTDecorator_IsAtLocation*)Obj)->bUseNavAgentGoalLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNavAgentGoalLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseNavAgentGoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_IsAtLocation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseNavAgentGoalLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseNavAgentGoalLocation_MetaData, ARRAY_COUNT(NewProp_bUseNavAgentGoalLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseParametrizedRadius_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
			};
#endif
			auto NewProp_bUseParametrizedRadius_SetBit = [](void* Obj){ ((UBTDecorator_IsAtLocation*)Obj)->bUseParametrizedRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseParametrizedRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseParametrizedRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_IsAtLocation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseParametrizedRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseParametrizedRadius_MetaData, ARRAY_COUNT(NewProp_bUseParametrizedRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometricDistanceType_MetaData[] = {
				{ "Category", "Condition" },
				{ "EditCondition", "!bPathFindingBasedTest" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GeometricDistanceType = { UE4CodeGen_Private::EPropertyClass::Enum, "GeometricDistanceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_IsAtLocation, GeometricDistanceType), Z_Construct_UEnum_AIModule_FAIDistanceType, METADATA_PARAMS(NewProp_GeometricDistanceType_MetaData, ARRAY_COUNT(NewProp_GeometricDistanceType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometricDistanceType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParametrizedAcceptableRadius_MetaData[] = {
				{ "Category", "Condition" },
				{ "EditCondition", "bUseParametrizedRadius" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParametrizedAcceptableRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "ParametrizedAcceptableRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(NewProp_ParametrizedAcceptableRadius_MetaData, ARRAY_COUNT(NewProp_ParametrizedAcceptableRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
				{ "Category", "Condition" },
				{ "ClampMin", "0.0" },
				{ "EditCondition", "!bUseParametrizedRadius" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h" },
				{ "ToolTip", "distance threshold to accept as being at location" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptableRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_IsAtLocation, AcceptableRadius), METADATA_PARAMS(NewProp_AcceptableRadius_MetaData, ARRAY_COUNT(NewProp_AcceptableRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPathFindingBasedTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseNavAgentGoalLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseParametrizedRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometricDistanceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometricDistanceType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParametrizedAcceptableRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptableRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_IsAtLocation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_IsAtLocation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UBTDecorator_IsAtLocation, 3911148788);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsAtLocation(Z_Construct_UClass_UBTDecorator_IsAtLocation, &UBTDecorator_IsAtLocation::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_IsAtLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsAtLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
