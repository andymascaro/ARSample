// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionViewProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionViewProperty() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExposedViewProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* EMaterialExposedViewProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExposedViewProperty, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExposedViewProperty"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialExposedViewProperty(EMaterialExposedViewProperty_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialExposedViewProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_CRC() { return 2190863224U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialExposedViewProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialExposedViewProperty"), 0, Get_Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MEVP_BufferSize", (int64)MEVP_BufferSize },
				{ "MEVP_FieldOfView", (int64)MEVP_FieldOfView },
				{ "MEVP_TanHalfFieldOfView", (int64)MEVP_TanHalfFieldOfView },
				{ "MEVP_ViewSize", (int64)MEVP_ViewSize },
				{ "MEVP_WorldSpaceViewPosition", (int64)MEVP_WorldSpaceViewPosition },
				{ "MEVP_WorldSpaceCameraPosition", (int64)MEVP_WorldSpaceCameraPosition },
				{ "MEVP_ViewportOffset", (int64)MEVP_ViewportOffset },
				{ "MEVP_MAX", (int64)MEVP_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MEVP_BufferSize.DisplayName", "Render Target Size" },
				{ "MEVP_BufferSize.ToolTip", "Horizontal and vertical size of the view's buffer in pixels" },
				{ "MEVP_FieldOfView.DisplayName", "Field Of View" },
				{ "MEVP_FieldOfView.ToolTip", "Horizontal and vertical field of view angles in radian" },
				{ "MEVP_TanHalfFieldOfView.DisplayName", "Tan(0.5 * Field Of View)" },
				{ "MEVP_TanHalfFieldOfView.ToolTip", "Tan(FieldOfView * 0.5)" },
				{ "MEVP_ViewportOffset.DisplayName", "Viewport Offset" },
				{ "MEVP_ViewportOffset.ToolTip", "Horizontal and vertical position of the viewport in pixels within the buffer." },
				{ "MEVP_ViewSize.DisplayName", "View Size" },
				{ "MEVP_ViewSize.ToolTip", "Horizontal and vertical size of the view in pixels" },
				{ "MEVP_WorldSpaceCameraPosition.DisplayName", "Camera Position (Absolute World Space)" },
				{ "MEVP_WorldSpaceCameraPosition.ToolTip", "Absolute world space camera position" },
				{ "MEVP_WorldSpaceViewPosition.DisplayName", "View Position (Absolute World Space)" },
				{ "MEVP_WorldSpaceViewPosition.ToolTip", "Absolute world space view position (differs from the camera position in the shadow passes)" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialExposedViewProperty",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialExposedViewProperty",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionViewProperty::StaticRegisterNativesUMaterialExpressionViewProperty()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister()
	{
		return UMaterialExpressionViewProperty::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionViewProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionViewProperty.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
				{ "Category", "UMaterialExpressionViewProperty" },
				{ "DisplayName", "View Property" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
				{ "ToolTip", "View input property to be accessed" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property = { UE4CodeGen_Private::EPropertyClass::Byte, "Property", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionViewProperty, Property), Z_Construct_UEnum_Engine_EMaterialExposedViewProperty, METADATA_PARAMS(NewProp_Property_MetaData, ARRAY_COUNT(NewProp_Property_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Property,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionViewProperty>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionViewProperty::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionViewProperty, 1772974789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionViewProperty(Z_Construct_UClass_UMaterialExpressionViewProperty, &UMaterialExpressionViewProperty::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionViewProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionViewProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
