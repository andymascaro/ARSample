// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackMove() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupPoint();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	static UEnum* EInterpTrackMoveRotMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpTrackMoveRotMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpTrackMoveRotMode(EInterpTrackMoveRotMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EInterpTrackMoveRotMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_CRC() { return 2610127313U; }
	UEnum* Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpTrackMoveRotMode"), 0, Get_Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IMR_Keyframed", (int64)IMR_Keyframed },
				{ "IMR_LookAtGroup", (int64)IMR_LookAtGroup },
				{ "IMR_Ignore", (int64)IMR_Ignore },
				{ "IMR_MAX", (int64)IMR_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IMR_Ignore.ToolTip", "Do not change rotation. Ignore it." },
				{ "IMR_Keyframed.ToolTip", "Should take orientation from the keyframe." },
				{ "IMR_LookAtGroup.ToolTip", "Point the X-Axis of the controlled Actor at the group specified by LookAtGroupName." },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInterpTrackMoveRotMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EInterpTrackMoveRotMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInterpLookupTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpLookupTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLookupTrack, Z_Construct_UPackage__Script_Engine(), TEXT("InterpLookupTrack"), sizeof(FInterpLookupTrack), Get_Z_Construct_UScriptStruct_FInterpLookupTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpLookupTrack(FInterpLookupTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpLookupTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpLookupTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpLookupTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpLookupTrack")),new UScriptStruct::TCppStructOps<FInterpLookupTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpLookupTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpLookupTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpLookupTrack"), sizeof(FInterpLookupTrack), Get_Z_Construct_UScriptStruct_FInterpLookupTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLookupTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Array, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpLookupTrack, Points), METADATA_PARAMS(NewProp_Points_MetaData, ARRAY_COUNT(NewProp_Points_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Points", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInterpLookupPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Points_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InterpLookupTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInterpLookupTrack),
				alignof(FInterpLookupTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpLookupTrack_CRC() { return 1186617907U; }
class UScriptStruct* FInterpLookupPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpLookupPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLookupPoint, Z_Construct_UPackage__Script_Engine(), TEXT("InterpLookupPoint"), sizeof(FInterpLookupPoint), Get_Z_Construct_UScriptStruct_FInterpLookupPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpLookupPoint(FInterpLookupPoint::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpLookupPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpLookupPoint
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpLookupPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpLookupPoint")),new UScriptStruct::TCppStructOps<FInterpLookupPoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpLookupPoint;
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpLookupPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpLookupPoint"), sizeof(FInterpLookupPoint), Get_Z_Construct_UScriptStruct_FInterpLookupPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Array of group names to retrieve position and rotation data from instead of using the data stored in the keyframe.\nA value of NAME_None means to use the PosTrack and EulerTrack data for the keyframe.\nThere needs to be the same amount of elements in this array as there are keyframes." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLookupPoint>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpLookupPoint, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpLookupPoint, GroupName), METADATA_PARAMS(NewProp_GroupName_MetaData, ARRAY_COUNT(NewProp_GroupName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InterpLookupPoint",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInterpLookupPoint),
				alignof(FInterpLookupPoint),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpLookupPoint_CRC() { return 892516995U; }
	void UInterpTrackMove::StaticRegisterNativesUInterpTrackMove()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister()
	{
		return UInterpTrackMove::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Movement Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackMove.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Track containing data for moving an actor around over time." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotMode_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RotMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, RotMode), Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode, METADATA_PARAMS(NewProp_RotMode_MetaData, ARRAY_COUNT(NewProp_RotMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHide3DTrack_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "If true, 3D representation of this track in the 3D viewport is disabled." },
			};
#endif
			auto NewProp_bHide3DTrack_SetBit = [](void* Obj){ ((UInterpTrackMove*)Obj)->bHide3DTrack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHide3DTrack = { UE4CodeGen_Private::EPropertyClass::Bool, "bHide3DTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackMove), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHide3DTrack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHide3DTrack_MetaData, ARRAY_COUNT(NewProp_bHide3DTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRotationOnCurveEd_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "If false, when this track is displayed on the Curve Editor in Matinee, do not show the Rotation tracks." },
			};
#endif
			auto NewProp_bShowRotationOnCurveEd_SetBit = [](void* Obj){ ((UInterpTrackMove*)Obj)->bShowRotationOnCurveEd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRotationOnCurveEd = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowRotationOnCurveEd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackMove), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowRotationOnCurveEd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowRotationOnCurveEd_MetaData, ARRAY_COUNT(NewProp_bShowRotationOnCurveEd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowTranslationOnCurveEd_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "If false, when this track is displayed on the Curve Editor in Matinee, do not show the Translation tracks." },
			};
#endif
			auto NewProp_bShowTranslationOnCurveEd_SetBit = [](void* Obj){ ((UInterpTrackMove*)Obj)->bShowTranslationOnCurveEd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowTranslationOnCurveEd = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowTranslationOnCurveEd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackMove), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowTranslationOnCurveEd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowTranslationOnCurveEd_MetaData, ARRAY_COUNT(NewProp_bShowTranslationOnCurveEd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMovement_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Disable previewing of this track - will always position  AActor  at Time=0.0. Useful when keyframing an object relative to this group." },
			};
#endif
			auto NewProp_bDisableMovement_SetBit = [](void* Obj){ ((UInterpTrackMove*)Obj)->bDisableMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackMove), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableMovement_MetaData, ARRAY_COUNT(NewProp_bDisableMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowArrowAtKeys_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "In the editor, show a small arrow at each keyframe indicating the rotation at that key." },
			};
#endif
			auto NewProp_bShowArrowAtKeys_SetBit = [](void* Obj){ ((UInterpTrackMove*)Obj)->bShowArrowAtKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowArrowAtKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowArrowAtKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackMove), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowArrowAtKeys_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowArrowAtKeys_MetaData, ARRAY_COUNT(NewProp_bShowArrowAtKeys_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseQuatInterpolation_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Use a Quaternion linear interpolation between keys.\nThis is robust and will find the 'shortest' distance between keys, but does not support ease in/out." },
			};
#endif
			auto NewProp_bUseQuatInterpolation_SetBit = [](void* Obj){ ((UInterpTrackMove*)Obj)->bUseQuatInterpolation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseQuatInterpolation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseQuatInterpolation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackMove), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseQuatInterpolation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseQuatInterpolation_MetaData, ARRAY_COUNT(NewProp_bUseQuatInterpolation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngCurveTension_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Controls the tightness of the curve for the rotation path." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngCurveTension = { UE4CodeGen_Private::EPropertyClass::Float, "AngCurveTension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, AngCurveTension), METADATA_PARAMS(NewProp_AngCurveTension_MetaData, ARRAY_COUNT(NewProp_AngCurveTension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinCurveTension_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Controls the tightness of the curve for the translation path." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinCurveTension = { UE4CodeGen_Private::EPropertyClass::Float, "LinCurveTension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, LinCurveTension), METADATA_PARAMS(NewProp_LinCurveTension_MetaData, ARRAY_COUNT(NewProp_LinCurveTension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtGroupName_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "When using IMR_LookAtGroup, specifies the Group which this track should always point its actor at." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LookAtGroupName = { UE4CodeGen_Private::EPropertyClass::Name, "LookAtGroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, LookAtGroupName), METADATA_PARAMS(NewProp_LookAtGroupName_MetaData, ARRAY_COUNT(NewProp_LookAtGroupName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookupTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookupTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "LookupTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, LookupTrack), Z_Construct_UScriptStruct_FInterpLookupTrack, METADATA_PARAMS(NewProp_LookupTrack_MetaData, ARRAY_COUNT(NewProp_LookupTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EulerTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Actual rotation keyframe data, stored as Euler angles in degrees, for easy editing on curve." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EulerTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "EulerTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, EulerTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(NewProp_EulerTrack_MetaData, ARRAY_COUNT(NewProp_EulerTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosTrack_MetaData[] = {
				{ "Category", "InterpTrackMove" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
				{ "ToolTip", "Actual position keyframe data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "PosTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UInterpTrackMove, PosTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(NewProp_PosTrack_MetaData, ARRAY_COUNT(NewProp_PosTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHide3DTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowRotationOnCurveEd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowTranslationOnCurveEd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowArrowAtKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseQuatInterpolation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngCurveTension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinCurveTension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookAtGroupName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LookupTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EulerTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PosTrack,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackMove>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackMove::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackMove, 2275532000);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackMove(Z_Construct_UClass_UInterpTrackMove, &UInterpTrackMove::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
