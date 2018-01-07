// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PoseWatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseWatch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void UPoseWatch::StaticRegisterNativesUPoseWatch()
	{
	}
	UClass* Z_Construct_UClass_UPoseWatch_NoRegister()
	{
		return UPoseWatch::StaticClass();
	}
	UClass* Z_Construct_UClass_UPoseWatch()
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
				{ "IncludePath", "Engine/PoseWatch.h" },
				{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseWatchColour_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseWatchColour = { UE4CodeGen_Private::EPropertyClass::Struct, "PoseWatchColour", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPoseWatch, PoseWatchColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_PoseWatchColour_MetaData, ARRAY_COUNT(NewProp_PoseWatchColour_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
				{ "ToolTip", "Node that we are trying to watch" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Object, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPoseWatch, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(NewProp_Node_MetaData, ARRAY_COUNT(NewProp_Node_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseWatchColour,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPoseWatch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPoseWatch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UPoseWatch, 2869454973);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseWatch(Z_Construct_UClass_UPoseWatch, &UPoseWatch::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseWatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
