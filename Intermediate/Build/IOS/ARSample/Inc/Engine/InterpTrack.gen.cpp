// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrack() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackActiveCondition();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubTrackGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedSubTrackInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
// End Cross Module References
	static UEnum* ETrackActiveCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrackActiveCondition, Z_Construct_UPackage__Script_Engine(), TEXT("ETrackActiveCondition"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackActiveCondition(ETrackActiveCondition_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrackActiveCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrackActiveCondition_CRC() { return 2775650143U; }
	UEnum* Z_Construct_UEnum_Engine_ETrackActiveCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackActiveCondition"), 0, Get_Z_Construct_UEnum_Engine_ETrackActiveCondition_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETAC_Always", (int64)ETAC_Always },
				{ "ETAC_GoreEnabled", (int64)ETAC_GoreEnabled },
				{ "ETAC_GoreDisabled", (int64)ETAC_GoreDisabled },
				{ "ETAC_MAX", (int64)ETAC_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ETAC_Always.ToolTip", "Track is always active" },
				{ "ETAC_GoreDisabled.ToolTip", "Track is active when extreme content (gore) is disabled" },
				{ "ETAC_GoreEnabled.ToolTip", "Track is active when extreme content (gore) is enabled" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Required condition for this track to be enabled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETrackActiveCondition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETrackActiveCondition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubTrackGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSubTrackGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubTrackGroup, Z_Construct_UPackage__Script_Engine(), TEXT("SubTrackGroup"), sizeof(FSubTrackGroup), Get_Z_Construct_UScriptStruct_FSubTrackGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubTrackGroup(FSubTrackGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("SubTrackGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSubTrackGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFSubTrackGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubTrackGroup")),new UScriptStruct::TCppStructOps<FSubTrackGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSubTrackGroup;
	UScriptStruct* Z_Construct_UScriptStruct_FSubTrackGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubTrackGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubTrackGroup"), sizeof(FSubTrackGroup), Get_Z_Construct_UScriptStruct_FSubTrackGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "A small structure holding data for grouping subtracks. (For UI drawing purposes)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubTrackGroup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "If this group is selected" },
			};
#endif
			auto NewProp_bIsSelected_SetBit = [](void* Obj){ ((FSubTrackGroup*)Obj)->bIsSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSubTrackGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSelected_MetaData, ARRAY_COUNT(NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCollapsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "If this group is collapsed" },
			};
#endif
			auto NewProp_bIsCollapsed_SetBit = [](void* Obj){ ((FSubTrackGroup*)Obj)->bIsCollapsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCollapsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCollapsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSubTrackGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsCollapsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsCollapsed_MetaData, ARRAY_COUNT(NewProp_bIsCollapsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIndices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Indices to tracks in the parent track subtrack array." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackIndices = { UE4CodeGen_Private::EPropertyClass::Array, "TrackIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSubTrackGroup, TrackIndices), METADATA_PARAMS(NewProp_TrackIndices_MetaData, ARRAY_COUNT(NewProp_TrackIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "TrackIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Name of the subtrack  group" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Str, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSubTrackGroup, GroupName), METADATA_PARAMS(NewProp_GroupName_MetaData, ARRAY_COUNT(NewProp_GroupName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsCollapsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SubTrackGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSubTrackGroup),
				alignof(FSubTrackGroup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubTrackGroup_CRC() { return 3391855768U; }
class UScriptStruct* FSupportedSubTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedSubTrackInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SupportedSubTrackInfo"), sizeof(FSupportedSubTrackInfo), Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSupportedSubTrackInfo(FSupportedSubTrackInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SupportedSubTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSupportedSubTrackInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSupportedSubTrackInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SupportedSubTrackInfo")),new UScriptStruct::TCppStructOps<FSupportedSubTrackInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSupportedSubTrackInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSupportedSubTrackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SupportedSubTrackInfo"), sizeof(FSupportedSubTrackInfo), Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Helper struct for creating sub tracks supported by this track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedSubTrackInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Index into the any subtrack group this subtrack belongs to (can be -1 for no group)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex = { UE4CodeGen_Private::EPropertyClass::Int, "GroupIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedSubTrackInfo, GroupIndex), METADATA_PARAMS(NewProp_GroupIndex_MetaData, ARRAY_COUNT(NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTrackName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "The name of the subtrack" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubTrackName = { UE4CodeGen_Private::EPropertyClass::Str, "SubTrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedSubTrackInfo, SubTrackName), METADATA_PARAMS(NewProp_SubTrackName_MetaData, ARRAY_COUNT(NewProp_SubTrackName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "The sub track class which is supported by this track" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedClass = { UE4CodeGen_Private::EPropertyClass::Class, "SupportedClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedSubTrackInfo, SupportedClass), Z_Construct_UClass_UInterpTrack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SupportedClass_MetaData, ARRAY_COUNT(NewProp_SupportedClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTrackName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SupportedSubTrackInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSupportedSubTrackInfo),
				alignof(FSupportedSubTrackInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_CRC() { return 3153066449U; }
	void UInterpTrack::StaticRegisterNativesUInterpTrack()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrack_NoRegister()
	{
		return UInterpTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrack()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrack.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCollapsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "If this track is collapsed. (Only applies  to tracks with subtracks)." },
			};
#endif
			auto NewProp_bIsCollapsed_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bIsCollapsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCollapsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCollapsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsCollapsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsCollapsed_MetaData, ARRAY_COUNT(NewProp_bIsCollapsed_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Whether or not this track is recording in the editor." },
			};
#endif
			auto NewProp_bIsRecording_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bIsRecording = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRecording = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRecording", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRecording_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsRecording_MetaData, ARRAY_COUNT(NewProp_bIsRecording_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Whether or not this track is visible in the editor." },
			};
#endif
			auto NewProp_bVisible_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisible_MetaData, ARRAY_COUNT(NewProp_bVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubTrackOnly_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "If this track can only exist as a sub track." },
			};
#endif
			auto NewProp_bSubTrackOnly_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bSubTrackOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubTrackOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubTrackOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSubTrackOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSubTrackOnly_MetaData, ARRAY_COUNT(NewProp_bSubTrackOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAnimControlTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "If true, the  AActor  this track is working on will have BeginAnimControl/FinishAnimControl called on it." },
			};
#endif
			auto NewProp_bIsAnimControlTrack_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bIsAnimControlTrack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnimControlTrack = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAnimControlTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAnimControlTrack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAnimControlTrack_MetaData, ARRAY_COUNT(NewProp_bIsAnimControlTrack_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIcon_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackIcon = { UE4CodeGen_Private::EPropertyClass::Object, "TrackIcon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrack, TrackIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_TrackIcon_MetaData, ARRAY_COUNT(NewProp_TrackIcon_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Whether or not this track is selected in the editor." },
			};
#endif
			auto NewProp_bIsSelected_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bIsSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSelected_MetaData, ARRAY_COUNT(NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Whether or not this track should actually update the target actor." },
			};
#endif
			auto NewProp_bDisableTrack_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bDisableTrack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTrack = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableTrack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableTrack_MetaData, ARRAY_COUNT(NewProp_bDisableTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirGroupOnly_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "If this track can only exist inside the Director group." },
			};
#endif
			auto NewProp_bDirGroupOnly_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bDirGroupOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirGroupOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bDirGroupOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDirGroupOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDirGroupOnly_MetaData, ARRAY_COUNT(NewProp_bDirGroupOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnePerGroup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Whether there may only be one of this track in an UInterpGroup." },
			};
#endif
			auto NewProp_bOnePerGroup_SetBit = [](void* Obj){ ((UInterpTrack*)Obj)->bOnePerGroup = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnePerGroup = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnePerGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnePerGroup_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnePerGroup_MetaData, ARRAY_COUNT(NewProp_bOnePerGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTitle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Title of track type." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackTitle = { UE4CodeGen_Private::EPropertyClass::Str, "TrackTitle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrack, TrackTitle), METADATA_PARAMS(NewProp_TrackTitle_MetaData, ARRAY_COUNT(NewProp_TrackTitle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCondition_MetaData[] = {
				{ "Category", "InterpTrack" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Sets the condition that must be met for this track to be enabled" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveCondition = { UE4CodeGen_Private::EPropertyClass::Byte, "ActiveCondition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrack, ActiveCondition), Z_Construct_UEnum_Engine_ETrackActiveCondition, METADATA_PARAMS(NewProp_ActiveCondition_MetaData, ARRAY_COUNT(NewProp_ActiveCondition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackInstClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackInstClass = { UE4CodeGen_Private::EPropertyClass::Class, "TrackInstClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrack, TrackInstClass), Z_Construct_UClass_UInterpTrackInst_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_TrackInstClass_MetaData, ARRAY_COUNT(NewProp_TrackInstClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedSubTracks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "A list of supported tracks that can be a subtrack of this track." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedSubTracks = { UE4CodeGen_Private::EPropertyClass::Array, "SupportedSubTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrack, SupportedSubTracks), METADATA_PARAMS(NewProp_SupportedSubTracks_MetaData, ARRAY_COUNT(NewProp_SupportedSubTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedSubTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedSubTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSupportedSubTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTrackGroups_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "A list of subtrack groups (for editor UI organization only)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubTrackGroups = { UE4CodeGen_Private::EPropertyClass::Array, "SubTrackGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UInterpTrack, SubTrackGroups), METADATA_PARAMS(NewProp_SubTrackGroups_MetaData, ARRAY_COUNT(NewProp_SubTrackGroups_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubTrackGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SubTrackGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubTrackGroup, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTracks_MetaData[] = {
				{ "Category", "InterpTrack" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "A list of subtracks that belong to this track" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubTracks = { UE4CodeGen_Private::EPropertyClass::Array, "SubTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UInterpTrack, SubTracks), METADATA_PARAMS(NewProp_SubTracks_MetaData, ARRAY_COUNT(NewProp_SubTracks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsCollapsed,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRecording,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSubTrackOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAnimControlTrack,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIcon,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDirGroupOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnePerGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackTitle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveCondition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackInstClass,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedSubTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedSubTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTrackGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTrackGroups_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubTracks_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082081u,
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
	IMPLEMENT_CLASS(UInterpTrack, 4180174312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrack(Z_Construct_UClass_UInterpTrack, &UInterpTrack::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
