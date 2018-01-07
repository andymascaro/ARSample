// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/NetConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();
// End Cross Module References
	void UNetConnection::StaticRegisterNativesUNetConnection()
	{
	}
	UClass* Z_Construct_UClass_UNetConnection_NoRegister()
	{
		return UNetConnection::StaticClass();
	}
	UClass* Z_Construct_UClass_UNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPlayer,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/NetConnection.h" },
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Delegates" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelsToTick_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "The channels that need ticking. This will be a subset of OpenChannels, only including\nchannels that need to process either dormancy or queued bunches. Should be a significant\noptimization over ticking and calling virtual functions on the potentially hundreds of\nOpenChannels every frame." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelsToTick = { UE4CodeGen_Private::EPropertyClass::Array, "ChannelsToTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, ChannelsToTick), METADATA_PARAMS(NewProp_ChannelsToTick_MetaData, ARRAY_COUNT(NewProp_ChannelsToTick_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChannelsToTick_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChannelsToTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReceiveTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "Internal." },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_LastReceiveTime = { UE4CodeGen_Private::EPropertyClass::Double, "LastReceiveTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, LastReceiveTime), METADATA_PARAMS(NewProp_LastReceiveTime_MetaData, ARRAY_COUNT(NewProp_LastReceiveTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "Net id of remote player on this connection. Only valid on client connections (server side)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(NewProp_PlayerId_MetaData, ARRAY_COUNT(NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalAck_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "Maximum packet size." },
			};
#endif
			auto NewProp_InternalAck_SetBit = [](void* Obj){ ((UNetConnection*)Obj)->InternalAck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InternalAck = { UE4CodeGen_Private::EPropertyClass::Bool, "InternalAck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNetConnection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InternalAck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_InternalAck_MetaData, ARRAY_COUNT(NewProp_InternalAck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPacket_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPacket = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPacket", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, MaxPacket), METADATA_PARAMS(NewProp_MaxPacket_MetaData, ARRAY_COUNT(NewProp_MaxPacket_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "Reference to controlling actor (usually PlayerController)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwningActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_OwningActor_MetaData, ARRAY_COUNT(NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "The actor that is currently being viewed/controlled by the owning controller" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "ViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ViewTarget_MetaData, ARRAY_COUNT(NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentTemporaries_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "This actor is bNetTemporary, which means it should never be replicated after it's initial packet is complete" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SentTemporaries = { UE4CodeGen_Private::EPropertyClass::Array, "SentTemporaries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, SentTemporaries), METADATA_PARAMS(NewProp_SentTemporaries_MetaData, ARRAY_COUNT(NewProp_SentTemporaries_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SentTemporaries_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SentTemporaries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenChannels_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OpenChannels = { UE4CodeGen_Private::EPropertyClass::Array, "OpenChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, OpenChannels), METADATA_PARAMS(NewProp_OpenChannels_MetaData, ARRAY_COUNT(NewProp_OpenChannels_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenChannels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OpenChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "Package map between local and remote. (negotiates net serialization)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PackageMap = { UE4CodeGen_Private::EPropertyClass::Object, "PackageMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, PackageMap), Z_Construct_UClass_UPackageMap, METADATA_PARAMS(NewProp_PackageMap_MetaData, ARRAY_COUNT(NewProp_PackageMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageMapClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "The class name for the PackageMap to be loaded" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PackageMapClass = { UE4CodeGen_Private::EPropertyClass::Class, "PackageMapClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, PackageMapClass), Z_Construct_UClass_UPackageMap, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PackageMapClass_MetaData, ARRAY_COUNT(NewProp_PackageMapClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "Owning net driver" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Driver = { UE4CodeGen_Private::EPropertyClass::Object, "Driver", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetConnection, Driver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(NewProp_Driver_MetaData, ARRAY_COUNT(NewProp_Driver_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
				{ "ToolTip", "child connections for secondary viewports" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UNetConnection, Children), METADATA_PARAMS(NewProp_Children_MetaData, ARRAY_COUNT(NewProp_Children_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UChildConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelsToTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelsToTick_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastReceiveTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalAck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPacket,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SentTemporaries,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SentTemporaries_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenChannels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageMapClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Driver,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNetConnection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNetConnection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0008008Du,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetConnection, 2425104981);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetConnection(Z_Construct_UClass_UNetConnection, &UNetConnection::StaticClass, TEXT("/Script/Engine"), TEXT("UNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
