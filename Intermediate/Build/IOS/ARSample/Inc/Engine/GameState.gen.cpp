// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/GameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameState_OnRep_ElapsedTime();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameState_OnRep_MatchState();
// End Cross Module References
	void AGameState::StaticRegisterNativesAGameState()
	{
		UClass* Class = AGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ElapsedTime", (Native)&AGameState::execOnRep_ElapsedTime },
			{ "OnRep_MatchState", (Native)&AGameState::execOnRep_MatchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameState_OnRep_ElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
				{ "ToolTip", "Gives clients the chance to do something when time gets updates" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState, "OnRep_ElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameState_OnRep_MatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
				{ "ToolTip", "Match state has changed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState, "OnRep_MatchState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameState_NoRegister()
	{
		return AGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameStateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameState_OnRep_ElapsedTime, "OnRep_ElapsedTime" }, // 964777499
				{ &Z_Construct_UFunction_AGameState_OnRep_MatchState, "OnRep_MatchState" }, // 2612309212
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/GameState.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "GameState is a subclass of GameStateBase that behaves like a multiplayer match-based game.\nIt is tied to functionality in GameMode." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
				{ "ToolTip", "Elapsed game time since match has started." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElapsedTime = { UE4CodeGen_Private::EPropertyClass::Int, "ElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_ElapsedTime", STRUCT_OFFSET(AGameState, ElapsedTime), METADATA_PARAMS(NewProp_ElapsedTime_MetaData, ARRAY_COUNT(NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMatchState_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
				{ "ToolTip", "Previous map state, used to handle if multiple transitions happen per frame" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviousMatchState = { UE4CodeGen_Private::EPropertyClass::Name, "PreviousMatchState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020815, 1, nullptr, STRUCT_OFFSET(AGameState, PreviousMatchState), METADATA_PARAMS(NewProp_PreviousMatchState_MetaData, ARRAY_COUNT(NewProp_PreviousMatchState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
				{ "ToolTip", "What match state we are currently in" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatchState = { UE4CodeGen_Private::EPropertyClass::Name, "MatchState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100020835, 1, "OnRep_MatchState", STRUCT_OFFSET(AGameState, MatchState), METADATA_PARAMS(NewProp_MatchState_MetaData, ARRAY_COUNT(NewProp_MatchState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ElapsedTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousMatchState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MatchState,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGameState, 1218886358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameState(Z_Construct_UClass_AGameState, &AGameState::StaticClass, TEXT("/Script/Engine"), TEXT("AGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
