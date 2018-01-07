// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_Trail() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailWidthMode();
// End Cross Module References
	static FName NAME_UAnimNotifyState_Trail_OverridePSTemplate = FName(TEXT("OverridePSTemplate"));
	UParticleSystem* UAnimNotifyState_Trail::OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotifyState_Trail_eventOverridePSTemplate_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotifyState_Trail*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Trail_OverridePSTemplate),&Parms);
		return Parms.ReturnValue;
	}
	void UAnimNotifyState_Trail::StaticRegisterNativesUAnimNotifyState_Trail()
	{
	}
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_Trail, "OverridePSTemplate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020800, sizeof(AnimNotifyState_Trail_eventOverridePSTemplate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister()
	{
		return UAnimNotifyState_Trail::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_Trail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate, "OverridePSTemplate" }, // 1180770754
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "Trail" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ShowWorldContextPin", "" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTessellation_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "If true, render the tessellated path between spawned particles" },
			};
#endif
			auto NewProp_bRenderTessellation_SetBit = [](void* Obj){ ((UAnimNotifyState_Trail*)Obj)->bRenderTessellation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTessellation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderTessellation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002011, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotifyState_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderTessellation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderTessellation_MetaData, ARRAY_COUNT(NewProp_bRenderTessellation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTangents_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "If true, render a line showing the tangent at each spawned particle point along the trail" },
			};
#endif
			auto NewProp_bRenderTangents_SetBit = [](void* Obj){ ((UAnimNotifyState_Trail*)Obj)->bRenderTangents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTangents = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderTangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002011, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotifyState_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderTangents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderTangents_MetaData, ARRAY_COUNT(NewProp_bRenderTangents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderSpawnPoints_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "If true, render stars at each spawned particle point along the trail" },
			};
#endif
			auto NewProp_bRenderSpawnPoints_SetBit = [](void* Obj){ ((UAnimNotifyState_Trail*)Obj)->bRenderSpawnPoints = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderSpawnPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderSpawnPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002011, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotifyState_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderSpawnPoints_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderSpawnPoints_MetaData, ARRAY_COUNT(NewProp_bRenderSpawnPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderGeometry_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "If true, render the trail geometry (this should typically be on)" },
			};
#endif
			auto NewProp_bRenderGeometry_SetBit = [](void* Obj){ ((UAnimNotifyState_Trail*)Obj)->bRenderGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002011, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotifyState_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderGeometry_MetaData, ARRAY_COUNT(NewProp_bRenderGeometry_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecycleSpawnedSystems_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
			};
#endif
			auto NewProp_bRecycleSpawnedSystems_SetBit = [](void* Obj){ ((UAnimNotifyState_Trail*)Obj)->bRecycleSpawnedSystems = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecycleSpawnedSystems = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecycleSpawnedSystems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotifyState_Trail), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecycleSpawnedSystems_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecycleSpawnedSystems_MetaData, ARRAY_COUNT(NewProp_bRecycleSpawnedSystems_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthScaleCurve_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "Name of the curve to drive the width scale." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidthScaleCurve = { UE4CodeGen_Private::EPropertyClass::Name, "WidthScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, WidthScaleCurve), METADATA_PARAMS(NewProp_WidthScaleCurve_MetaData, ARRAY_COUNT(NewProp_WidthScaleCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthScaleMode_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "Controls the way width scale is applied. In each method a width scale of 1.0 will mean the width is unchanged from the position of the sockets. A width scale of 0.0 will cause a trail of zero width.\nFrom Centre = Trail width is scaled outwards from the centre point between the two sockets.\nFrom First = Trail width is scaled outwards from the position of the first socket.\nFrom Second = Trail width is scaled outwards from the position of the Second socket." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WidthScaleMode = { UE4CodeGen_Private::EPropertyClass::Byte, "WidthScaleMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, WidthScaleMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(NewProp_WidthScaleMode_MetaData, ARRAY_COUNT(NewProp_WidthScaleMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondSocketName_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "Name of the second socket defining this trail." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SecondSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, SecondSocketName), METADATA_PARAMS(NewProp_SecondSocketName_MetaData, ARRAY_COUNT(NewProp_SecondSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstSocketName_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "Name of the first socket defining this trail." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FirstSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "FirstSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, FirstSocketName), METADATA_PARAMS(NewProp_FirstSocketName_MetaData, ARRAY_COUNT(NewProp_FirstSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[] = {
				{ "Category", "Trail" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
				{ "ToolTip", "The particle system to use for this trail." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "PSTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_PSTemplate_MetaData, ARRAY_COUNT(NewProp_PSTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderTessellation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderTangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderSpawnPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderGeometry,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecycleSpawnedSystems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidthScaleCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidthScaleMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PSTemplate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotifyState_Trail>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotifyState_Trail::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00113080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAnimNotifyState_Trail, 1529929950);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState_Trail(Z_Construct_UClass_UAnimNotifyState_Trail, &UAnimNotifyState_Trail::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState_Trail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_Trail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
