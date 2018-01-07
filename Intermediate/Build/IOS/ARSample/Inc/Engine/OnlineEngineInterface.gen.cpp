// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Net/OnlineEngineInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEngineInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UOnlineEngineInterface::StaticRegisterNativesUOnlineEngineInterface()
	{
	}
	UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister()
	{
		return UOnlineEngineInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UOnlineEngineInterface()
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
				{ "IncludePath", "Net/OnlineEngineInterface.h" },
				{ "ModuleRelativePath", "Public/Net/OnlineEngineInterface.h" },
				{ "ToolTip", "Interface class between engine and OnlineSubsystem to remove dependencies between the two\nThe real work is implemented in UOnlineEngineInterfaceImpl in OnlineSubsystemUtils\nThe expectation is that this basic group of functions will not expand/change and that\nOnlineSubsystem can remain independent of the engine\n\nGames should not use this interface, use the OnlineSubsystem plugins directly\n\nBetter functionality descriptions can be found in the OnlineSubsystem interfaces\n\nAdding code here is discouraged, there is probably a better way, talk to the OGS team" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOnlineEngineInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOnlineEngineInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UOnlineEngineInterface, 874500876);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineEngineInterface(Z_Construct_UClass_UOnlineEngineInterface, &UOnlineEngineInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UOnlineEngineInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEngineInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
