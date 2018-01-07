// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroup() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FInterpEdSelKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpEdSelKey, Z_Construct_UPackage__Script_Engine(), TEXT("InterpEdSelKey"), sizeof(FInterpEdSelKey), Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpEdSelKey(FInterpEdSelKey::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpEdSelKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpEdSelKey
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpEdSelKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpEdSelKey")),new UScriptStruct::TCppStructOps<FInterpEdSelKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpEdSelKey;
	UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpEdSelKey"), sizeof(FInterpEdSelKey), Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "A group, associated with a particular  AActor  or set of Actors, which contains a set of InterpTracks for interpolating\nproperties of the  AActor  over time.\nThe Outer of an UInterpGroup is an InterpData." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpEdSelKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsnappedPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnsnappedPosition = { UE4CodeGen_Private::EPropertyClass::Float, "UnsnappedPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, UnsnappedPosition), METADATA_PARAMS(NewProp_UnsnappedPosition_MetaData, ARRAY_COUNT(NewProp_UnsnappedPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "KeyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, KeyIndex), METADATA_PARAMS(NewProp_KeyIndex_MetaData, ARRAY_COUNT(NewProp_KeyIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Track = { UE4CodeGen_Private::EPropertyClass::Object, "Track", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, Track), Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(NewProp_Track_MetaData, ARRAY_COUNT(NewProp_Track_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Object, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FInterpEdSelKey, Group), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnsnappedPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Track,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InterpEdSelKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInterpEdSelKey),
				alignof(FInterpEdSelKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpEdSelKey_CRC() { return 2013043753U; }
	void UInterpGroup::StaticRegisterNativesUInterpGroup()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroup_NoRegister()
	{
		return UInterpGroup::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpGroup()
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
				{ "IncludePath", "Matinee/InterpGroup.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "When enabled, this group will be selected in the interp editor." },
			};
#endif
			auto NewProp_bIsSelected_SetBit = [](void* Obj){ ((UInterpGroup*)Obj)->bIsSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSelected_MetaData, ARRAY_COUNT(NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParented_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "When true, this group is considered a 'visual child' of another group.  This doesn't at all affect the behavior of the group, it's only for visual organization.  Also, it's implied that the parent is the next prior group in the array that doesn't have a parent." },
			};
#endif
			auto NewProp_bIsParented_SetBit = [](void* Obj){ ((UInterpGroup*)Obj)->bIsParented = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParented = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsParented", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsParented_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsParented_MetaData, ARRAY_COUNT(NewProp_bIsParented_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFolder_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "When enabled, this group is treated like a folder in the editor, which should only be used for organization.  Folders are never associated with actors and don't have a presence in the Kismet graph." },
			};
#endif
			auto NewProp_bIsFolder_SetBit = [](void* Obj){ ((UInterpGroup*)Obj)->bIsFolder = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFolder = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFolder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFolder_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFolder_MetaData, ARRAY_COUNT(NewProp_bIsFolder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "Whether or not this group is visible in the editor." },
			};
#endif
			auto NewProp_bVisible_SetBit = [](void* Obj){ ((UInterpGroup*)Obj)->bVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisible_MetaData, ARRAY_COUNT(NewProp_bVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "Whether or not this group is folded away in the editor." },
			};
#endif
			auto NewProp_bCollapsed_SetBit = [](void* Obj){ ((UInterpGroup*)Obj)->bCollapsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollapsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollapsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCollapsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCollapsed_MetaData, ARRAY_COUNT(NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupColor_MetaData[] = {
				{ "Category", "InterpGroup" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "Colour used for drawing tracks etc. related to this group." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpGroup, GroupColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_GroupColor_MetaData, ARRAY_COUNT(NewProp_GroupColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
				{ "ToolTip", "Within an InterpData, all GroupNames must be unique.\nUsed for naming Variable connectors on the Action in Kismet and finding each groups object." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpGroup, GroupName), METADATA_PARAMS(NewProp_GroupName_MetaData, ARRAY_COUNT(NewProp_GroupName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpTracks_MetaData[] = {
				{ "Category", "InterpGroup" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpTracks = { UE4CodeGen_Private::EPropertyClass::Array, "InterpTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000000001c, 1, nullptr, STRUCT_OFFSET(UInterpGroup, InterpTracks), METADATA_PARAMS(NewProp_InterpTracks_MetaData, ARRAY_COUNT(NewProp_InterpTracks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InterpTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000008, 1, nullptr, 0, Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsParented,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFolder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCollapsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpTracks_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpGroup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpGroup::StaticClass,
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
	IMPLEMENT_CLASS(UInterpGroup, 3850709776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroup(Z_Construct_UClass_UInterpGroup, &UInterpGroup::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
