// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_LevelReset();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_RemoteEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	static FName NAME_ALevelScriptActor_LevelReset = FName(TEXT("LevelReset"));
	void ALevelScriptActor::LevelReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALevelScriptActor_LevelReset),NULL);
	}
	static FName NAME_ALevelScriptActor_WorldOriginLocationChanged = FName(TEXT("WorldOriginLocationChanged"));
	void ALevelScriptActor::WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation)
	{
		LevelScriptActor_eventWorldOriginLocationChanged_Parms Parms;
		Parms.OldOriginLocation=OldOriginLocation;
		Parms.NewOriginLocation=NewOriginLocation;
		ProcessEvent(FindFunctionChecked(NAME_ALevelScriptActor_WorldOriginLocationChanged),&Parms);
	}
	void ALevelScriptActor::StaticRegisterNativesALevelScriptActor()
	{
		UClass* Class = ALevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoteEvent", (Native)&ALevelScriptActor::execRemoteEvent },
			{ "SetCinematicMode", (Native)&ALevelScriptActor::execSetCinematicMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALevelScriptActor_LevelReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, "LevelReset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020804, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelScriptActor_RemoteEvent()
	{
		struct LevelScriptActor_eventRemoteEvent_Parms
		{
			FName EventName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((LevelScriptActor_eventRemoteEvent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelScriptActor_eventRemoteEvent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelScriptActor_eventRemoteEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Misc" },
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
				{ "ToolTip", "Tries to find an event named \"EventName\" on all other levels, and calls it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, "RemoteEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(LevelScriptActor_eventRemoteEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode()
	{
		struct LevelScriptActor_eventSetCinematicMode_Parms
		{
			bool bCinematicMode;
			bool bHidePlayer;
			bool bAffectsHUD;
			bool bAffectsMovement;
			bool bAffectsTurning;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAffectsTurning_SetBit = [](void* Obj){ ((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsTurning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsTurning_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAffectsMovement_SetBit = [](void* Obj){ ((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsMovement_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAffectsHUD_SetBit = [](void* Obj){ ((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectsHUD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectsHUD_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHidePlayer_SetBit = [](void* Obj){ ((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bHidePlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bHidePlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHidePlayer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCinematicMode_SetBit = [](void* Obj){ ((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bCinematicMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCinematicMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bCinematicMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCinematicMode_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsTurning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectsHUD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHidePlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCinematicMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Game|Cinematic" },
				{ "CPP_Default_bAffectsHUD", "true" },
				{ "CPP_Default_bAffectsMovement", "false" },
				{ "CPP_Default_bAffectsTurning", "false" },
				{ "CPP_Default_bHidePlayer", "true" },
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
				{ "ToolTip", "Sets the cinematic mode on all PlayerControllers\n\n@param       bInCinematicMode        specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n@param       bHidePlayer                     specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n@param       bAffectsHUD                     specify true if we should show/hide the HUD to match the value of bCinematicMode\n@param       bAffectsMovement        specify true to disable movement in cinematic mode, enable it when leaving\n@param       bAffectsTurning         specify true to disable turning in cinematic mode or enable it when leaving" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, "SetCinematicMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(LevelScriptActor_eventSetCinematicMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewOriginLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewOriginLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelScriptActor_eventWorldOriginLocationChanged_Parms, NewOriginLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldOriginLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OldOriginLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelScriptActor_eventWorldOriginLocationChanged_Parms, OldOriginLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewOriginLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldOriginLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
				{ "ToolTip", "Event called on world origin location changes\n\n@param       OldOriginLocation       Previous world origin location\n@param       NewOriginLocation       New world origin location" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, "WorldOriginLocationChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(LevelScriptActor_eventWorldOriginLocationChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister()
	{
		return ALevelScriptActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALevelScriptActor_LevelReset, "LevelReset" }, // 1187936648
				{ &Z_Construct_UFunction_ALevelScriptActor_RemoteEvent, "RemoteEvent" }, // 2986949866
				{ &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode, "SetCinematicMode" }, // 3713024048
				{ &Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged, "WorldOriginLocationChanged" }, // 3763403812
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Engine/LevelScriptActor.h" },
				{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
				{ "ToolTip", "ALevelScriptActor is the base class for classes generated by\nULevelScriptBlueprints. ALevelScriptActor instances are hidden actors that\nexist within a level, and can execute level-wide logic (operating on specific\nactor instances within the level). The level-script's functionality is defined\ninside the ULevelScriptBlueprint itself (using the blueprint's node-based\ninterface).\n\n@see AActor\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see ULevelScriptBlueprint\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInputEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
			};
#endif
			auto NewProp_bInputEnabled_SetBit = [](void* Obj){ ((ALevelScriptActor*)Obj)->bInputEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bInputEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ALevelScriptActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInputEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInputEnabled_MetaData, ARRAY_COUNT(NewProp_bInputEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInputEnabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALevelScriptActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALevelScriptActor::StaticClass,
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
	IMPLEMENT_CLASS(ALevelScriptActor, 2001014578);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelScriptActor(Z_Construct_UClass_ALevelScriptActor, &ALevelScriptActor::StaticClass, TEXT("/Script/Engine"), TEXT("ALevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
