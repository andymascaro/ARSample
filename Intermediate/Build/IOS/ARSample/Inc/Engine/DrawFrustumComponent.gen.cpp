// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/DrawFrustumComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawFrustumComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UDrawFrustumComponent::StaticRegisterNativesUDrawFrustumComponent()
	{
	}
	UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister()
	{
		return UDrawFrustumComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDrawFrustumComponent()
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
				{ "HideCategories", "Object Mobility Trigger" },
				{ "IncludePath", "Components/DrawFrustumComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "Category", "DrawFrustumComponent" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "optional texture to show on the near plane" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumEndDist_MetaData[] = {
				{ "Category", "DrawFrustumComponent" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "Distance from origin to stop drawing the frustum." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumEndDist = { UE4CodeGen_Private::EPropertyClass::Float, "FrustumEndDist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumEndDist), METADATA_PARAMS(NewProp_FrustumEndDist_MetaData, ARRAY_COUNT(NewProp_FrustumEndDist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumStartDist_MetaData[] = {
				{ "Category", "DrawFrustumComponent" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "Distance from origin to start drawing the frustum." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumStartDist = { UE4CodeGen_Private::EPropertyClass::Float, "FrustumStartDist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumStartDist), METADATA_PARAMS(NewProp_FrustumStartDist_MetaData, ARRAY_COUNT(NewProp_FrustumStartDist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumAspectRatio_MetaData[] = {
				{ "Category", "DrawFrustumComponent" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "Ratio of horizontal size over vertical size." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumAspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "FrustumAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAspectRatio), METADATA_PARAMS(NewProp_FrustumAspectRatio_MetaData, ARRAY_COUNT(NewProp_FrustumAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumAngle_MetaData[] = {
				{ "Category", "DrawFrustumComponent" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "Angle of longest dimension of view shape.\nIf the angle is 0 then an orthographic projection is used" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumAngle = { UE4CodeGen_Private::EPropertyClass::Float, "FrustumAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAngle), METADATA_PARAMS(NewProp_FrustumAngle_MetaData, ARRAY_COUNT(NewProp_FrustumAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumColor_MetaData[] = {
				{ "Category", "DrawFrustumComponent" },
				{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
				{ "ToolTip", "Color to draw the wireframe frustum." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FrustumColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_FrustumColor_MetaData, ARRAY_COUNT(NewProp_FrustumColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrustumEndDist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrustumStartDist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrustumAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrustumAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrustumColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDrawFrustumComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDrawFrustumComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A83080u,
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
	IMPLEMENT_CLASS(UDrawFrustumComponent, 635285662);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawFrustumComponent(Z_Construct_UClass_UDrawFrustumComponent, &UDrawFrustumComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDrawFrustumComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawFrustumComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
