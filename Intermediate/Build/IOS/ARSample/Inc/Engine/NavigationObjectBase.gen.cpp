// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/NavigationObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationObjectBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	void ANavigationObjectBase::StaticRegisterNativesANavigationObjectBase()
	{
	}
	UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister()
	{
		return ANavigationObjectBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ANavigationObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Navigation" },
				{ "HideCategories", "Lighting LightColor Force" },
				{ "IncludePath", "Engine/NavigationObjectBase.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPIEPlayerStart_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
				{ "ToolTip", "True if this nav point was spawned to be a PIE player start." },
			};
#endif
			auto NewProp_bIsPIEPlayerStart_SetBit = [](void* Obj){ ((ANavigationObjectBase*)Obj)->bIsPIEPlayerStart = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPIEPlayerStart = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPIEPlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationObjectBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPIEPlayerStart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPIEPlayerStart_MetaData, ARRAY_COUNT(NewProp_bIsPIEPlayerStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadSprite_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
				{ "ToolTip", "Used to draw bad collision intersection in editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BadSprite = { UE4CodeGen_Private::EPropertyClass::Object, "BadSprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ANavigationObjectBase, BadSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_BadSprite_MetaData, ARRAY_COUNT(NewProp_BadSprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoodSprite_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
				{ "ToolTip", "Normal editor sprite." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoodSprite = { UE4CodeGen_Private::EPropertyClass::Object, "GoodSprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ANavigationObjectBase, GoodSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_GoodSprite_MetaData, ARRAY_COUNT(NewProp_GoodSprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapsuleComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ANavigationObjectBase, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(NewProp_CapsuleComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPIEPlayerStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BadSprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoodSprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleComponent,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationObjectBase, INavAgentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANavigationObjectBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANavigationObjectBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900081u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationObjectBase, 254382341);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationObjectBase(Z_Construct_UClass_ANavigationObjectBase, &ANavigationObjectBase::StaticClass, TEXT("/Script/Engine"), TEXT("ANavigationObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
