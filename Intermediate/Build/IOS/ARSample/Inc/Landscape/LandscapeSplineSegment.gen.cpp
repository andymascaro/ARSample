// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeSplineSegment.h"
#include "Classes/LandscapeSplinesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineSegment() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	static UEnum* LandscapeSplineMeshOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineMeshOrientation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LandscapeSplineMeshOrientation(LandscapeSplineMeshOrientation_StaticEnum, TEXT("/Script/Landscape"), TEXT("LandscapeSplineMeshOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_CRC() { return 2871090905U; }
	UEnum* Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineMeshOrientation"), 0, Get_Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LSMO_XUp", (int64)LSMO_XUp },
				{ "LSMO_YUp", (int64)LSMO_YUp },
				{ "LSMO_MAX", (int64)LSMO_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"LandscapeSplineMeshOrientation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"LandscapeSplineMeshOrientation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLandscapeSplineMeshEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineMeshEntry"), sizeof(FLandscapeSplineMeshEntry), Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineMeshEntry(FLandscapeSplineMeshEntry::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineMeshEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineMeshEntry
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineMeshEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineMeshEntry")),new UScriptStruct::TCppStructOps<FLandscapeSplineMeshEntry>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineMeshEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineMeshEntry"), sizeof(FLandscapeSplineMeshEntry), Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineMeshEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Chooses the up axis for the spline mesh orientation" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "UpAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, UpAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(NewProp_UpAxis_MetaData, ARRAY_COUNT(NewProp_UpAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Chooses the forward axis for the spline mesh orientation" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "ForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(NewProp_ForwardAxis_MetaData, ARRAY_COUNT(NewProp_ForwardAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Orientation of the spline mesh, X=Up or Y=Up" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Byte, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Orientation_DEPRECATED), Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation, METADATA_PARAMS(NewProp_Orientation_MetaData, ARRAY_COUNT(NewProp_Orientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Scale of the spline mesh, (Z=Forwards)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleToWidth_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Whether to scale the mesh to fit the width of the spline" },
			};
#endif
			auto NewProp_bScaleToWidth_SetBit = [](void* Obj){ ((FLandscapeSplineMeshEntry*)Obj)->bScaleToWidth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleToWidth = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleToWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLandscapeSplineMeshEntry), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleToWidth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleToWidth_MetaData, ARRAY_COUNT(NewProp_bScaleToWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterAdjust_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "DisplayName", "Center Adjust" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Tweak to center the mesh correctly on the spline" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterAdjust = { UE4CodeGen_Private::EPropertyClass::Struct, "CenterAdjust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, CenterAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_CenterAdjust_MetaData, ARRAY_COUNT(NewProp_CenterAdjust_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterH_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "DisplayName", "Center Horizontally" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Whether to automatically center the mesh horizontally on the spline" },
			};
#endif
			auto NewProp_bCenterH_SetBit = [](void* Obj){ ((FLandscapeSplineMeshEntry*)Obj)->bCenterH = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterH = { UE4CodeGen_Private::EPropertyClass::Bool, "bCenterH", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLandscapeSplineMeshEntry), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCenterH_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCenterH_MetaData, ARRAY_COUNT(NewProp_bCenterH_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Overrides mesh's materials" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, MaterialOverrides), METADATA_PARAMS(NewProp_MaterialOverrides_MetaData, ARRAY_COUNT(NewProp_MaterialOverrides_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverrides_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "LandscapeSplineMeshEntry" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Mesh to use on the spline" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleToWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterAdjust,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCenterH,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialOverrides_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeSplineMeshEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeSplineMeshEntry),
				alignof(FLandscapeSplineMeshEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC() { return 1644471219U; }
class UScriptStruct* FLandscapeSplineSegmentConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineSegmentConnection"), sizeof(FLandscapeSplineSegmentConnection), Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineSegmentConnection(FLandscapeSplineSegmentConnection::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineSegmentConnection"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineSegmentConnection
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineSegmentConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineSegmentConnection")),new UScriptStruct::TCppStructOps<FLandscapeSplineSegmentConnection>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineSegmentConnection;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineSegmentConnection"), sizeof(FLandscapeSplineSegmentConnection), Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineSegmentConnection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
				{ "Category", "LandscapeSplineSegmentConnection" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Socket on the control point that we are connected to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, SocketName), METADATA_PARAMS(NewProp_SocketName_MetaData, ARRAY_COUNT(NewProp_SocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentLen_MetaData[] = {
				{ "Category", "LandscapeSplineSegmentConnection" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Tangent length of the connection" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentLen = { UE4CodeGen_Private::EPropertyClass::Float, "TangentLen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, TangentLen), METADATA_PARAMS(NewProp_TangentLen_MetaData, ARRAY_COUNT(NewProp_TangentLen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoint_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Control point connected to this end of the segment" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPoint = { UE4CodeGen_Private::EPropertyClass::Object, "ControlPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, ControlPoint), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(NewProp_ControlPoint_MetaData, ARRAY_COUNT(NewProp_ControlPoint_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentLen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlPoint,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeSplineSegmentConnection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeSplineSegmentConnection),
				alignof(FLandscapeSplineSegmentConnection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC() { return 1122917203U; }
class UScriptStruct* FLandscapeSplineInterpPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineInterpPoint"), sizeof(FLandscapeSplineInterpPoint), Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeSplineInterpPoint(FLandscapeSplineInterpPoint::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeSplineInterpPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineInterpPoint
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineInterpPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeSplineInterpPoint")),new UScriptStruct::TCppStructOps<FLandscapeSplineInterpPoint>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeSplineInterpPoint;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeSplineInterpPoint"), sizeof(FLandscapeSplineInterpPoint), Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineInterpPoint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEndFalloff_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Start/End Falloff fraction" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartEndFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "StartEndFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, StartEndFalloff), METADATA_PARAMS(NewProp_StartEndFalloff_MetaData, ARRAY_COUNT(NewProp_StartEndFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffRight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Right FalloffPoint" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffRight = { UE4CodeGen_Private::EPropertyClass::Struct, "FalloffRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, FalloffRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FalloffRight_MetaData, ARRAY_COUNT(NewProp_FalloffRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffLeft_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Left Falloff Point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffLeft = { UE4CodeGen_Private::EPropertyClass::Struct, "FalloffLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, FalloffLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FalloffLeft_MetaData, ARRAY_COUNT(NewProp_FalloffLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Right Point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Struct, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Right_MetaData, ARRAY_COUNT(NewProp_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Left Point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Struct, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Left), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Left_MetaData, ARRAY_COUNT(NewProp_Left_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Center Point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartEndFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FalloffRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FalloffLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeSplineInterpPoint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeSplineInterpPoint),
				alignof(FLandscapeSplineInterpPoint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC() { return 2849289623U; }
	void ULandscapeSplineSegment::StaticRegisterNativesULandscapeSplineSegment()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister()
	{
		return ULandscapeSplineSegment::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeSplineSegment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "LandscapeSplineSegment LandscapeSplineMeshes" },
				{ "IncludePath", "LandscapeSplineSegment.h" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Key for tracking whether this segment has been modified relative to the mesh components stored in other streaming levels" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ModificationKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020c80800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ModificationKey_MetaData, ARRAY_COUNT(NewProp_ModificationKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignWorlds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "World references for mesh components stored in other streaming levels" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForeignWorlds = { UE4CodeGen_Private::EPropertyClass::Array, "ForeignWorlds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024c80800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, ForeignWorlds), METADATA_PARAMS(NewProp_ForeignWorlds_MetaData, ARRAY_COUNT(NewProp_ForeignWorlds_MetaData)) };
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorlds_Inner = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ForeignWorlds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000800000000, 1, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalMeshComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Spline meshes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "LocalMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020488000000008, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, LocalMeshComponents), METADATA_PARAMS(NewProp_LocalMeshComponents_MetaData, ARRAY_COUNT(NewProp_LocalMeshComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LocalMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Bounds of points" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds = { UE4CodeGen_Private::EPropertyClass::Struct, "Bounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_Bounds_MetaData, ARRAY_COUNT(NewProp_Bounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Spline points" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Array, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, Points), METADATA_PARAMS(NewProp_Points_MetaData, ARRAY_COUNT(NewProp_Points_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Actual data for spline." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, SplineInfo), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(NewProp_SplineInfo_MetaData, ARRAY_COUNT(NewProp_SplineInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavDirty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
			};
#endif
			auto NewProp_bNavDirty_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bNavDirty = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bNavDirty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNavDirty_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNavDirty_MetaData, ARRAY_COUNT(NewProp_bNavDirty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
			};
#endif
			auto NewProp_bSelected_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelected_MetaData, ARRAY_COUNT(NewProp_bSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Whether spline meshes should be placed in landscape proxy streaming levels (true) or the spline's level (false)" },
			};
#endif
			auto NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bPlaceSplineMeshesInStreamingLevels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceSplineMeshesInStreamingLevels = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaceSplineMeshesInStreamingLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData, ARRAY_COUNT(NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "TranslucencySortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, TranslucencySortPriority), METADATA_PARAMS(NewProp_TranslucencySortPriority_MetaData, ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "DisplayName", "Max Draw Distance" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Max draw distance for all the mesh pieces used in this spline" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance = { UE4CodeGen_Private::EPropertyClass::Float, "LDMaxDrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, LDMaxDrawDistance), METADATA_PARAMS(NewProp_LDMaxDrawDistance_MetaData, ARRAY_COUNT(NewProp_LDMaxDrawDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Random seed used for choosing which order to use spline meshes. Ignored if only one mesh is set." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "RandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, RandomSeed), METADATA_PARAMS(NewProp_RandomSeed_MetaData, ARRAY_COUNT(NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Whether the Spline Meshes should cast a shadow." },
			};
#endif
			auto NewProp_bCastShadow_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bCastShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadow_MetaData, ARRAY_COUNT(NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Whether to generate collision for the Spline Meshes." },
			};
#endif
			auto NewProp_bEnableCollision_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bEnableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCollision_MetaData, ARRAY_COUNT(NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[] = {
				{ "Category", "LandscapeSplineMeshes" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Spline meshes from this list are used in random order along the spline." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, SplineMeshes), METADATA_PARAMS(NewProp_SplineMeshes_MetaData, ARRAY_COUNT(NewProp_SplineMeshes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[] = {
				{ "Category", "LandscapeDeformation" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
			};
#endif
			auto NewProp_bLowerTerrain_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bLowerTerrain = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain = { UE4CodeGen_Private::EPropertyClass::Bool, "bLowerTerrain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLowerTerrain_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLowerTerrain_MetaData, ARRAY_COUNT(NewProp_bLowerTerrain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[] = {
				{ "Category", "LandscapeDeformation" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
			};
#endif
			auto NewProp_bRaiseTerrain_SetBit = [](void* Obj){ ((ULandscapeSplineSegment*)Obj)->bRaiseTerrain = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain = { UE4CodeGen_Private::EPropertyClass::Bool, "bRaiseTerrain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeSplineSegment), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRaiseTerrain_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRaiseTerrain_MetaData, ARRAY_COUNT(NewProp_bRaiseTerrain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
				{ "Category", "LandscapeDeformation" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, LayerName), METADATA_PARAMS(NewProp_LayerName_MetaData, ARRAY_COUNT(NewProp_LayerName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
				{ "Category", "LandscapeSplineSegment" },
				{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
				{ "ToolTip", "Directly editable data:" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Connections = { UE4CodeGen_Private::EPropertyClass::Struct, "Connections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, CPP_ARRAY_DIM(Connections, ULandscapeSplineSegment), nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, Connections), Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection, METADATA_PARAMS(NewProp_Connections_MetaData, ARRAY_COUNT(NewProp_Connections_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModificationKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignWorlds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForeignWorlds_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalMeshComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalMeshComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineInfo,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNavDirty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlaceSplineMeshesInStreamingLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucencySortPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LDMaxDrawDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineMeshes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineMeshes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLowerTerrain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRaiseTerrain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerName,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connections,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeSplineSegment>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeSplineSegment::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ULandscapeSplineSegment, 3573666441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSplineSegment(Z_Construct_UClass_ULandscapeSplineSegment, &ULandscapeSplineSegment::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSplineSegment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplineSegment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
