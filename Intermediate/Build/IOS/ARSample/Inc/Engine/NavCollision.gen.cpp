// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCollision() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollision_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollision();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
// End Cross Module References
class UScriptStruct* FNavCollisionBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionBox, Z_Construct_UPackage__Script_Engine(), TEXT("NavCollisionBox"), sizeof(FNavCollisionBox), Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavCollisionBox(FNavCollisionBox::StaticStruct, TEXT("/Script/Engine"), TEXT("NavCollisionBox"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavCollisionBox
{
	FScriptStruct_Engine_StaticRegisterNativesFNavCollisionBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavCollisionBox")),new UScriptStruct::TCppStructOps<FNavCollisionBox>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavCollisionBox;
	UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavCollisionBox"), sizeof(FNavCollisionBox), Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCollisionBox>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
				{ "Category", "Box" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionBox, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Extent_MetaData, ARRAY_COUNT(NewProp_Extent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "Category", "Box" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionBox, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavCollisionBox",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavCollisionBox),
				alignof(FNavCollisionBox),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC() { return 1095885337U; }
class UScriptStruct* FNavCollisionCylinder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionCylinder, Z_Construct_UPackage__Script_Engine(), TEXT("NavCollisionCylinder"), sizeof(FNavCollisionCylinder), Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavCollisionCylinder(FNavCollisionCylinder::StaticStruct, TEXT("/Script/Engine"), TEXT("NavCollisionCylinder"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavCollisionCylinder
{
	FScriptStruct_Engine_StaticRegisterNativesFNavCollisionCylinder()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavCollisionCylinder")),new UScriptStruct::TCppStructOps<FNavCollisionCylinder>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavCollisionCylinder;
	UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavCollisionCylinder"), sizeof(FNavCollisionCylinder), Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCollisionCylinder>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Cylinder" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionCylinder, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Cylinder" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionCylinder, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "Category", "Cylinder" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionCylinder, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"NavCollisionCylinder",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FNavCollisionCylinder),
				alignof(FNavCollisionCylinder),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC() { return 2060595314U; }
	void UNavCollision::StaticRegisterNativesUNavCollision()
	{
	}
	UClass* Z_Construct_UClass_UNavCollision_NoRegister()
	{
		return UNavCollision::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavCollision.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGatherConvexGeometry_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
				{ "ToolTip", "If set, convex collisions will be exported offline for faster runtime navmesh building (increases memory usage)" },
			};
#endif
			auto NewProp_bGatherConvexGeometry_SetBit = [](void* Obj){ ((UNavCollision*)Obj)->bGatherConvexGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGatherConvexGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bGatherConvexGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGatherConvexGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGatherConvexGeometry_MetaData, ARRAY_COUNT(NewProp_bGatherConvexGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicObstacle_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
				{ "ToolTip", "If set, mesh will be used as dynamic obstacle (don't create navmesh on top, much faster adding/removing)" },
			};
#endif
			auto NewProp_bIsDynamicObstacle_SetBit = [](void* Obj){ ((UNavCollision*)Obj)->bIsDynamicObstacle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicObstacle = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDynamicObstacle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavCollision), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDynamicObstacle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsDynamicObstacle_MetaData, ARRAY_COUNT(NewProp_bIsDynamicObstacle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
				{ "ToolTip", "navigation area type (empty = default obstacle)" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UNavCollision, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AreaClass_MetaData, ARRAY_COUNT(NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
				{ "ToolTip", "list of nav collision boxes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoxCollision = { UE4CodeGen_Private::EPropertyClass::Array, "BoxCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavCollision, BoxCollision), METADATA_PARAMS(NewProp_BoxCollision_MetaData, ARRAY_COUNT(NewProp_BoxCollision_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxCollision_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavCollisionBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderCollision_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavCollision.h" },
				{ "ToolTip", "list of nav collision cylinders" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CylinderCollision = { UE4CodeGen_Private::EPropertyClass::Array, "CylinderCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavCollision, CylinderCollision), METADATA_PARAMS(NewProp_CylinderCollision_MetaData, ARRAY_COUNT(NewProp_CylinderCollision_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CylinderCollision_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CylinderCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavCollisionCylinder, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGatherConvexGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDynamicObstacle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxCollision_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CylinderCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CylinderCollision_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavCollision>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavCollision::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
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
	IMPLEMENT_CLASS(UNavCollision, 107687157);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavCollision(Z_Construct_UClass_UNavCollision, &UNavCollision::StaticClass, TEXT("/Script/Engine"), TEXT("UNavCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
