// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsThruster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThruster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
// End Cross Module References
	void APhysicsThruster::StaticRegisterNativesAPhysicsThruster()
	{
	}
	UClass* Z_Construct_UClass_APhysicsThruster_NoRegister()
	{
		return APhysicsThruster::StaticClass();
	}
	UClass* Z_Construct_UClass_APhysicsThruster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Collision Replication" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "PhysicsEngine/PhysicsThruster.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Attach one of these on an object using physics simulation and it will apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(APhysicsThruster, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrusterComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Physics" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Activation,Components|Activation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
				{ "ToolTip", "Thruster component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrusterComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ThrusterComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APhysicsThruster, ThrusterComponent), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(NewProp_ThrusterComponent_MetaData, ARRAY_COUNT(NewProp_ThrusterComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrusterComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhysicsThruster>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhysicsThruster::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(APhysicsThruster, 4092888546);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsThruster(Z_Construct_UClass_APhysicsThruster, &APhysicsThruster::StaticClass, TEXT("/Script/Engine"), TEXT("APhysicsThruster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsThruster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
