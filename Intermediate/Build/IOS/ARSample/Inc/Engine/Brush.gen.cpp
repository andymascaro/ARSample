// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Brush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrush() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECsgOper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection();
	ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EBrushType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBrushType, Z_Construct_UPackage__Script_Engine(), TEXT("EBrushType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBrushType(EBrushType_StaticEnum, TEXT("/Script/Engine"), TEXT("EBrushType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBrushType_CRC() { return 3042343912U; }
	UEnum* Z_Construct_UEnum_Engine_EBrushType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBrushType"), 0, Get_Z_Construct_UEnum_Engine_EBrushType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Brush_Default", (int64)Brush_Default },
				{ "Brush_Add", (int64)Brush_Add },
				{ "Brush_Subtract", (int64)Brush_Subtract },
				{ "Brush_MAX", (int64)Brush_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Brush_Add.DisplayName", "Additive" },
				{ "Brush_Add.ToolTip", "Add to world." },
				{ "Brush_Default.Hidden", "" },
				{ "Brush_Default.ToolTip", "Default/builder brush." },
				{ "Brush_Subtract.DisplayName", "Subtractive" },
				{ "Brush_Subtract.ToolTip", "Subtract from world." },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBrushType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBrushType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECsgOper_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECsgOper, Z_Construct_UPackage__Script_Engine(), TEXT("ECsgOper"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECsgOper(ECsgOper_StaticEnum, TEXT("/Script/Engine"), TEXT("ECsgOper"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECsgOper_CRC() { return 195566137U; }
	UEnum* Z_Construct_UEnum_Engine_ECsgOper()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECsgOper"), 0, Get_Z_Construct_UEnum_Engine_ECsgOper_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CSG_Active", (int64)CSG_Active },
				{ "CSG_Add", (int64)CSG_Add },
				{ "CSG_Subtract", (int64)CSG_Subtract },
				{ "CSG_Intersect", (int64)CSG_Intersect },
				{ "CSG_Deintersect", (int64)CSG_Deintersect },
				{ "CSG_None", (int64)CSG_None },
				{ "CSG_MAX", (int64)CSG_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CSG_Active.ToolTip", "Active brush. (deprecated, do not use.)" },
				{ "CSG_Add.ToolTip", "Add to world. (deprecated, do not use.)" },
				{ "CSG_Deintersect.ToolTip", "Form from negative intersection with world." },
				{ "CSG_Intersect.ToolTip", "Form from intersection with world." },
				{ "CSG_Subtract.ToolTip", "Subtract from world. (deprecated, do not use.)" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Variables." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECsgOper",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ECsgOper",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGeomSelection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGeomSelection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomSelection, Z_Construct_UPackage__Script_Engine(), TEXT("GeomSelection"), sizeof(FGeomSelection), Get_Z_Construct_UScriptStruct_FGeomSelection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeomSelection(FGeomSelection::StaticStruct, TEXT("/Script/Engine"), TEXT("GeomSelection"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGeomSelection
{
	FScriptStruct_Engine_StaticRegisterNativesFGeomSelection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeomSelection")),new UScriptStruct::TCppStructOps<FGeomSelection>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGeomSelection;
	UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeomSelection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeomSelection"), sizeof(FGeomSelection), Get_Z_Construct_UScriptStruct_FGeomSelection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Selection information for geometry mode" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomSelection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Index into the geometry data structures" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SelectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGeomSelection, SelectionIndex), METADATA_PARAMS(NewProp_SelectionIndex_MetaData, ARRAY_COUNT(NewProp_SelectionIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "EGeometrySelectionType_" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGeomSelection, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Int, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGeomSelection, Type), METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GeomSelection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGeomSelection),
				alignof(FGeomSelection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeomSelection_CRC() { return 764152859U; }
	void ABrush::StaticRegisterNativesABrush()
	{
	}
	UClass* Z_Construct_UClass_ABrush_NoRegister()
	{
		return ABrush::StaticClass();
	}
	UClass* Z_Construct_UClass_ABrush()
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
				{ "HideCategories", "Object Collision Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Engine/Brush.h" },
				{ "IsBlueprintBase", "false" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedSelections_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Stores selection information from geometry mode.  This is the only information that we can't\nregenerate by looking at the source brushes following an undo operation." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedSelections = { UE4CodeGen_Private::EPropertyClass::Array, "SavedSelections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABrush, SavedSelections), METADATA_PARAMS(NewProp_SavedSelections_MetaData, ARRAY_COUNT(NewProp_SavedSelections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedSelections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SavedSelections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGeomSelection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInManipulation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.)" },
			};
#endif
			auto NewProp_bInManipulation_SetBit = [](void* Obj){ ((ABrush*)Obj)->bInManipulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInManipulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bInManipulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInManipulation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInManipulation_MetaData, ARRAY_COUNT(NewProp_bInManipulation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushBuilder_MetaData[] = {
				{ "Category", "BrushBuilder" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushBuilder = { UE4CodeGen_Private::EPropertyClass::Object, "BrushBuilder", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(ABrush, BrushBuilder), Z_Construct_UClass_UBrushBuilder_NoRegister, METADATA_PARAMS(NewProp_BrushBuilder_MetaData, ARRAY_COUNT(NewProp_BrushBuilder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Collision" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BrushComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ABrush, BrushComponent), Z_Construct_UClass_UBrushComponent_NoRegister, METADATA_PARAMS(NewProp_BrushComponent_MetaData, ARRAY_COUNT(NewProp_BrushComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Object, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080008, 1, nullptr, STRUCT_OFFSET(ABrush, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(NewProp_Brush_MetaData, ARRAY_COUNT(NewProp_Brush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotForClientOrServer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "If true, this brush is a builder or otherwise does not need to be loaded into the game" },
			};
#endif
			auto NewProp_bNotForClientOrServer_SetBit = [](void* Obj){ ((ABrush*)Obj)->bNotForClientOrServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotForClientOrServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotForClientOrServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNotForClientOrServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNotForClientOrServer_MetaData, ARRAY_COUNT(NewProp_bNotForClientOrServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceableFromClassBrowser_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "If true, this brush class can be placed using the class browser like other simple class types" },
			};
#endif
			auto NewProp_bPlaceableFromClassBrowser_SetBit = [](void* Obj){ ((ABrush*)Obj)->bPlaceableFromClassBrowser = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceableFromClassBrowser = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaceableFromClassBrowser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlaceableFromClassBrowser_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlaceableFromClassBrowser_MetaData, ARRAY_COUNT(NewProp_bPlaceableFromClassBrowser_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSolidWhenSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			auto NewProp_bSolidWhenSelected_SetBit = [](void* Obj){ ((ABrush*)Obj)->bSolidWhenSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSolidWhenSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSolidWhenSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSolidWhenSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSolidWhenSelected_MetaData, ARRAY_COUNT(NewProp_bSolidWhenSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColored_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			auto NewProp_bColored_SetBit = [](void* Obj){ ((ABrush*)Obj)->bColored = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColored = { UE4CodeGen_Private::EPropertyClass::Bool, "bColored", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ABrush), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bColored_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bColored_MetaData, ARRAY_COUNT(NewProp_bColored_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolyFlags = { UE4CodeGen_Private::EPropertyClass::Int, "PolyFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABrush, PolyFlags), METADATA_PARAMS(NewProp_PolyFlags_MetaData, ARRAY_COUNT(NewProp_PolyFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Information." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BrushColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ABrush, BrushColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_BrushColor_MetaData, ARRAY_COUNT(NewProp_BrushColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushType_MetaData[] = {
				{ "Category", "Brush" },
				{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
				{ "ToolTip", "Type of brush" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BrushType = { UE4CodeGen_Private::EPropertyClass::Byte, "BrushType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABrush, BrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(NewProp_BrushType_MetaData, ARRAY_COUNT(NewProp_BrushType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedSelections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedSelections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInManipulation,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushBuilder,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNotForClientOrServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlaceableFromClassBrowser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSolidWhenSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bColored,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PolyFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABrush>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABrush::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ABrush, 260093242);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrush(Z_Construct_UClass_ABrush, &ABrush::StaticClass, TEXT("/Script/Engine"), TEXT("ABrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
