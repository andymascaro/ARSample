// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ActorChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UActorChannel::StaticRegisterNativesUActorChannel()
	{
	}
	UClass* Z_Construct_UClass_UActorChannel_NoRegister()
	{
		return UActorChannel::StaticClass();
	}
	UClass* Z_Construct_UClass_UActorChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UChannel,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/ActorChannel.h" },
				{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A channel for exchanging actor and its subobject's properties and RPCs.\n\nActorChannel manages the creation and lifetime of a replicated actor. Actual replication of properties and RPCs\nactually happens in FObjectReplicator now (see DataReplication.h).\n\nAn ActorChannel bunch looks like this:\n\n            |----------------------|---------------------------------------------------------------------------|\n            | SpawnInfo                    | (Spawn Info) Initial bunch only                                           |\n            |  -Actor Class        |        -Created by ActorChannel                                                   |\n            |  -Spawn Loc/Rot      |                                                                           |\n     | NetGUID assigns      |                                                                           |\n            |  -Actor NetGUID      |                                                                           |\n            |  -Component NetGUIDs |                                                                           |\n            |----------------------|---------------------------------------------------------------------------|\n            |                      |                                                                           |\n            |----------------------|---------------------------------------------------------------------------|\n            | NetGUID ObjRef       | (Content chunks) x number of replicating objects (Actor + any components) |\n            |                      |                -Each chunk created by its own FObjectReplicator instance.         |\n            |----------------------|---------------------------------------------------------------------------|\n     |                      |                                                                                  |\n            | Properties...        |                                                                           |\n            |                      |                                                                               |\n            | RPCs...              |                                                                           |\n     |                      |                                                                           |\n     |----------------------|---------------------------------------------------------------------------|\n            | </End Tag>           |                                                                           |\n            |----------------------|---------------------------------------------------------------------------|" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
				{ "ToolTip", "Variables." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UActorChannel, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Actor_MetaData, ARRAY_COUNT(NewProp_Actor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UActorChannel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UActorChannel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UActorChannel, 578385349);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorChannel(Z_Construct_UClass_UActorChannel, &UActorChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UActorChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
