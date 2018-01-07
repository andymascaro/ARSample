// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/BrushComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	void UBrushComponent::StaticRegisterNativesUBrushComponent()
	{
	}
	UClass* Z_Construct_UClass_UBrushComponent_NoRegister()
	{
		return UBrushComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBrushComponent()
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
				{ "HideCategories", "Physics Lighting LOD Rendering TextureStreaming Transform Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/BrushComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
				{ "ShowCategories", "Rendering|Material" },
				{ "ToolTip", "A brush component defines a shape that can be modified within the editor. They are used both as part of BSP building, and for volumes.\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Brushes" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePivot_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
				{ "ToolTip", "Local space translation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrePivot = { UE4CodeGen_Private::EPropertyClass::Struct, "PrePivot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UBrushComponent, PrePivot_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PrePivot_MetaData, ARRAY_COUNT(NewProp_PrePivot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushBodySetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
				{ "ToolTip", "Description of collision" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushBodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BrushBodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBrushComponent, BrushBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BrushBodySetup_MetaData, ARRAY_COUNT(NewProp_BrushBodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Object, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBrushComponent, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(NewProp_Brush_MetaData, ARRAY_COUNT(NewProp_Brush_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrePivot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushBodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brush,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBrushComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBrushComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A81080u,
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
	IMPLEMENT_CLASS(UBrushComponent, 2168479368);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushComponent(Z_Construct_UClass_UBrushComponent, &UBrushComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBrushComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
