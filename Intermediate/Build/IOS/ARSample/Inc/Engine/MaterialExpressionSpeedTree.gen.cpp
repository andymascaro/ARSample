// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSpeedTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpeedTree() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* ESpeedTreeLODType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeLODType, Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeLODType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedTreeLODType(ESpeedTreeLODType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESpeedTreeLODType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESpeedTreeLODType_CRC() { return 1807911117U; }
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedTreeLODType"), 0, Get_Z_Construct_UEnum_Engine_ESpeedTreeLODType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STLOD_Pop", (int64)STLOD_Pop },
				{ "STLOD_Smooth", (int64)STLOD_Smooth },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "STLOD_Pop.DisplayName", "Pop" },
				{ "STLOD_Smooth.DisplayName", "Smooth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedTreeLODType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedTreeLODType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeedTreeWindType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeWindType, Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeWindType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedTreeWindType(ESpeedTreeWindType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESpeedTreeWindType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESpeedTreeWindType_CRC() { return 1608884397U; }
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedTreeWindType"), 0, Get_Z_Construct_UEnum_Engine_ESpeedTreeWindType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STW_None", (int64)STW_None },
				{ "STW_Fastest", (int64)STW_Fastest },
				{ "STW_Fast", (int64)STW_Fast },
				{ "STW_Better", (int64)STW_Better },
				{ "STW_Best", (int64)STW_Best },
				{ "STW_Palm", (int64)STW_Palm },
				{ "STW_BestPlus", (int64)STW_BestPlus },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "STW_Best.DisplayName", "Best" },
				{ "STW_BestPlus.DisplayName", "BestPlus" },
				{ "STW_Better.DisplayName", "Better" },
				{ "STW_Fast.DisplayName", "Fast" },
				{ "STW_Fastest.DisplayName", "Fastest" },
				{ "STW_None.DisplayName", "None" },
				{ "STW_Palm.DisplayName", "Palm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedTreeWindType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedTreeWindType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeedTreeGeometryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeGeometryType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedTreeGeometryType(ESpeedTreeGeometryType_StaticEnum, TEXT("/Script/Engine"), TEXT("ESpeedTreeGeometryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_CRC() { return 1408862283U; }
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedTreeGeometryType"), 0, Get_Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STG_Branch", (int64)STG_Branch },
				{ "STG_Frond", (int64)STG_Frond },
				{ "STG_Leaf", (int64)STG_Leaf },
				{ "STG_FacingLeaf", (int64)STG_FacingLeaf },
				{ "STG_Billboard", (int64)STG_Billboard },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "STG_Billboard.DisplayName", "Billboard" },
				{ "STG_Branch.DisplayName", "Branch" },
				{ "STG_FacingLeaf.DisplayName", "Facing Leaf" },
				{ "STG_Frond.DisplayName", "Frond" },
				{ "STG_Leaf.DisplayName", "Leaf" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpeedTreeGeometryType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESpeedTreeGeometryType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionSpeedTree::StaticRegisterNativesUMaterialExpressionSpeedTree()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister()
	{
		return UMaterialExpressionSpeedTree::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree()
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
				{ "IncludePath", "Materials/MaterialExpressionSpeedTree.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAccurateWindVelocities_MetaData[] = {
				{ "Category", "MaterialExpressionSpeedTree" },
				{ "DisplayName", "Accurate Wind Velocities" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "ToolTip", "Support accurate velocities from wind. This will incur extra cost per vertex." },
			};
#endif
			auto NewProp_bAccurateWindVelocities_SetBit = [](void* Obj){ ((UMaterialExpressionSpeedTree*)Obj)->bAccurateWindVelocities = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccurateWindVelocities = { UE4CodeGen_Private::EPropertyClass::Bool, "bAccurateWindVelocities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMaterialExpressionSpeedTree), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAccurateWindVelocities_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAccurateWindVelocities_MetaData, ARRAY_COUNT(NewProp_bAccurateWindVelocities_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardThreshold_MetaData[] = {
				{ "Category", "MaterialExpressionSpeedTree" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "DisplayName", "Billboard Threshold" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "ToolTip", "The threshold for triangles to be removed from the bilboard mesh when not facing the camera (0 = none pass, 1 = all pass)." },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BillboardThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BillboardThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, BillboardThreshold), METADATA_PARAMS(NewProp_BillboardThreshold_MetaData, ARRAY_COUNT(NewProp_BillboardThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[] = {
				{ "Category", "MaterialExpressionSpeedTree" },
				{ "DisplayName", "LOD Type" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "ToolTip", "The type of LOD to use" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODType = { UE4CodeGen_Private::EPropertyClass::Byte, "LODType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODType), Z_Construct_UEnum_Engine_ESpeedTreeLODType, METADATA_PARAMS(NewProp_LODType_MetaData, ARRAY_COUNT(NewProp_LODType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindType_MetaData[] = {
				{ "Category", "MaterialExpressionSpeedTree" },
				{ "DisplayName", "Wind Type" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "ToolTip", "The type of wind effect used on this tree. This can only go as high as it was in the SpeedTree Modeler, but you can set it to a lower option for lower quality wind and faster rendering." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindType = { UE4CodeGen_Private::EPropertyClass::Byte, "WindType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindType), Z_Construct_UEnum_Engine_ESpeedTreeWindType, METADATA_PARAMS(NewProp_WindType_MetaData, ARRAY_COUNT(NewProp_WindType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[] = {
				{ "Category", "MaterialExpressionSpeedTree" },
				{ "DisplayName", "Geometry Type" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
				{ "ToolTip", "The type of SpeedTree geometry on which this material will be used" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometryType = { UE4CodeGen_Private::EPropertyClass::Byte, "GeometryType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryType), Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, METADATA_PARAMS(NewProp_GeometryType_MetaData, ARRAY_COUNT(NewProp_GeometryType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAccurateWindVelocities,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BillboardThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WindType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometryType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSpeedTree>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSpeedTree::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionSpeedTree, 3138777268);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSpeedTree(Z_Construct_UClass_UMaterialExpressionSpeedTree, &UMaterialExpressionSpeedTree::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSpeedTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSpeedTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
