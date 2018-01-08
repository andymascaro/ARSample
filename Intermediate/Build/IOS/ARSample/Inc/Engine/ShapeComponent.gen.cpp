// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ShapeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UShapeComponent::StaticRegisterNativesUShapeComponent()
	{
	}
	UClass* Z_Construct_UClass_UShapeComponent_NoRegister()
	{
		return UShapeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UShapeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/ShapeComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "Navigation area type (empty = default obstacle)" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UShapeComponent, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AreaClass_MetaData, ARRAY_COUNT(NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamicObstacle_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data" },
			};
#endif
			auto NewProp_bDynamicObstacle_SetBit = [](void* Obj){ ((UShapeComponent*)Obj)->bDynamicObstacle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamicObstacle = { UE4CodeGen_Private::EPropertyClass::Bool, "bDynamicObstacle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UShapeComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDynamicObstacle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDynamicObstacle_MetaData, ARRAY_COUNT(NewProp_bDynamicObstacle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldCollideWhenPlacing_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "If true it allows Collision when placing even if collision is not enabled" },
			};
#endif
			auto NewProp_bShouldCollideWhenPlacing_SetBit = [](void* Obj){ ((UShapeComponent*)Obj)->bShouldCollideWhenPlacing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldCollideWhenPlacing = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldCollideWhenPlacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UShapeComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldCollideWhenPlacing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldCollideWhenPlacing_MetaData, ARRAY_COUNT(NewProp_bShouldCollideWhenPlacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyIfSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "Only show this component if the actor is selected" },
			};
#endif
			auto NewProp_bDrawOnlyIfSelected_SetBit = [](void* Obj){ ((UShapeComponent*)Obj)->bDrawOnlyIfSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyIfSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawOnlyIfSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UShapeComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawOnlyIfSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawOnlyIfSelected_MetaData, ARRAY_COUNT(NewProp_bDrawOnlyIfSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeBodySetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "Description of collision" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShapeBodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "ShapeBodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UShapeComponent, ShapeBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_ShapeBodySetup_MetaData, ARRAY_COUNT(NewProp_ShapeBodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeColor_MetaData[] = {
				{ "Category", "Shape" },
				{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
				{ "ToolTip", "Color used to draw the shape." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapeColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UShapeComponent, ShapeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_ShapeColor_MetaData, ARRAY_COUNT(NewProp_ShapeColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDynamicObstacle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldCollideWhenPlacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawOnlyIfSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapeBodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShapeColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UShapeComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UShapeComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01081u,
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
	IMPLEMENT_CLASS(UShapeComponent, 2658415839);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShapeComponent(Z_Construct_UClass_UShapeComponent, &UShapeComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UShapeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
