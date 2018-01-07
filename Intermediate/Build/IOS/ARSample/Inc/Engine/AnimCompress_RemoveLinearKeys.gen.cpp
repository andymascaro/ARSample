// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_RemoveLinearKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveLinearKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveLinearKeys::StaticRegisterNativesUAnimCompress_RemoveLinearKeys()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys_NoRegister()
	{
		return UAnimCompress_RemoveLinearKeys::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCompress,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActuallyFilterLinearKeys_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "Controls whether the final filtering step will occur, or only the retargetting after bitwise compression.\nIf both this and bRetarget are false, then the linear compressor will do no better than the underlying bitwise compressor, extremely slowly." },
			};
#endif
			auto NewProp_bActuallyFilterLinearKeys_SetBit = [](void* Obj){ ((UAnimCompress_RemoveLinearKeys*)Obj)->bActuallyFilterLinearKeys = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActuallyFilterLinearKeys = { UE4CodeGen_Private::EPropertyClass::Bool, "bActuallyFilterLinearKeys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bActuallyFilterLinearKeys_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bActuallyFilterLinearKeys_MetaData, ARRAY_COUNT(NewProp_bActuallyFilterLinearKeys_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRetarget_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "true = As the animation is compressed, adjust animated nodes to compensate for compression error.\nfalse= Do not adjust animated nodes." },
			};
#endif
			auto NewProp_bRetarget_SetBit = [](void* Obj){ ((UAnimCompress_RemoveLinearKeys*)Obj)->bRetarget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRetarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bRetarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_RemoveLinearKeys), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRetarget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRetarget_MetaData, ARRAY_COUNT(NewProp_bRetarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentKeyScale_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "A scale value which increases the likelihood that a bone will retain a key if it's parent also had a key at the same time position.\nHigher values can remove shaking artifacts from the animation, at the cost of compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParentKeyScale = { UE4CodeGen_Private::EPropertyClass::Float, "ParentKeyScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, ParentKeyScale), METADATA_PARAMS(NewProp_ParentKeyScale_MetaData, ARRAY_COUNT(NewProp_ParentKeyScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorDiffSocket_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "Error threshold for End Effectors with Sockets attached to them.\nTypically more important bone, where we want to be less aggressive with compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectorDiffSocket = { UE4CodeGen_Private::EPropertyClass::Float, "EffectorDiffSocket", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, EffectorDiffSocket), METADATA_PARAMS(NewProp_EffectorDiffSocket_MetaData, ARRAY_COUNT(NewProp_EffectorDiffSocket_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinEffectorDiff_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "As keys are tested for removal, we monitor the effects all the way down to the end effectors.\nIf their position changes by more than this amount as a result of removing a key, the key will be retained.\nThis value is used for the end-effectors parent, allowing tighter restrictions near the end of a skeletal chain." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinEffectorDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MinEffectorDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MinEffectorDiff), METADATA_PARAMS(NewProp_MinEffectorDiff_MetaData, ARRAY_COUNT(NewProp_MinEffectorDiff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEffectorDiff_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "As keys are tested for removal, we monitor the effects all the way down to the end effectors.\nIf their position changes by more than this amount as a result of removing a key, the key will be retained.\nThis value is used for all bones except the end-effectors parent." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEffectorDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxEffectorDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxEffectorDiff), METADATA_PARAMS(NewProp_MaxEffectorDiff_MetaData, ARRAY_COUNT(NewProp_MaxEffectorDiff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "Maximum Scale difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScaleDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxScaleDiff), METADATA_PARAMS(NewProp_MaxScaleDiff_MetaData, ARRAY_COUNT(NewProp_MaxScaleDiff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngleDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxAngleDiff), METADATA_PARAMS(NewProp_MaxAngleDiff_MetaData, ARRAY_COUNT(NewProp_MaxAngleDiff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[] = {
				{ "Category", "LinearKeyRemoval" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveLinearKeys.h" },
				{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPosDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveLinearKeys, MaxPosDiff), METADATA_PARAMS(NewProp_MaxPosDiff_MetaData, ARRAY_COUNT(NewProp_MaxPosDiff_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bActuallyFilterLinearKeys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRetarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentKeyScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectorDiffSocket,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinEffectorDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxEffectorDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScaleDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAngleDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPosDiff,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_RemoveLinearKeys>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_RemoveLinearKeys::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UAnimCompress_RemoveLinearKeys, 3208753175);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_RemoveLinearKeys(Z_Construct_UClass_UAnimCompress_RemoveLinearKeys, &UAnimCompress_RemoveLinearKeys::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_RemoveLinearKeys"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveLinearKeys);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
