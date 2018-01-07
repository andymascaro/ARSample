// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavigationGraphNodeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNodeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode();
// End Cross Module References
	void UNavigationGraphNodeComponent::StaticRegisterNativesUNavigationGraphNodeComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister()
	{
		return UNavigationGraphNodeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavigationGraphNodeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "AI/Navigation/NavigationGraphNodeComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraphNodeComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevNodeComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraphNodeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrevNodeComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PrevNodeComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UNavigationGraphNodeComponent, PrevNodeComponent), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister, METADATA_PARAMS(NewProp_PrevNodeComponent_MetaData, ARRAY_COUNT(NewProp_PrevNodeComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodeComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraphNodeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextNodeComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NextNodeComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UNavigationGraphNodeComponent, NextNodeComponent), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister, METADATA_PARAMS(NewProp_NextNodeComponent_MetaData, ARRAY_COUNT(NewProp_NextNodeComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationGraphNodeComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavigationGraphNodeComponent, Node), Z_Construct_UScriptStruct_FNavGraphNode, METADATA_PARAMS(NewProp_Node_MetaData, ARRAY_COUNT(NewProp_Node_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevNodeComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextNodeComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavigationGraphNodeComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavigationGraphNodeComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UNavigationGraphNodeComponent, 4179818102);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationGraphNodeComponent(Z_Construct_UClass_UNavigationGraphNodeComponent, &UNavigationGraphNodeComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationGraphNodeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationGraphNodeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
