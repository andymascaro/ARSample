// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpGroupCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupCamera() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraPreviewInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupCamera();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
class UScriptStruct* FCameraPreviewInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraPreviewInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraPreviewInfo"), sizeof(FCameraPreviewInfo), Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraPreviewInfo(FCameraPreviewInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraPreviewInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraPreviewInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraPreviewInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraPreviewInfo")),new UScriptStruct::TCppStructOps<FCameraPreviewInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraPreviewInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraPreviewInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraPreviewInfo"), sizeof(FCameraPreviewInfo), Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
				{ "ToolTip", "Preview APawn class for this track" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraPreviewInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnInst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
				{ "ToolTip", "APawn Inst - CameraAnimInst doesn't really exist in editor *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnInst = { UE4CodeGen_Private::EPropertyClass::Object, "PawnInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FCameraPreviewInfo, PawnInst), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_PawnInst_MetaData, ARRAY_COUNT(NewProp_PawnInst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "CameraPreviewInfo" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCameraPreviewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "CameraPreviewInfo" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
				{ "ToolTip", "for now this is read-only. It has maintenance issue to be resolved if I enable this." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FCameraPreviewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[] = {
				{ "Category", "CameraPreviewInfo" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSeq = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSeq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCameraPreviewInfo, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_AnimSeq_MetaData, ARRAY_COUNT(NewProp_AnimSeq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
				{ "Category", "CameraPreviewInfo" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass = { UE4CodeGen_Private::EPropertyClass::Class, "PawnClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FCameraPreviewInfo, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PawnClass_MetaData, ARRAY_COUNT(NewProp_PawnClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSeq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraPreviewInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraPreviewInfo),
				alignof(FCameraPreviewInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraPreviewInfo_CRC() { return 2389944960U; }
	void UInterpGroupCamera::StaticRegisterNativesUInterpGroupCamera()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupCamera_NoRegister()
	{
		return UInterpGroupCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpGroupCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpGroup,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Matinee/InterpGroupCamera.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressTolerance_MetaData[] = {
				{ "Category", "InterpGroupCamera" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
				{ "ToolTip", "When compress, tolerance option *" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "CompressTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpGroupCamera, CompressTolerance), METADATA_PARAMS(NewProp_CompressTolerance_MetaData, ARRAY_COUNT(NewProp_CompressTolerance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "Category", "InterpGroupCamera" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
				{ "ToolTip", "this is interaction property info for CameraAnim\nthis information isn't really saved with it" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Struct, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UInterpGroupCamera, Target), Z_Construct_UScriptStruct_FCameraPreviewInfo, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimInst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnimInst = { UE4CodeGen_Private::EPropertyClass::Object, "CameraAnimInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UInterpGroupCamera, CameraAnimInst), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(NewProp_CameraAnimInst_MetaData, ARRAY_COUNT(NewProp_CameraAnimInst_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressTolerance,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraAnimInst,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpGroupCamera>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpGroupCamera::StaticClass,
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
	IMPLEMENT_CLASS(UInterpGroupCamera, 278933867);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupCamera(Z_Construct_UClass_UInterpGroupCamera, &UInterpGroupCamera::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
