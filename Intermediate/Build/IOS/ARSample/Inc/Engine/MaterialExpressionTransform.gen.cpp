// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTransform() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EMaterialVectorCoordTransform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialVectorCoordTransform"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialVectorCoordTransform(EMaterialVectorCoordTransform_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialVectorCoordTransform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_CRC() { return 3052559553U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialVectorCoordTransform"), 0, Get_Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRANSFORM_Tangent", (int64)TRANSFORM_Tangent },
				{ "TRANSFORM_Local", (int64)TRANSFORM_Local },
				{ "TRANSFORM_World", (int64)TRANSFORM_World },
				{ "TRANSFORM_View", (int64)TRANSFORM_View },
				{ "TRANSFORM_Camera", (int64)TRANSFORM_Camera },
				{ "TRANSFORM_ParticleWorld", (int64)TRANSFORM_ParticleWorld },
				{ "TRANSFORM_MAX", (int64)TRANSFORM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
				{ "TRANSFORM_Camera.DisplayName", "Camera Space" },
				{ "TRANSFORM_Camera.ToolTip", "Camera space" },
				{ "TRANSFORM_Local.DisplayName", "Local Space" },
				{ "TRANSFORM_Local.ToolTip", "Local space (relative to the rendered object, = object space)" },
				{ "TRANSFORM_ParticleWorld.DisplayName", "Mesh particle space" },
				{ "TRANSFORM_ParticleWorld.ToolTip", "Particle space" },
				{ "TRANSFORM_Tangent.DisplayName", "Tangent Space" },
				{ "TRANSFORM_Tangent.ToolTip", "Tangent space (relative to the surface)" },
				{ "TRANSFORM_View.DisplayName", "View Space" },
				{ "TRANSFORM_View.ToolTip", "View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes)" },
				{ "TRANSFORM_World.DisplayName", "World Space" },
				{ "TRANSFORM_World.ToolTip", "World space, a unit is 1cm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialVectorCoordTransform",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialVectorCoordTransform",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMaterialVectorCoordTransformSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialVectorCoordTransformSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialVectorCoordTransformSource(EMaterialVectorCoordTransformSource_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialVectorCoordTransformSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_CRC() { return 1027609788U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialVectorCoordTransformSource"), 0, Get_Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRANSFORMSOURCE_Tangent", (int64)TRANSFORMSOURCE_Tangent },
				{ "TRANSFORMSOURCE_Local", (int64)TRANSFORMSOURCE_Local },
				{ "TRANSFORMSOURCE_World", (int64)TRANSFORMSOURCE_World },
				{ "TRANSFORMSOURCE_View", (int64)TRANSFORMSOURCE_View },
				{ "TRANSFORMSOURCE_Camera", (int64)TRANSFORMSOURCE_Camera },
				{ "TRANSFORMSOURCE_ParticleWorld", (int64)TRANSFORMSOURCE_ParticleWorld },
				{ "TRANSFORMSOURCE_MAX", (int64)TRANSFORMSOURCE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
				{ "TRANSFORMSOURCE_Camera.DisplayName", "Camera Space" },
				{ "TRANSFORMSOURCE_Camera.ToolTip", "Camera space" },
				{ "TRANSFORMSOURCE_Local.DisplayName", "Local Space" },
				{ "TRANSFORMSOURCE_Local.ToolTip", "Local space (relative to the rendered object, = object space)" },
				{ "TRANSFORMSOURCE_ParticleWorld.DisplayName", "Mesh particle space" },
				{ "TRANSFORMSOURCE_ParticleWorld.ToolTip", "Particle space" },
				{ "TRANSFORMSOURCE_Tangent.DisplayName", "Tangent Space" },
				{ "TRANSFORMSOURCE_Tangent.ToolTip", "Tangent space (relative to the surface)" },
				{ "TRANSFORMSOURCE_View.DisplayName", "View Space" },
				{ "TRANSFORMSOURCE_View.ToolTip", "View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes)" },
				{ "TRANSFORMSOURCE_World.DisplayName", "World Space" },
				{ "TRANSFORMSOURCE_World.ToolTip", "World space, a unit is 1cm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialVectorCoordTransformSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialVectorCoordTransformSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionTransform::StaticRegisterNativesUMaterialExpressionTransform()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister()
	{
		return UMaterialExpressionTransform::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTransform()
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
				{ "IncludePath", "Materials/MaterialExpressionTransform.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
				{ "Category", "MaterialExpressionTransform" },
				{ "DisplayName", "Destination" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
				{ "ToolTip", "Destination coordinate space of the FVector" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType = { UE4CodeGen_Private::EPropertyClass::Byte, "TransformType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTransform, TransformType), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform, METADATA_PARAMS(NewProp_TransformType_MetaData, ARRAY_COUNT(NewProp_TransformType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSourceType_MetaData[] = {
				{ "Category", "MaterialExpressionTransform" },
				{ "DisplayName", "Source" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
				{ "ToolTip", "Source coordinate space of the FVector" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSourceType = { UE4CodeGen_Private::EPropertyClass::Byte, "TransformSourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTransform, TransformSourceType), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource, METADATA_PARAMS(NewProp_TransformSourceType_MetaData, ARRAY_COUNT(NewProp_TransformSourceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
				{ "ToolTip", "input expression for this transform" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTransform, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformSourceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTransform>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTransform::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionTransform, 2353516852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTransform(Z_Construct_UClass_UMaterialExpressionTransform, &UMaterialExpressionTransform::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTransform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
