// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/DefaultPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ADefaultPawn_LookUpAtRate();
	ENGINE_API UFunction* Z_Construct_UFunction_ADefaultPawn_MoveForward();
	ENGINE_API UFunction* Z_Construct_UFunction_ADefaultPawn_MoveRight();
	ENGINE_API UFunction* Z_Construct_UFunction_ADefaultPawn_MoveUp_World();
	ENGINE_API UFunction* Z_Construct_UFunction_ADefaultPawn_TurnAtRate();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
// End Cross Module References
	void ADefaultPawn::StaticRegisterNativesADefaultPawn()
	{
		UClass* Class = ADefaultPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LookUpAtRate", (Native)&ADefaultPawn::execLookUpAtRate },
			{ "MoveForward", (Native)&ADefaultPawn::execMoveForward },
			{ "MoveRight", (Native)&ADefaultPawn::execMoveRight },
			{ "MoveUp_World", (Native)&ADefaultPawn::execMoveUp_World },
			{ "TurnAtRate", (Native)&ADefaultPawn::execTurnAtRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADefaultPawn_LookUpAtRate()
	{
		struct DefaultPawn_eventLookUpAtRate_Parms
		{
			float Rate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate = { UE4CodeGen_Private::EPropertyClass::Float, "Rate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DefaultPawn_eventLookUpAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Called via input to look up at a given rate (or down if Rate is negative).\n@param Rate   This is a normalized rate, i.e. 1.0 means 100% of desired turn rate" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, "LookUpAtRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DefaultPawn_eventLookUpAtRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADefaultPawn_MoveForward()
	{
		struct DefaultPawn_eventMoveForward_Parms
		{
			float Val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DefaultPawn_eventMoveForward_Parms, Val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Input callback to move forward in local space (or backward if Val is negative).\n@param Val Amount of movement in the forward direction (or backward if negative).\n@see APawn::AddMovementInput()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(DefaultPawn_eventMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADefaultPawn_MoveRight()
	{
		struct DefaultPawn_eventMoveRight_Parms
		{
			float Val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DefaultPawn_eventMoveRight_Parms, Val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Input callback to strafe right in local space (or left if Val is negative).\n@param Val Amount of movement in the right direction (or left if negative).\n@see APawn::AddMovementInput()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(DefaultPawn_eventMoveRight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADefaultPawn_MoveUp_World()
	{
		struct DefaultPawn_eventMoveUp_World_Parms
		{
			float Val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DefaultPawn_eventMoveUp_World_Parms, Val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Input callback to move up in world space (or down if Val is negative).\n@param Val Amount of movement in the world up direction (or down if negative).\n@see APawn::AddMovementInput()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, "MoveUp_World", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(DefaultPawn_eventMoveUp_World_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADefaultPawn_TurnAtRate()
	{
		struct DefaultPawn_eventTurnAtRate_Parms
		{
			float Rate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate = { UE4CodeGen_Private::EPropertyClass::Float, "Rate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DefaultPawn_eventTurnAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Called via input to turn at a given rate.\n@param Rate  This is a normalized rate, i.e. 1.0 means 100% of desired turn rate" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, "TurnAtRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DefaultPawn_eventTurnAtRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultPawn_NoRegister()
	{
		return ADefaultPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ADefaultPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADefaultPawn_LookUpAtRate, "LookUpAtRate" }, // 2356198266
				{ &Z_Construct_UFunction_ADefaultPawn_MoveForward, "MoveForward" }, // 302635969
				{ &Z_Construct_UFunction_ADefaultPawn_MoveRight, "MoveRight" }, // 1273808440
				{ &Z_Construct_UFunction_ADefaultPawn_MoveUp_World, "MoveUp_World" }, // 3195034075
				{ &Z_Construct_UFunction_ADefaultPawn_TurnAtRate, "TurnAtRate" }, // 593358218
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "GameFramework/DefaultPawn.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "DefaultPawn implements a simple Pawn with spherical collision and built-in flying movement.\n@see UFloatingPawnMovement" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddDefaultMovementBindings_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "If true, adds default input bindings for movement and camera look." },
			};
#endif
			auto NewProp_bAddDefaultMovementBindings_SetBit = [](void* Obj){ ((ADefaultPawn*)Obj)->bAddDefaultMovementBindings = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddDefaultMovementBindings = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddDefaultMovementBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ADefaultPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAddDefaultMovementBindings_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAddDefaultMovementBindings_MetaData, ARRAY_COUNT(NewProp_bAddDefaultMovementBindings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "The mesh associated with this Pawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ADefaultPawn, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "DefaultPawn collision component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ADefaultPawn, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionComponent_MetaData, ARRAY_COUNT(NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "DefaultPawn movement component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ADefaultPawn, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(NewProp_MovementComponent_MetaData, ARRAY_COUNT(NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Base lookup rate, in deg/sec. Other scaling may affect final lookup rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ADefaultPawn, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ADefaultPawn, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAddDefaultMovementBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADefaultPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADefaultPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ADefaultPawn, 4229605708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultPawn(Z_Construct_UClass_ADefaultPawn, &ADefaultPawn::StaticClass, TEXT("/Script/Engine"), TEXT("ADefaultPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
