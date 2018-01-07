// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpData::StaticRegisterNativesUInterpData()
	{
	}
	UClass* Z_Construct_UClass_UInterpData_NoRegister()
	{
		return UInterpData::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpData()
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
				{ "IncludePath", "Matinee/InterpData.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Interpolation data, containing keyframe tracks, event tracks etc.\nThis does not contain any  AActor  references or state, so can safely be stored in\npackages, shared between multiple MatineeActors etc." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllEventNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Unique names of all events contained across all event tracks" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllEventNames = { UE4CodeGen_Private::EPropertyClass::Array, "AllEventNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpData, AllEventNames), METADATA_PARAMS(NewProp_AllEventNames_MetaData, ARRAY_COUNT(NewProp_AllEventNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllEventNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AllEventNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDirectorGroup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Cached version of the director group, if any, for easy access while in game" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedDirectorGroup = { UE4CodeGen_Private::EPropertyClass::Object, "CachedDirectorGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UInterpData, CachedDirectorGroup), Z_Construct_UClass_UInterpGroupDirector_NoRegister, METADATA_PARAMS(NewProp_CachedDirectorGroup_MetaData, ARRAY_COUNT(NewProp_CachedDirectorGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBakeAndPrune_MetaData[] = {
				{ "Category", "InterpData" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "If true, then the matinee should be baked and pruned at cook time." },
			};
#endif
			auto NewProp_bShouldBakeAndPrune_SetBit = [](void* Obj){ ((UInterpData*)Obj)->bShouldBakeAndPrune = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBakeAndPrune = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBakeAndPrune", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldBakeAndPrune_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldBakeAndPrune_MetaData, ARRAY_COUNT(NewProp_bShouldBakeAndPrune_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdSectionEnd_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Used in editor for defining sections to loop, stretch etc." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdSectionEnd = { UE4CodeGen_Private::EPropertyClass::Float, "EdSectionEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpData, EdSectionEnd), METADATA_PARAMS(NewProp_EdSectionEnd_MetaData, ARRAY_COUNT(NewProp_EdSectionEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdSectionStart_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Used in editor for defining sections to loop, stretch etc." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdSectionStart = { UE4CodeGen_Private::EPropertyClass::Float, "EdSectionStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpData, EdSectionStart), METADATA_PARAMS(NewProp_EdSectionStart_MetaData, ARRAY_COUNT(NewProp_EdSectionStart_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFilters_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Array of default filters." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultFilters = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UInterpData, DefaultFilters), METADATA_PARAMS(NewProp_DefaultFilters_MetaData, ARRAY_COUNT(NewProp_DefaultFilters_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultFilters_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedFilter_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "The currently selected filter." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedFilter = { UE4CodeGen_Private::EPropertyClass::Object, "SelectedFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UInterpData, SelectedFilter), Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(NewProp_SelectedFilter_MetaData, ARRAY_COUNT(NewProp_SelectedFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFilters_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Used for filtering which tracks are currently visible." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpFilters = { UE4CodeGen_Private::EPropertyClass::Array, "InterpFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UInterpData, InterpFilters), METADATA_PARAMS(NewProp_InterpFilters_MetaData, ARRAY_COUNT(NewProp_InterpFilters_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpFilters_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InterpFilters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveEdSetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Used for curve editor to remember curve-editing setup. Only loaded in editor." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveEdSetup = { UE4CodeGen_Private::EPropertyClass::Object, "CurveEdSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000008, 1, nullptr, STRUCT_OFFSET(UInterpData, CurveEdSetup), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister, METADATA_PARAMS(NewProp_CurveEdSetup_MetaData, ARRAY_COUNT(NewProp_CurveEdSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpGroups_MetaData[] = {
				{ "Category", "InterpData" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Actual interpolation data. Groups of InterpTracks." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpGroups = { UE4CodeGen_Private::EPropertyClass::Array, "InterpGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000000001c, 1, nullptr, STRUCT_OFFSET(UInterpData, InterpGroups), METADATA_PARAMS(NewProp_InterpGroups_MetaData, ARRAY_COUNT(NewProp_InterpGroups_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InterpGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000008, 1, nullptr, 0, Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathBuildTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Position in Interp to move things to for path-building in editor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathBuildTime = { UE4CodeGen_Private::EPropertyClass::Float, "PathBuildTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpData, PathBuildTime), METADATA_PARAMS(NewProp_PathBuildTime_MetaData, ARRAY_COUNT(NewProp_PathBuildTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpLength_MetaData[] = {
				{ "Category", "InterpData" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
				{ "ToolTip", "Duration of interpolation sequence - in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpLength = { UE4CodeGen_Private::EPropertyClass::Float, "InterpLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UInterpData, InterpLength), METADATA_PARAMS(NewProp_InterpLength_MetaData, ARRAY_COUNT(NewProp_InterpLength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllEventNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllEventNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedDirectorGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldBakeAndPrune,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdSectionEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EdSectionStart,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFilters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFilters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFilters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpFilters_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurveEdSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpGroups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathBuildTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpLength,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UInterpData, 2176302337);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpData(Z_Construct_UClass_UInterpData, &UInterpData::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
