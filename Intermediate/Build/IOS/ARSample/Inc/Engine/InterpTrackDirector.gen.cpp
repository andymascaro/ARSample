// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackDirector() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectorTrackCut();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
class UScriptStruct* FDirectorTrackCut::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectorTrackCut, Z_Construct_UPackage__Script_Engine(), TEXT("DirectorTrackCut"), sizeof(FDirectorTrackCut), Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectorTrackCut(FDirectorTrackCut::StaticStruct, TEXT("/Script/Engine"), TEXT("DirectorTrackCut"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDirectorTrackCut
{
	FScriptStruct_Engine_StaticRegisterNativesFDirectorTrackCut()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectorTrackCut")),new UScriptStruct::TCppStructOps<FDirectorTrackCut>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDirectorTrackCut;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectorTrackCut()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectorTrackCut"), sizeof(FDirectorTrackCut), Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "Information for one cut in this track." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectorTrackCut>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotNumber_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "Shot number for developer reference" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotNumber = { UE4CodeGen_Private::EPropertyClass::Int, "ShotNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, ShotNumber), METADATA_PARAMS(NewProp_ShotNumber_MetaData, ARRAY_COUNT(NewProp_ShotNumber_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCamGroup_MetaData[] = {
				{ "Category", "DirectorTrackCut" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "GroupName of UInterpGroup to cut viewpoint to." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetCamGroup = { UE4CodeGen_Private::EPropertyClass::Name, "TargetCamGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, TargetCamGroup), METADATA_PARAMS(NewProp_TargetCamGroup_MetaData, ARRAY_COUNT(NewProp_TargetCamGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "Time taken to move view to new camera." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionTime = { UE4CodeGen_Private::EPropertyClass::Float, "TransitionTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, TransitionTime), METADATA_PARAMS(NewProp_TransitionTime_MetaData, ARRAY_COUNT(NewProp_TransitionTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "Time to perform the cut." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDirectorTrackCut, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShotNumber,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetCamGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransitionTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DirectorTrackCut",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDirectorTrackCut),
				alignof(FDirectorTrackCut),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectorTrackCut_CRC() { return 878697995U; }
	void UInterpTrackDirector::StaticRegisterNativesUInterpTrackDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackDirector_NoRegister()
	{
		return UInterpTrackDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackDirector()
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
				{ "DisplayName", "Director Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackDirector.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCamera_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "The camera actor which the track is currently focused on. Only valid if this track or it's group is selected" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCamera = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackDirector, PreviewCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_PreviewCamera_MetaData, ARRAY_COUNT(NewProp_PreviewCamera_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateCameraCutsOnClients_MetaData[] = {
				{ "Category", "InterpTrackDirector" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "True to allow clients to simulate their own camera cuts.  Can help with latency-induced timing issues." },
			};
#endif
			auto NewProp_bSimulateCameraCutsOnClients_SetBit = [](void* Obj){ ((UInterpTrackDirector*)Obj)->bSimulateCameraCutsOnClients = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateCameraCutsOnClients = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimulateCameraCutsOnClients", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackDirector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSimulateCameraCutsOnClients_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSimulateCameraCutsOnClients_MetaData, ARRAY_COUNT(NewProp_bSimulateCameraCutsOnClients_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
				{ "ToolTip", "Array of cuts between cameras." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CutTrack = { UE4CodeGen_Private::EPropertyClass::Array, "CutTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackDirector, CutTrack), METADATA_PARAMS(NewProp_CutTrack_MetaData, ARRAY_COUNT(NewProp_CutTrack_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutTrack_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CutTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDirectorTrackCut, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewCamera,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSimulateCameraCutsOnClients,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CutTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CutTrack_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackDirector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackDirector::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackDirector, 1486464957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackDirector(Z_Construct_UClass_UInterpTrackDirector, &UInterpTrackDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
