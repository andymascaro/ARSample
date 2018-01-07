// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EQSTestingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSTestingPawn() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
// End Cross Module References
	static UEnum* EEnvQueryHightlightMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryHightlightMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryHightlightMode(EEnvQueryHightlightMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryHightlightMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_CRC() { return 2209348244U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryHightlightMode"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryHightlightMode::All", (int64)EEnvQueryHightlightMode::All },
				{ "EEnvQueryHightlightMode::Best5Pct", (int64)EEnvQueryHightlightMode::Best5Pct },
				{ "EEnvQueryHightlightMode::Best25Pct", (int64)EEnvQueryHightlightMode::Best25Pct },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Best25Pct.DisplayName", "Best 25%" },
				{ "Best5Pct.DisplayName", "Best 5%" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvQueryHightlightMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEnvQueryHightlightMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AEQSTestingPawn::StaticRegisterNativesAEQSTestingPawn()
	{
	}
	UClass* Z_Construct_UClass_AEQSTestingPawn_NoRegister()
	{
		return AEQSTestingPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AEQSTestingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Advanced Attachment Mesh Animation Clothing Physics Rendering Lighting Activation CharacterMovement AgentPhysics Avoidance MovementComponent Velocity Shape Camera Input Layers SkeletalMesh Optimization Pawn Replication Actor Navigation" },
				{ "IncludePath", "EnvironmentQuery/EQSTestingPawn.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
				{ "ToolTip", "this class is abstract even though it's perfectly functional on its own.\n   The reason is to stop it from showing as valid player pawn type when configuring\n   project's game mode." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
				{ "ToolTip", "Editor Preview" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp = { UE4CodeGen_Private::EPropertyClass::Object, "EdRenderComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800082008, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, EdRenderComp), Z_Construct_UClass_UEQSRenderingComponent_NoRegister, METADATA_PARAMS(NewProp_EdRenderComp_MetaData, ARRAY_COUNT(NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryingMode_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "QueryingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryingMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(NewProp_QueryingMode_MetaData, ARRAY_COUNT(NewProp_QueryingMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickDuringGame_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			auto NewProp_bTickDuringGame_SetBit = [](void* Obj){ ((AEQSTestingPawn*)Obj)->bTickDuringGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickDuringGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bTickDuringGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEQSTestingPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTickDuringGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTickDuringGame_MetaData, ARRAY_COUNT(NewProp_bTickDuringGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			auto NewProp_bShouldBeVisibleInGame_SetBit = [](void* Obj){ ((AEQSTestingPawn*)Obj)->bShouldBeVisibleInGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisibleInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEQSTestingPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBeVisibleInGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBeVisibleInGame_MetaData, ARRAY_COUNT(NewProp_bShouldBeVisibleInGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReRunQueryOnlyOnFinishedMove_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			auto NewProp_bReRunQueryOnlyOnFinishedMove_SetBit = [](void* Obj){ ((AEQSTestingPawn*)Obj)->bReRunQueryOnlyOnFinishedMove = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReRunQueryOnlyOnFinishedMove = { UE4CodeGen_Private::EPropertyClass::Bool, "bReRunQueryOnlyOnFinishedMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEQSTestingPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReRunQueryOnlyOnFinishedMove_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReRunQueryOnlyOnFinishedMove_MetaData, ARRAY_COUNT(NewProp_bReRunQueryOnlyOnFinishedMove_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedItems_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			auto NewProp_bDrawFailedItems_SetBit = [](void* Obj){ ((AEQSTestingPawn*)Obj)->bDrawFailedItems = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedItems = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawFailedItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEQSTestingPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawFailedItems_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawFailedItems_MetaData, ARRAY_COUNT(NewProp_bDrawFailedItems_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawLabels_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			auto NewProp_bDrawLabels_SetBit = [](void* Obj){ ((AEQSTestingPawn*)Obj)->bDrawLabels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLabels = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawLabels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEQSTestingPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawLabels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawLabels_MetaData, ARRAY_COUNT(NewProp_bDrawLabels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HighlightMode = { UE4CodeGen_Private::EPropertyClass::Enum, "HighlightMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, HighlightMode), Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode, METADATA_PARAMS(NewProp_HighlightMode_MetaData, ARRAY_COUNT(NewProp_HighlightMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepToDebugDraw_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepToDebugDraw = { UE4CodeGen_Private::EPropertyClass::Int, "StepToDebugDraw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, StepToDebugDraw), METADATA_PARAMS(NewProp_StepToDebugDraw_MetaData, ARRAY_COUNT(NewProp_StepToDebugDraw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitPerStep_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitPerStep = { UE4CodeGen_Private::EPropertyClass::Float, "TimeLimitPerStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, TimeLimitPerStep), METADATA_PARAMS(NewProp_TimeLimitPerStep_MetaData, ARRAY_COUNT(NewProp_TimeLimitPerStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryConfig = { UE4CodeGen_Private::EPropertyClass::Array, "QueryConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryConfig), METADATA_PARAMS(NewProp_QueryConfig_MetaData, ARRAY_COUNT(NewProp_QueryConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
				{ "Category", "EQS" },
				{ "DisplayName", "QueryParams_DEPRECATED" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
				{ "ToolTip", "optional parameters for query" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryParams = { UE4CodeGen_Private::EPropertyClass::Array, "QueryParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryParams), METADATA_PARAMS(NewProp_QueryParams_MetaData, ARRAY_COUNT(NewProp_QueryParams_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
				{ "Category", "EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "QueryTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(NewProp_QueryTemplate_MetaData, ARRAY_COUNT(NewProp_QueryTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTickDuringGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBeVisibleInGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReRunQueryOnlyOnFinishedMove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawFailedItems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawLabels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighlightMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighlightMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StepToDebugDraw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeLimitPerStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryConfig_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryParams_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTemplate,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister, (int32)VTABLE_OFFSET(AEQSTestingPawn, IEQSQueryResultSourceInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEQSTestingPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEQSTestingPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEQSTestingPawn, 683317324);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEQSTestingPawn(Z_Construct_UClass_AEQSTestingPawn, &AEQSTestingPawn::StaticClass, TEXT("/Script/AIModule"), TEXT("AEQSTestingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEQSTestingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
