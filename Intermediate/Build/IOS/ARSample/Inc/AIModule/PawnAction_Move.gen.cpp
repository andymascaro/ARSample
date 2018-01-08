// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Actions/PawnAction_Move.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Move() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Move_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Move();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EPawnActionMoveMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionMoveMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionMoveMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionMoveMode(EPawnActionMoveMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionMoveMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionMoveMode_CRC() { return 809958176U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionMoveMode"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionMoveMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionMoveMode::UsePathfinding", (int64)EPawnActionMoveMode::UsePathfinding },
				{ "EPawnActionMoveMode::StraightLine", (int64)EPawnActionMoveMode::StraightLine },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPawnActionMoveMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EPawnActionMoveMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPawnAction_Move::StaticRegisterNativesUPawnAction_Move()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Move_NoRegister()
	{
		return UPawnAction_Move::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnAction_Move()
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
				{ "IncludePath", "Actions/PawnAction_Move.h" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbortChildActionOnPathChange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "if set, other actions with the same priority will be aborted when path is changed" },
			};
#endif
			auto NewProp_bAbortChildActionOnPathChange_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bAbortChildActionOnPathChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbortChildActionOnPathChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbortChildActionOnPathChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbortChildActionOnPathChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAbortChildActionOnPathChange_MetaData, ARRAY_COUNT(NewProp_bAbortChildActionOnPathChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePathToGoal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "if set, path to GoalActor will be updated with goal's movement" },
			};
#endif
			auto NewProp_bUpdatePathToGoal_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bUpdatePathToGoal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePathToGoal = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatePathToGoal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdatePathToGoal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdatePathToGoal_MetaData, ARRAY_COUNT(NewProp_bUpdatePathToGoal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalToNavigation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "if set, GoalLocation will be projected on navigation before using" },
			};
#endif
			auto NewProp_bProjectGoalToNavigation_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bProjectGoalToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectGoalToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectGoalToNavigation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProjectGoalToNavigation_MetaData, ARRAY_COUNT(NewProp_bProjectGoalToNavigation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
			};
#endif
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowPartialPath_MetaData, ARRAY_COUNT(NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "if set, movement will use path finding" },
			};
#endif
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePathfinding_MetaData, ARRAY_COUNT(NewProp_bUsePathfinding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinishOnOverlap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "if set to true (default) will make action succeed when the pawn's collision component overlaps with goal's collision component" },
			};
#endif
			auto NewProp_bFinishOnOverlap_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bFinishOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinishOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bFinishOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFinishOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFinishOnOverlap_MetaData, ARRAY_COUNT(NewProp_bFinishOnOverlap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
			auto NewProp_bAllowStrafe_SetBit = [](void* Obj){ ((UPawnAction_Move*)Obj)->bAllowStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnAction_Move), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStrafe_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStrafe_MetaData, ARRAY_COUNT(NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
				{ "ToolTip", "\"None\" will result in default filter being used" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_FilterClass_MetaData, ARRAY_COUNT(NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ClampMin", "0.01" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptableRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, AcceptableRadius), METADATA_PARAMS(NewProp_AcceptableRadius_MetaData, ARRAY_COUNT(NewProp_AcceptableRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GoalLocation_MetaData, ARRAY_COUNT(NewProp_GoalLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[] = {
				{ "Category", "PawnAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor = { UE4CodeGen_Private::EPropertyClass::Object, "GoalActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UPawnAction_Move, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_GoalActor_MetaData, ARRAY_COUNT(NewProp_GoalActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbortChildActionOnPathChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdatePathToGoal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectGoalToNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFinishOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptableRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnAction_Move>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnAction_Move::StaticClass,
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
	IMPLEMENT_CLASS(UPawnAction_Move, 752751659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Move(Z_Construct_UClass_UPawnAction_Move, &UPawnAction_Move::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Move"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Move);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
