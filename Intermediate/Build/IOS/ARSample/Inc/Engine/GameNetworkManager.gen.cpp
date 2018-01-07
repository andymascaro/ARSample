// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/GameNetworkManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManager() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStandbyType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
// End Cross Module References
	static UEnum* EStandbyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStandbyType, Z_Construct_UPackage__Script_Engine(), TEXT("EStandbyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStandbyType(EStandbyType_StaticEnum, TEXT("/Script/Engine"), TEXT("EStandbyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStandbyType_CRC() { return 2621203528U; }
	UEnum* Z_Construct_UEnum_Engine_EStandbyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStandbyType"), 0, Get_Z_Construct_UEnum_Engine_EStandbyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STDBY_Rx", (int64)STDBY_Rx },
				{ "STDBY_Tx", (int64)STDBY_Tx },
				{ "STDBY_BadPing", (int64)STDBY_BadPing },
				{ "STDBY_MAX", (int64)STDBY_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Describes which standby detection event occured so the game can take appropriate action." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStandbyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EStandbyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AGameNetworkManager::StaticRegisterNativesAGameNetworkManager()
	{
	}
	UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister()
	{
		return AGameNetworkManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameNetworkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/GameNetworkManager.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Handles game-specific networking management (cheat detection, bandwidth management, etc.)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceBasedRelevancy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "If true, actor network relevancy is constrained by whether they are within their NetCullDistanceSquared from the client's view point." },
			};
#endif
			auto NewProp_bUseDistanceBasedRelevancy_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->bUseDistanceBasedRelevancy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceBasedRelevancy = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDistanceBasedRelevancy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDistanceBasedRelevancy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDistanceBasedRelevancy_MetaData, ARRAY_COUNT(NewProp_bUseDistanceBasedRelevancy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Whether client moves should be force corrected during time discrepancy resolution, useful for projects that have lenient\nmove error tolerance/ClientAuthorativePosition enabled." },
			};
#endif
			auto NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution = { UE4CodeGen_Private::EPropertyClass::Bool, "bMovementTimeDiscrepancyForceCorrectionsDuringResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData, ARRAY_COUNT(NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Accepted drift in clocks between client and server as a percent per second allowed.\n\n0.0 is \"no forgiveness\" and all logic would run on raw values, no tampering on the server side.\n0.02 would be a 2% per second difference \"forgiven\" - if the time discrepancy in a given second was less than 2%,\nthe error handling/detection code effectively ignores it.\n\nIncreasing this value above 0% lessens the chance of false positives on time discrepancy (burst packet loss, performance\nhitches), but also means anyone tampering with their client time below that percent will not be detected and no resolution\naction will be taken, and anyone above that threshold will still gain the advantage of this % of time boost (if running at\n10% speed-up and this value is 0.05 or 5% allowance, they would only be resolved down to a 5% speed boost).\n\nTime discrepancy detection code DOES keep track of LifetimeRawTimeDiscrepancy, which is unaffected by this drift allowance,\nso cheating below DriftAllowance percent could be tracked and acted on outside of an individual game. For example, if DriftAllowance\nwas 0.05 (meaning we're not going to actively prevent any cheating below 5% boosts to ensure less false positives for normal players),\nwe could still post-process analytics of the game showing that Player X regularly runs at 4% speed boost and take action." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyDriftAllowance = { UE4CodeGen_Private::EPropertyClass::Float, "MovementTimeDiscrepancyDriftAllowance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyDriftAllowance), METADATA_PARAMS(NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData, ARRAY_COUNT(NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyResolutionRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "During time discrepancy resolution, we \"pay back\" the time discrepancy at this rate for future moves until total error is zero.\n1.0 = 100% resolution rate, meaning the next X ServerMoves from the client are fully paying back the time,\n0.5 = 50% resolution rate, meaning future ServerMoves will spend 50% of tick continuing to move the character and 50% paying back.\nLowering from 100% could be used to produce less severe/noticeable corrections, although typically we would want to correct\nthe client as quickly as possible." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyResolutionRate = { UE4CodeGen_Private::EPropertyClass::Float, "MovementTimeDiscrepancyResolutionRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyResolutionRate), METADATA_PARAMS(NewProp_MovementTimeDiscrepancyResolutionRate_MetaData, ARRAY_COUNT(NewProp_MovementTimeDiscrepancyResolutionRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Maximum time client can be behind." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyMinTimeMargin = { UE4CodeGen_Private::EPropertyClass::Float, "MovementTimeDiscrepancyMinTimeMargin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyMinTimeMargin), METADATA_PARAMS(NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData, ARRAY_COUNT(NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Maximum time client can be ahead before triggering movement time discrepancy detection/resolution (if enabled)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyMaxTimeMargin = { UE4CodeGen_Private::EPropertyClass::Float, "MovementTimeDiscrepancyMaxTimeMargin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyMaxTimeMargin), METADATA_PARAMS(NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData, ARRAY_COUNT(NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyResolution_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Whether movement time discrepancy resolution is enabled (when detected, make client movement \"pay back\" excessive time discrepancies)" },
			};
#endif
			auto NewProp_bMovementTimeDiscrepancyResolution_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyResolution = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyResolution = { UE4CodeGen_Private::EPropertyClass::Bool, "bMovementTimeDiscrepancyResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMovementTimeDiscrepancyResolution_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMovementTimeDiscrepancyResolution_MetaData, ARRAY_COUNT(NewProp_bMovementTimeDiscrepancyResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyDetection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Whether movement time discrepancy detection is enabled." },
			};
#endif
			auto NewProp_bMovementTimeDiscrepancyDetection_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyDetection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyDetection = { UE4CodeGen_Private::EPropertyClass::Bool, "bMovementTimeDiscrepancyDetection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMovementTimeDiscrepancyDetection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMovementTimeDiscrepancyDetection_MetaData, ARRAY_COUNT(NewProp_bMovementTimeDiscrepancyDetection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientErrorUpdateRateLimit_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Minimum delay between the server sending error corrections to a client, in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientErrorUpdateRateLimit = { UE4CodeGen_Private::EPropertyClass::Float, "ClientErrorUpdateRateLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, ClientErrorUpdateRateLimit), METADATA_PARAMS(NewProp_ClientErrorUpdateRateLimit_MetaData, ARRAY_COUNT(NewProp_ClientErrorUpdateRateLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientAuthorativePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "If client update is within MAXPOSITIONERRORSQUARED then he is authorative on his final position" },
			};
#endif
			auto NewProp_ClientAuthorativePosition_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->ClientAuthorativePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientAuthorativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "ClientAuthorativePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClientAuthorativePosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClientAuthorativePosition_MetaData, ARRAY_COUNT(NewProp_ClientAuthorativePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "When player count is greater than this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientNetSendMoveThrottleOverPlayerCount = { UE4CodeGen_Private::EPropertyClass::Int, "ClientNetSendMoveThrottleOverPlayerCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveThrottleOverPlayerCount), METADATA_PARAMS(NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData, ARRAY_COUNT(NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "When player net speed (CurrentNetSpeed, based on ConfiguredInternetSpeed or ConfiguredLanSpeed) is less than or equal to this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientNetSendMoveThrottleAtNetSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "ClientNetSendMoveThrottleAtNetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveThrottleAtNetSpeed), METADATA_PARAMS(NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData, ARRAY_COUNT(NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "ClientNetSendMoveDeltaTimeThrottled is used in place of ClientNetSendMoveDeltaTime when player count is high or net speed is low. See ClientNetSendMoveDeltaTime for more info." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTimeThrottled = { UE4CodeGen_Private::EPropertyClass::Float, "ClientNetSendMoveDeltaTimeThrottled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTimeThrottled), METADATA_PARAMS(NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData, ARRAY_COUNT(NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "ClientNetSendMoveDeltaTime is the default minimum time delta of CharacterMovement client moves to the server. When updates occur more frequently, they may be combined to save bandwidth.\nThis value is not used when player count is over ClientNetSendMoveThrottleOverPlayerCount or player net speed is <= ClientNetSendMoveThrottleAtNetSpeed (see ClientNetSendMoveDeltaTimeThrottled)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "ClientNetSendMoveDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTime), METADATA_PARAMS(NewProp_ClientNetSendMoveDeltaTime_MetaData, ARRAY_COUNT(NewProp_ClientNetSendMoveDeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDeltaTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "MaxMoveDeltaTime is the default maximum time delta of CharacterMovement ServerMoves. Should be less than or equal to MAXCLIENTUPDATEINTERVAL, otherwise server will interfere by forcing position updates." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxMoveDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MaxMoveDeltaTime), METADATA_PARAMS(NewProp_MaxMoveDeltaTime_MetaData, ARRAY_COUNT(NewProp_MaxMoveDeltaTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXCLIENTUPDATEINTERVAL_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "MAXCLIENTUPDATEINTERVAL is the maximum time between movement updates from the client before the server forces an update." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXCLIENTUPDATEINTERVAL = { UE4CodeGen_Private::EPropertyClass::Float, "MAXCLIENTUPDATEINTERVAL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MAXCLIENTUPDATEINTERVAL), METADATA_PARAMS(NewProp_MAXCLIENTUPDATEINTERVAL_MetaData, ARRAY_COUNT(NewProp_MAXCLIENTUPDATEINTERVAL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CLIENTADJUSTUPDATECOST_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "CLIENTADJUSTUPDATECOST is the bandwidth cost in bytes of sending a client adjustment update. 180 is greater than the actual cost, but represents a tweaked value reserving enough bandwidth for\n      other updates sent to the client.  Increase this value to reduce client adjustment update frequency, or if the amount of data sent in the clientadjustment() call increases" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CLIENTADJUSTUPDATECOST = { UE4CodeGen_Private::EPropertyClass::Float, "CLIENTADJUSTUPDATECOST", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, CLIENTADJUSTUPDATECOST), METADATA_PARAMS(NewProp_CLIENTADJUSTUPDATECOST_MetaData, ARRAY_COUNT(NewProp_CLIENTADJUSTUPDATECOST_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "MAXNEARZEROVELOCITYSQUARED is the square of the max velocity that is considered zero (not corrected) in net play" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXNEARZEROVELOCITYSQUARED = { UE4CodeGen_Private::EPropertyClass::Float, "MAXNEARZEROVELOCITYSQUARED", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MAXNEARZEROVELOCITYSQUARED), METADATA_PARAMS(NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData, ARRAY_COUNT(NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXPOSITIONERRORSQUARED_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "MAXPOSITIONERRORSQUARED is the square of the max position error that is accepted (not corrected) in net play" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXPOSITIONERRORSQUARED = { UE4CodeGen_Private::EPropertyClass::Float, "MAXPOSITIONERRORSQUARED", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MAXPOSITIONERRORSQUARED), METADATA_PARAMS(NewProp_MAXPOSITIONERRORSQUARED_MetaData, ARRAY_COUNT(NewProp_MAXPOSITIONERRORSQUARED_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRepSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Average size of replicated move packet (ServerMove() packet size) from player" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRepSize = { UE4CodeGen_Private::EPropertyClass::Float, "MoveRepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MoveRepSize), METADATA_PARAMS(NewProp_MoveRepSize_MetaData, ARRAY_COUNT(NewProp_MoveRepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The amount of time to wait before checking a connection for standby issues" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime = { UE4CodeGen_Private::EPropertyClass::Float, "JoinInProgressStandbyWaitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, JoinInProgressStandbyWaitTime), METADATA_PARAMS(NewProp_JoinInProgressStandbyWaitTime_MetaData, ARRAY_COUNT(NewProp_JoinInProgressStandbyWaitTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing = { UE4CodeGen_Private::EPropertyClass::Float, "PercentForBadPing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, PercentForBadPing), METADATA_PARAMS(NewProp_PercentForBadPing_MetaData, ARRAY_COUNT(NewProp_PercentForBadPing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby = { UE4CodeGen_Private::EPropertyClass::Float, "PercentMissingForTxStandby", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, PercentMissingForTxStandby), METADATA_PARAMS(NewProp_PercentMissingForTxStandby_MetaData, ARRAY_COUNT(NewProp_PercentMissingForTxStandby_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby = { UE4CodeGen_Private::EPropertyClass::Float, "PercentMissingForRxStandby", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, PercentMissingForRxStandby), METADATA_PARAMS(NewProp_PercentMissingForRxStandby_MetaData, ARRAY_COUNT(NewProp_PercentMissingForRxStandby_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "BadPingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, BadPingThreshold), METADATA_PARAMS(NewProp_BadPingThreshold_MetaData, ARRAY_COUNT(NewProp_BadPingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The amount of time without packets before triggering the cheat code" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime = { UE4CodeGen_Private::EPropertyClass::Float, "StandbyTxCheatTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, StandbyTxCheatTime), METADATA_PARAMS(NewProp_StandbyTxCheatTime_MetaData, ARRAY_COUNT(NewProp_StandbyTxCheatTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "The amount of time without packets before triggering the cheat code" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime = { UE4CodeGen_Private::EPropertyClass::Float, "StandbyRxCheatTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, StandbyRxCheatTime), METADATA_PARAMS(NewProp_StandbyRxCheatTime_MetaData, ARRAY_COUNT(NewProp_StandbyRxCheatTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStandbyCheatTriggered_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Used to determine whether we've already caught a cheat or not" },
			};
#endif
			auto NewProp_bHasStandbyCheatTriggered_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->bHasStandbyCheatTriggered = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStandbyCheatTriggered = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStandbyCheatTriggered", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasStandbyCheatTriggered_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasStandbyCheatTriggered_MetaData, ARRAY_COUNT(NewProp_bHasStandbyCheatTriggered_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Used to determine if checking for standby cheats should occur" },
			};
#endif
			auto NewProp_bIsStandbyCheckingEnabled_SetBit = [](void* Obj){ ((AGameNetworkManager*)Obj)->bIsStandbyCheckingEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStandbyCheckingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AGameNetworkManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStandbyCheckingEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStandbyCheckingEnabled_MetaData, ARRAY_COUNT(NewProp_bIsStandbyCheckingEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Maximum bandwidth dynamically set per connection" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDynamicBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MaxDynamicBandwidth), METADATA_PARAMS(NewProp_MaxDynamicBandwidth_MetaData, ARRAY_COUNT(NewProp_MaxDynamicBandwidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Minimum bandwidth dynamically set per connection" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "MinDynamicBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, MinDynamicBandwidth), METADATA_PARAMS(NewProp_MinDynamicBandwidth_MetaData, ARRAY_COUNT(NewProp_MinDynamicBandwidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "TotalNetBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, TotalNetBandwidth), METADATA_PARAMS(NewProp_TotalNetBandwidth_MetaData, ARRAY_COUNT(NewProp_TotalNetBandwidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastNetSpeedUpdateTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Last time netspeed was updated for server (by client entering or leaving)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastNetSpeedUpdateTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastNetSpeedUpdateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, LastNetSpeedUpdateTime), METADATA_PARAMS(NewProp_LastNetSpeedUpdateTime_MetaData, ARRAY_COUNT(NewProp_LastNetSpeedUpdateTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustedNetSpeed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "ToolTip", "Current adjusted net speed - Used for dynamically managing netspeed for listen servers" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AdjustedNetSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "AdjustedNetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameNetworkManager, AdjustedNetSpeed), METADATA_PARAMS(NewProp_AdjustedNetSpeed_MetaData, ARRAY_COUNT(NewProp_AdjustedNetSpeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDistanceBasedRelevancy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementTimeDiscrepancyDriftAllowance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementTimeDiscrepancyResolutionRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementTimeDiscrepancyMinTimeMargin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementTimeDiscrepancyMaxTimeMargin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMovementTimeDiscrepancyResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMovementTimeDiscrepancyDetection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientErrorUpdateRateLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientAuthorativePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientNetSendMoveThrottleOverPlayerCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientNetSendMoveThrottleAtNetSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientNetSendMoveDeltaTimeThrottled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientNetSendMoveDeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxMoveDeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAXCLIENTUPDATEINTERVAL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CLIENTADJUSTUPDATECOST,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAXNEARZEROVELOCITYSQUARED,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAXPOSITIONERRORSQUARED,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoinInProgressStandbyWaitTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentForBadPing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentMissingForTxStandby,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentMissingForRxStandby,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BadPingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandbyTxCheatTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandbyRxCheatTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasStandbyCheatTriggered,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStandbyCheckingEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDynamicBandwidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDynamicBandwidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalNetBandwidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastNetSpeedUpdateTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustedNetSpeed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameNetworkManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameNetworkManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
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
	IMPLEMENT_CLASS(AGameNetworkManager, 1912134882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameNetworkManager(Z_Construct_UClass_AGameNetworkManager, &AGameNetworkManager::StaticClass, TEXT("/Script/Engine"), TEXT("AGameNetworkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameNetworkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
