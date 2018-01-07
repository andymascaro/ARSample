// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/EngineBaseTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineBaseTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkLagState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FURL();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EViewModeIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewModeIndex, Z_Construct_UPackage__Script_Engine(), TEXT("EViewModeIndex"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EViewModeIndex(EViewModeIndex_StaticEnum, TEXT("/Script/Engine"), TEXT("EViewModeIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EViewModeIndex_CRC() { return 2835403232U; }
	UEnum* Z_Construct_UEnum_Engine_EViewModeIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EViewModeIndex"), 0, Get_Z_Construct_UEnum_Engine_EViewModeIndex_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VMI_BrushWireframe", (int64)VMI_BrushWireframe },
				{ "VMI_Wireframe", (int64)VMI_Wireframe },
				{ "VMI_Unlit", (int64)VMI_Unlit },
				{ "VMI_Lit", (int64)VMI_Lit },
				{ "VMI_Lit_DetailLighting", (int64)VMI_Lit_DetailLighting },
				{ "VMI_LightingOnly", (int64)VMI_LightingOnly },
				{ "VMI_LightComplexity", (int64)VMI_LightComplexity },
				{ "VMI_ShaderComplexity", (int64)VMI_ShaderComplexity },
				{ "VMI_LightmapDensity", (int64)VMI_LightmapDensity },
				{ "VMI_LitLightmapDensity", (int64)VMI_LitLightmapDensity },
				{ "VMI_ReflectionOverride", (int64)VMI_ReflectionOverride },
				{ "VMI_VisualizeBuffer", (int64)VMI_VisualizeBuffer },
				{ "VMI_StationaryLightOverlap", (int64)VMI_StationaryLightOverlap },
				{ "VMI_CollisionPawn", (int64)VMI_CollisionPawn },
				{ "VMI_CollisionVisibility", (int64)VMI_CollisionVisibility },
				{ "VMI_LODColoration", (int64)VMI_LODColoration },
				{ "VMI_QuadOverdraw", (int64)VMI_QuadOverdraw },
				{ "VMI_PrimitiveDistanceAccuracy", (int64)VMI_PrimitiveDistanceAccuracy },
				{ "VMI_MeshUVDensityAccuracy", (int64)VMI_MeshUVDensityAccuracy },
				{ "VMI_ShaderComplexityWithQuadOverdraw", (int64)VMI_ShaderComplexityWithQuadOverdraw },
				{ "VMI_HLODColoration", (int64)VMI_HLODColoration },
				{ "VMI_GroupLODColoration", (int64)VMI_GroupLODColoration },
				{ "VMI_MaterialTextureScaleAccuracy", (int64)VMI_MaterialTextureScaleAccuracy },
				{ "VMI_RequiredTextureResolution", (int64)VMI_RequiredTextureResolution },
				{ "VMI_Max", (int64)VMI_Max },
				{ "VMI_Unknown", (int64)VMI_Unknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Define view modes to get specific show flag settings (some on, some off and some are not altered)\nDon't change the order, the ID is serialized with the editor" },
				{ "VMI_BrushWireframe.ToolTip", "Wireframe w/ brushes." },
				{ "VMI_GroupLODColoration.ToolTip", "Group item for LOD and HLOD coloration" },
				{ "VMI_HLODColoration.ToolTip", "Colored according to the current HLOD index." },
				{ "VMI_LightComplexity.ToolTip", "Colored according to light count." },
				{ "VMI_LightingOnly.ToolTip", "Lit wo/ materials." },
				{ "VMI_LightmapDensity.ToolTip", "Colored according to world-space LightMap texture density." },
				{ "VMI_Lit.ToolTip", "Lit." },
				{ "VMI_LitLightmapDensity.ToolTip", "Colored according to light count - showing lightmap texel density on texture mapped objects." },
				{ "VMI_LODColoration.ToolTip", "Colored according to the current LOD index." },
				{ "VMI_MaterialTextureScaleAccuracy.ToolTip", "Visualize the accuracy of the material texture scales used for texture streaming." },
				{ "VMI_Max.Hidden", "" },
				{ "VMI_MeshUVDensityAccuracy.ToolTip", "Visualize the accuracy of the mesh UV densities computed for texture streaming." },
				{ "VMI_PrimitiveDistanceAccuracy.ToolTip", "Visualize the accuracy of the primitive distance computed for texture streaming." },
				{ "VMI_QuadOverdraw.ToolTip", "Colored according to the quad coverage." },
				{ "VMI_RequiredTextureResolution.ToolTip", "Compare the required texture resolution to the actual resolution." },
				{ "VMI_ShaderComplexity.ToolTip", "Colored according to shader complexity." },
				{ "VMI_ShaderComplexityWithQuadOverdraw.ToolTip", "Colored according to shader complexity, including quad overdraw." },
				{ "VMI_StationaryLightOverlap.ToolTip", "Colored according to stationary light overlap." },
				{ "VMI_Unknown.Hidden", "" },
				{ "VMI_Unlit.ToolTip", "Unlit." },
				{ "VMI_Wireframe.ToolTip", "Wireframe w/ BSP." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EViewModeIndex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EViewModeIndex",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDemoPlayFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDemoPlayFailure, Z_Construct_UPackage__Script_Engine(), TEXT("EDemoPlayFailure"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDemoPlayFailure(EDemoPlayFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("EDemoPlayFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDemoPlayFailure_CRC() { return 2637649465U; }
	UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDemoPlayFailure"), 0, Get_Z_Construct_UEnum_Engine_EDemoPlayFailure_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDemoPlayFailure::Generic", (int64)EDemoPlayFailure::Generic },
				{ "EDemoPlayFailure::DemoNotFound", (int64)EDemoPlayFailure::DemoNotFound },
				{ "EDemoPlayFailure::Corrupt", (int64)EDemoPlayFailure::Corrupt },
				{ "EDemoPlayFailure::InvalidVersion", (int64)EDemoPlayFailure::InvalidVersion },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Corrupt.ToolTip", "Demo is corrupt." },
				{ "DemoNotFound.ToolTip", "Demo was not found." },
				{ "Generic.ToolTip", "A Generic failure." },
				{ "InvalidVersion.ToolTip", "Invalid version." },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Types of demo play failures broadcast from the engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDemoPlayFailure",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EDemoPlayFailure::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETravelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelType, Z_Construct_UPackage__Script_Engine(), TEXT("ETravelType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETravelType(ETravelType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETravelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETravelType_CRC() { return 233243254U; }
	UEnum* Z_Construct_UEnum_Engine_ETravelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETravelType"), 0, Get_Z_Construct_UEnum_Engine_ETravelType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRAVEL_Absolute", (int64)TRAVEL_Absolute },
				{ "TRAVEL_Partial", (int64)TRAVEL_Partial },
				{ "TRAVEL_Relative", (int64)TRAVEL_Relative },
				{ "TRAVEL_MAX", (int64)TRAVEL_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Traveling from server to server." },
				{ "TRAVEL_Absolute.ToolTip", "Absolute URL." },
				{ "TRAVEL_Partial.ToolTip", "Partial (carry name, reset server)." },
				{ "TRAVEL_Relative.ToolTip", "Relative URL." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETravelType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETravelType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETravelFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelFailure, Z_Construct_UPackage__Script_Engine(), TEXT("ETravelFailure"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETravelFailure(ETravelFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("ETravelFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETravelFailure_CRC() { return 1762123146U; }
	UEnum* Z_Construct_UEnum_Engine_ETravelFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETravelFailure"), 0, Get_Z_Construct_UEnum_Engine_ETravelFailure_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETravelFailure::NoLevel", (int64)ETravelFailure::NoLevel },
				{ "ETravelFailure::LoadMapFailure", (int64)ETravelFailure::LoadMapFailure },
				{ "ETravelFailure::InvalidURL", (int64)ETravelFailure::InvalidURL },
				{ "ETravelFailure::PackageMissing", (int64)ETravelFailure::PackageMissing },
				{ "ETravelFailure::PackageVersion", (int64)ETravelFailure::PackageVersion },
				{ "ETravelFailure::NoDownload", (int64)ETravelFailure::NoDownload },
				{ "ETravelFailure::TravelFailure", (int64)ETravelFailure::TravelFailure },
				{ "ETravelFailure::CheatCommands", (int64)ETravelFailure::CheatCommands },
				{ "ETravelFailure::PendingNetGameCreateFailure", (int64)ETravelFailure::PendingNetGameCreateFailure },
				{ "ETravelFailure::CloudSaveFailure", (int64)ETravelFailure::CloudSaveFailure },
				{ "ETravelFailure::ServerTravelFailure", (int64)ETravelFailure::ServerTravelFailure },
				{ "ETravelFailure::ClientTravelFailure", (int64)ETravelFailure::ClientTravelFailure },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CheatCommands.ToolTip", "Cheat commands have been used disabling travel" },
				{ "ClientTravelFailure.ToolTip", "There was an error during a client travel to a new map" },
				{ "CloudSaveFailure.ToolTip", "Failed to save before travel" },
				{ "InvalidURL.ToolTip", "Invalid URL specified" },
				{ "LoadMapFailure.ToolTip", "LoadMap failed on travel (about to Browse to default map)" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NoDownload.ToolTip", "A package is missing and the client is unable to download the file" },
				{ "NoLevel.ToolTip", "No level found in the loaded package" },
				{ "PackageMissing.ToolTip", "A package is missing on the client" },
				{ "PackageVersion.ToolTip", "A package version mismatch has occurred between client and server" },
				{ "PendingNetGameCreateFailure.ToolTip", "Failed to create the pending net game for travel" },
				{ "ServerTravelFailure.ToolTip", "There was an error during a server travel to a new map" },
				{ "ToolTip", "Types of server travel failures broadcast by the engine" },
				{ "TravelFailure.ToolTip", "General travel failure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETravelFailure",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETravelFailure::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENetworkLagState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkLagState, Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkLagState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENetworkLagState(ENetworkLagState_StaticEnum, TEXT("/Script/Engine"), TEXT("ENetworkLagState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENetworkLagState_CRC() { return 2345578733U; }
	UEnum* Z_Construct_UEnum_Engine_ENetworkLagState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENetworkLagState"), 0, Get_Z_Construct_UEnum_Engine_ENetworkLagState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENetworkLagState::NotLagging", (int64)ENetworkLagState::NotLagging },
				{ "ENetworkLagState::Lagging", (int64)ENetworkLagState::Lagging },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Lagging.ToolTip", "The net driver is in the process of timing out all of the client connections" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NotLagging.ToolTip", "The net driver is operating normally or it is not possible to tell if it is lagging" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENetworkLagState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENetworkLagState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENetworkFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkFailure, Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkFailure"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENetworkFailure(ENetworkFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("ENetworkFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENetworkFailure_CRC() { return 343952230U; }
	UEnum* Z_Construct_UEnum_Engine_ENetworkFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENetworkFailure"), 0, Get_Z_Construct_UEnum_Engine_ENetworkFailure_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENetworkFailure::NetDriverAlreadyExists", (int64)ENetworkFailure::NetDriverAlreadyExists },
				{ "ENetworkFailure::NetDriverCreateFailure", (int64)ENetworkFailure::NetDriverCreateFailure },
				{ "ENetworkFailure::NetDriverListenFailure", (int64)ENetworkFailure::NetDriverListenFailure },
				{ "ENetworkFailure::ConnectionLost", (int64)ENetworkFailure::ConnectionLost },
				{ "ENetworkFailure::ConnectionTimeout", (int64)ENetworkFailure::ConnectionTimeout },
				{ "ENetworkFailure::FailureReceived", (int64)ENetworkFailure::FailureReceived },
				{ "ENetworkFailure::OutdatedClient", (int64)ENetworkFailure::OutdatedClient },
				{ "ENetworkFailure::OutdatedServer", (int64)ENetworkFailure::OutdatedServer },
				{ "ENetworkFailure::PendingConnectionFailure", (int64)ENetworkFailure::PendingConnectionFailure },
				{ "ENetworkFailure::NetGuidMismatch", (int64)ENetworkFailure::NetGuidMismatch },
				{ "ENetworkFailure::NetChecksumMismatch", (int64)ENetworkFailure::NetChecksumMismatch },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ConnectionLost.ToolTip", "A connection to the net driver has been lost" },
				{ "ConnectionTimeout.ToolTip", "A connection to the net driver has timed out" },
				{ "FailureReceived.ToolTip", "The net driver received an NMT_Failure message" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NetChecksumMismatch.ToolTip", "Network checksum mismatch" },
				{ "NetDriverAlreadyExists.ToolTip", "A relevant net driver has already been created for this service" },
				{ "NetDriverCreateFailure.ToolTip", "The net driver creation failed" },
				{ "NetDriverListenFailure.ToolTip", "The net driver failed its Listen() call" },
				{ "NetGuidMismatch.ToolTip", "NetGuid mismatch" },
				{ "OutdatedClient.ToolTip", "The client needs to upgrade their game" },
				{ "OutdatedServer.ToolTip", "The server needs to upgrade their game" },
				{ "PendingConnectionFailure.ToolTip", "There was an error during connection to the game" },
				{ "ToolTip", "Types of network failures broadcast from the engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENetworkFailure",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENetworkFailure::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETickingGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETickingGroup, Z_Construct_UPackage__Script_Engine(), TEXT("ETickingGroup"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETickingGroup(ETickingGroup_StaticEnum, TEXT("/Script/Engine"), TEXT("ETickingGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETickingGroup_CRC() { return 3414349319U; }
	UEnum* Z_Construct_UEnum_Engine_ETickingGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETickingGroup"), 0, Get_Z_Construct_UEnum_Engine_ETickingGroup_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TG_PrePhysics", (int64)TG_PrePhysics },
				{ "TG_StartPhysics", (int64)TG_StartPhysics },
				{ "TG_DuringPhysics", (int64)TG_DuringPhysics },
				{ "TG_EndPhysics", (int64)TG_EndPhysics },
				{ "TG_PostPhysics", (int64)TG_PostPhysics },
				{ "TG_PostUpdateWork", (int64)TG_PostUpdateWork },
				{ "TG_LastDemotable", (int64)TG_LastDemotable },
				{ "TG_NewlySpawned", (int64)TG_NewlySpawned },
				{ "TG_MAX", (int64)TG_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "TG_DuringPhysics.DisplayName", "During Physics" },
				{ "TG_DuringPhysics.ToolTip", "Any item that can be run in parallel with our physics simulation work." },
				{ "TG_EndPhysics.DisplayName", "End Physics" },
				{ "TG_EndPhysics.Hidden", "" },
				{ "TG_EndPhysics.ToolTip", "Special tick group that ends physics simulation." },
				{ "TG_LastDemotable.DisplayName", "Last Demotable" },
				{ "TG_LastDemotable.Hidden", "" },
				{ "TG_LastDemotable.ToolTip", "Catchall for anything demoted to the end." },
				{ "TG_NewlySpawned.DisplayName", "Newly Spawned" },
				{ "TG_NewlySpawned.Hidden", "" },
				{ "TG_NewlySpawned.ToolTip", "Special tick group that is not actually a tick group. After every tick group this is repeatedly re-run until there are no more newly spawned items to run." },
				{ "TG_PostPhysics.DisplayName", "Post Physics" },
				{ "TG_PostPhysics.ToolTip", "Any item that needs rigid body and cloth simulation to be complete before being executed." },
				{ "TG_PostUpdateWork.DisplayName", "Post Update Work" },
				{ "TG_PostUpdateWork.ToolTip", "Any item that needs the update work to be done before being ticked." },
				{ "TG_PrePhysics.DisplayName", "Pre Physics" },
				{ "TG_PrePhysics.ToolTip", "Any item that needs to be executed before physics simulation starts." },
				{ "TG_StartPhysics.DisplayName", "Start Physics" },
				{ "TG_StartPhysics.Hidden", "" },
				{ "TG_StartPhysics.ToolTip", "Special tick group that starts physics simulation." },
				{ "ToolTip", "Determines which ticking group a tick function belongs to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETickingGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETickingGroup",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMouseLockMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseLockMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMouseLockMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMouseLockMode(EMouseLockMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMouseLockMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMouseLockMode_CRC() { return 1730781515U; }
	UEnum* Z_Construct_UEnum_Engine_EMouseLockMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMouseLockMode"), 0, Get_Z_Construct_UEnum_Engine_EMouseLockMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMouseLockMode::DoNotLock", (int64)EMouseLockMode::DoNotLock },
				{ "EMouseLockMode::LockOnCapture", (int64)EMouseLockMode::LockOnCapture },
				{ "EMouseLockMode::LockAlways", (int64)EMouseLockMode::LockAlways },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DoNotLock.ToolTip", "Do not lock the mouse cursor to the viewport" },
				{ "LockAlways.ToolTip", "Always lock the mouse cursor to the viewport" },
				{ "LockOnCapture.ToolTip", "Only lock the mouse cursor to the viewport when the mouse is captured" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMouseLockMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMouseLockMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMouseCaptureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseCaptureMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMouseCaptureMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMouseCaptureMode(EMouseCaptureMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMouseCaptureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMouseCaptureMode_CRC() { return 2758390304U; }
	UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMouseCaptureMode"), 0, Get_Z_Construct_UEnum_Engine_EMouseCaptureMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMouseCaptureMode::NoCapture", (int64)EMouseCaptureMode::NoCapture },
				{ "EMouseCaptureMode::CapturePermanently", (int64)EMouseCaptureMode::CapturePermanently },
				{ "EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown", (int64)EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown },
				{ "EMouseCaptureMode::CaptureDuringMouseDown", (int64)EMouseCaptureMode::CaptureDuringMouseDown },
				{ "EMouseCaptureMode::CaptureDuringRightMouseDown", (int64)EMouseCaptureMode::CaptureDuringRightMouseDown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CaptureDuringMouseDown.ToolTip", "Capture the mouse during a mouse down, releases on mouse up" },
				{ "CaptureDuringRightMouseDown.ToolTip", "Capture only when the right mouse button is down, not any of the other mouse buttons" },
				{ "CapturePermanently.ToolTip", "Capture the mouse permanently when the viewport is clicked, and consume the initial mouse down that caused the capture so it isn't processed by player input" },
				{ "CapturePermanently_IncludingInitialMouseDown.ToolTip", "Capture the mouse permanently when the viewport is clicked, and allow player input to process the mouse down that caused the capture" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NoCapture.ToolTip", "Do not capture the mouse at all" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMouseCaptureMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMouseCaptureMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInputEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInputEvent, Z_Construct_UPackage__Script_Engine(), TEXT("EInputEvent"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputEvent(EInputEvent_StaticEnum, TEXT("/Script/Engine"), TEXT("EInputEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInputEvent_CRC() { return 2163984836U; }
	UEnum* Z_Construct_UEnum_Engine_EInputEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputEvent"), 0, Get_Z_Construct_UEnum_Engine_EInputEvent_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IE_Pressed", (int64)IE_Pressed },
				{ "IE_Released", (int64)IE_Released },
				{ "IE_Repeat", (int64)IE_Repeat },
				{ "IE_DoubleClick", (int64)IE_DoubleClick },
				{ "IE_Axis", (int64)IE_Axis },
				{ "IE_MAX", (int64)IE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "EInputEvent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInputEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EInputEvent",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FExposureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposureSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ExposureSettings"), sizeof(FExposureSettings), Get_Z_Construct_UScriptStruct_FExposureSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExposureSettings(FExposureSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ExposureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExposureSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFExposureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExposureSettings")),new UScriptStruct::TCppStructOps<FExposureSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExposureSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExposureSettings"), sizeof(FExposureSettings), Get_Z_Construct_UScriptStruct_FExposureSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Settings to allow designers to override the automatic expose" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposureSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "true: fixed exposure using the LogOffset value, false: automatic eye adaptation" },
			};
#endif
			auto NewProp_bFixed_SetBit = [](void* Obj){ ((FExposureSettings*)Obj)->bFixed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixed = { UE4CodeGen_Private::EPropertyClass::Bool, "bFixed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FExposureSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFixed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFixed_MetaData, ARRAY_COUNT(NewProp_bFixed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "usually -4:/16 darker .. +4:16x brighter" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LogOffset = { UE4CodeGen_Private::EPropertyClass::Int, "LogOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExposureSettings, LogOffset), METADATA_PARAMS(NewProp_LogOffset_MetaData, ARRAY_COUNT(NewProp_LogOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFixed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogOffset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ExposureSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FExposureSettings),
				alignof(FExposureSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_CRC() { return 1083784168U; }
class UScriptStruct* FURL::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FURL_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FURL, Z_Construct_UPackage__Script_Engine(), TEXT("URL"), sizeof(FURL), Get_Z_Construct_UScriptStruct_FURL_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FURL(FURL::StaticStruct, TEXT("/Script/Engine"), TEXT("URL"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFURL
{
	FScriptStruct_Engine_StaticRegisterNativesFURL()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("URL")),new UScriptStruct::TCppStructOps<FURL>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFURL;
	UScriptStruct* Z_Construct_UScriptStruct_FURL()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FURL_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("URL"), sizeof(FURL), Get_Z_Construct_UScriptStruct_FURL_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "URL structure." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FURL>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Valid = { UE4CodeGen_Private::EPropertyClass::Int, "Valid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Valid), METADATA_PARAMS(NewProp_Valid_MetaData, ARRAY_COUNT(NewProp_Valid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Portal to enter through, default is \"\"." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Portal = { UE4CodeGen_Private::EPropertyClass::Str, "Portal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Portal), METADATA_PARAMS(NewProp_Portal_MetaData, ARRAY_COUNT(NewProp_Portal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Options." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Op = { UE4CodeGen_Private::EPropertyClass::Array, "Op", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Op), METADATA_PARAMS(NewProp_Op_MetaData, ARRAY_COUNT(NewProp_Op_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Op_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Op", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Optional place to download Map if client does not possess it" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectURL = { UE4CodeGen_Private::EPropertyClass::Str, "RedirectURL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, RedirectURL), METADATA_PARAMS(NewProp_RedirectURL_MetaData, ARRAY_COUNT(NewProp_RedirectURL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Map name, i.e. \"SkyCity\", default is \"Entry\"." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map = { UE4CodeGen_Private::EPropertyClass::Str, "Map", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Map), METADATA_PARAMS(NewProp_Map_MetaData, ARRAY_COUNT(NewProp_Map_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Optional host port." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Port), METADATA_PARAMS(NewProp_Port_MetaData, ARRAY_COUNT(NewProp_Port_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host = { UE4CodeGen_Private::EPropertyClass::Str, "Host", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Host), METADATA_PARAMS(NewProp_Host_MetaData, ARRAY_COUNT(NewProp_Host_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Protocol, i.e. \"unreal\" or \"http\"." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol = { UE4CodeGen_Private::EPropertyClass::Str, "Protocol", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FURL, Protocol), METADATA_PARAMS(NewProp_Protocol_MetaData, ARRAY_COUNT(NewProp_Protocol_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Valid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Portal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Op,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Op_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RedirectURL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Map,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Port,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Host,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Protocol,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"URL",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FURL),
				alignof(FURL),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FURL_CRC() { return 794655737U; }
class UScriptStruct* FPrimitiveComponentPostPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("PrimitiveComponentPostPhysicsTickFunction"), sizeof(FPrimitiveComponentPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction(FPrimitiveComponentPostPhysicsTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimitiveComponentPostPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimitiveComponentPostPhysicsTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimitiveComponentPostPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrimitiveComponentPostPhysicsTickFunction")),new UScriptStruct::TCppStructOps<FPrimitiveComponentPostPhysicsTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimitiveComponentPostPhysicsTickFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimitiveComponentPostPhysicsTickFunction"), sizeof(FPrimitiveComponentPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Tick function that calls UPrimitiveComponent::PostPhysicsTick\n//DEPRECATED: This struct has been deprecated. Please use your own tick functions if you need something other than the primary tick function" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimitiveComponentPostPhysicsTickFunction>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTickFunction,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PrimitiveComponentPostPhysicsTickFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPrimitiveComponentPostPhysicsTickFunction),
				alignof(FPrimitiveComponentPostPhysicsTickFunction),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_CRC() { return 2362557558U; }
class UScriptStruct* FActorComponentTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentTickFunction"), sizeof(FActorComponentTickFunction), Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorComponentTickFunction(FActorComponentTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorComponentTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorComponentTickFunction")),new UScriptStruct::TCppStructOps<FActorComponentTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorComponentTickFunction"), sizeof(FActorComponentTickFunction), Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Tick function that calls UActorComponent::ConditionalTick" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentTickFunction>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTickFunction,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActorComponentTickFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FActorComponentTickFunction),
				alignof(FActorComponentTickFunction),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_CRC() { return 1487026881U; }
class UScriptStruct* FActorTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ActorTickFunction"), sizeof(FActorTickFunction), Get_Z_Construct_UScriptStruct_FActorTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorTickFunction(FActorTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFActorTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorTickFunction")),new UScriptStruct::TCppStructOps<FActorTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorTickFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorTickFunction"), sizeof(FActorTickFunction), Get_Z_Construct_UScriptStruct_FActorTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Tick function that calls AActor::TickActor" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTickFunction>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FTickFunction,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActorTickFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FActorTickFunction),
				alignof(FActorTickFunction),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_CRC() { return 1159898126U; }
class UScriptStruct* FTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("TickFunction"), sizeof(FTickFunction), Get_Z_Construct_UScriptStruct_FTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickFunction(FTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("TickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickFunction")),new UScriptStruct::TCppStructOps<FTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTickFunction;
	UScriptStruct* Z_Construct_UScriptStruct_FTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickFunction"), sizeof(FTickFunction), Get_Z_Construct_UScriptStruct_FTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Abstract Base class for all tick functions." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickFunction>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
				{ "Category", "Tick" },
				{ "DisplayName", "Tick Interval (secs)" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval = { UE4CodeGen_Private::EPropertyClass::Float, "TickInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FTickFunction, TickInterval), METADATA_PARAMS(NewProp_TickInterval_MetaData, ARRAY_COUNT(NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTickOnDedicatedServer_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "If we allow this tick to run on a dedicated server" },
			};
#endif
			auto NewProp_bAllowTickOnDedicatedServer_SetBit = [](void* Obj){ ((FTickFunction*)Obj)->bAllowTickOnDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTickOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowTickOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTickFunction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowTickOnDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowTickOnDedicatedServer_MetaData, ARRAY_COUNT(NewProp_bAllowTickOnDedicatedServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithTickEnabled_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "If true, this tick function will start enabled, but can be disabled later on." },
			};
#endif
			auto NewProp_bStartWithTickEnabled_SetBit = [](void* Obj){ ((FTickFunction*)Obj)->bStartWithTickEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithTickEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartWithTickEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTickFunction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStartWithTickEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStartWithTickEnabled_MetaData, ARRAY_COUNT(NewProp_bStartWithTickEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "If false, this tick function will never be registered and will never tick. Only settable in defaults." },
			};
#endif
			auto NewProp_bCanEverTick_SetBit = [](void* Obj){ ((FTickFunction*)Obj)->bCanEverTick = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEverTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTickFunction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanEverTick_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanEverTick_MetaData, ARRAY_COUNT(NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickEvenWhenPaused_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. *" },
			};
#endif
			auto NewProp_bTickEvenWhenPaused_SetBit = [](void* Obj){ ((FTickFunction*)Obj)->bTickEvenWhenPaused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickEvenWhenPaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bTickEvenWhenPaused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTickFunction), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTickEvenWhenPaused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTickEvenWhenPaused_MetaData, ARRAY_COUNT(NewProp_bTickEvenWhenPaused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTickGroup_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.\n\n@see ETickingGroup" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndTickGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "EndTickGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(FTickFunction, EndTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(NewProp_EndTickGroup_MetaData, ARRAY_COUNT(NewProp_EndTickGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[] = {
				{ "Category", "Tick" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update.\nGiven prerequisites, the tick may be delayed.\n\n@see ETickingGroup\n@see FTickFunction::AddPrerequisite()" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "TickGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(FTickFunction, TickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(NewProp_TickGroup_MetaData, ARRAY_COUNT(NewProp_TickGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowTickOnDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStartWithTickEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanEverTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTickEvenWhenPaused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTickGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickGroup,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TickFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FTickFunction),
				alignof(FTickFunction),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickFunction_CRC() { return 3419495030U; }
class UScriptStruct* FTickPrerequisite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickPrerequisite, Z_Construct_UPackage__Script_Engine(), TEXT("TickPrerequisite"), sizeof(FTickPrerequisite), Get_Z_Construct_UScriptStruct_FTickPrerequisite_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickPrerequisite(FTickPrerequisite::StaticStruct, TEXT("/Script/Engine"), TEXT("TickPrerequisite"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite
{
	FScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickPrerequisite")),new UScriptStruct::TCppStructOps<FTickPrerequisite>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite;
	UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickPrerequisite"), sizeof(FTickPrerequisite), Get_Z_Construct_UScriptStruct_FTickPrerequisite_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "This is small structure to hold prerequisite tick functions" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickPrerequisite>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TickPrerequisite",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTickPrerequisite),
				alignof(FTickPrerequisite),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_CRC() { return 1730937800U; }
	void UEngineBaseTypes::StaticRegisterNativesUEngineBaseTypes()
	{
	}
	UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister()
	{
		return UEngineBaseTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_UEngineBaseTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/EngineBaseTypes.h" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEngineBaseTypes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEngineBaseTypes::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000081u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineBaseTypes, 3914235278);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineBaseTypes(Z_Construct_UClass_UEngineBaseTypes, &UEngineBaseTypes::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineBaseTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineBaseTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
