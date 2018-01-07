// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DemoNetConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetConnection();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDemoNetConnection::StaticRegisterNativesUDemoNetConnection()
	{
	}
	UClass* Z_Construct_UClass_UDemoNetConnection_NoRegister()
	{
		return UDemoNetConnection::StaticClass();
	}
	UClass* Z_Construct_UClass_UDemoNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNetConnection,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/DemoNetConnection.h" },
				{ "ModuleRelativePath", "Classes/Engine/DemoNetConnection.h" },
				{ "ToolTip", "Simulated network connection for recording and playing back game sessions." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDemoNetConnection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDemoNetConnection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Cu,
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
	IMPLEMENT_CLASS(UDemoNetConnection, 1374043933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoNetConnection(Z_Construct_UClass_UDemoNetConnection, &UDemoNetConnection::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
