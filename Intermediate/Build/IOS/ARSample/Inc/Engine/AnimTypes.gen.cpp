// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/AnimTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageNotifyTickType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeights();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
// End Cross Module References
	static UEnum* EAxisOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAxisOption, Z_Construct_UPackage__Script_Engine(), TEXT("EAxisOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAxisOption(EAxisOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EAxisOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAxisOption_CRC() { return 3072610801U; }
	UEnum* Z_Construct_UEnum_Engine_EAxisOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAxisOption"), 0, Get_Z_Construct_UEnum_Engine_EAxisOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAxisOption::X", (int64)EAxisOption::X },
				{ "EAxisOption::Y", (int64)EAxisOption::Y },
				{ "EAxisOption::Z", (int64)EAxisOption::Z },
				{ "EAxisOption::X_Neg", (int64)EAxisOption::X_Neg },
				{ "EAxisOption::Y_Neg", (int64)EAxisOption::Y_Neg },
				{ "EAxisOption::Z_Neg", (int64)EAxisOption::Z_Neg },
				{ "EAxisOption::Custom", (int64)EAxisOption::Custom },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAxisOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAxisOption::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAnimInterpolationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInterpolationType, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimInterpolationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimInterpolationType(EAnimInterpolationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimInterpolationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimInterpolationType_CRC() { return 2270008680U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimInterpolationType"), 0, Get_Z_Construct_UEnum_Engine_EAnimInterpolationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimInterpolationType::Linear", (int64)EAnimInterpolationType::Linear },
				{ "EAnimInterpolationType::Step", (int64)EAnimInterpolationType::Step },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.ToolTip", "Linear interpolation when looking up values between keys." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "Step.DisplayName", "Step" },
				{ "Step.ToolTip", "Step interpolation when looking up values between keys." },
				{ "ToolTip", "Indicates how animation should be evaluated between keys." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnimInterpolationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAnimInterpolationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECurveBlendOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECurveBlendOption, Z_Construct_UPackage__Script_Engine(), TEXT("ECurveBlendOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurveBlendOption(ECurveBlendOption_StaticEnum, TEXT("/Script/Engine"), TEXT("ECurveBlendOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECurveBlendOption_CRC() { return 2324452837U; }
	UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurveBlendOption"), 0, Get_Z_Construct_UEnum_Engine_ECurveBlendOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurveBlendOption::MaxWeight", (int64)ECurveBlendOption::MaxWeight },
				{ "ECurveBlendOption::NormalizeByWeight", (int64)ECurveBlendOption::NormalizeByWeight },
				{ "ECurveBlendOption::BlendByWeight", (int64)ECurveBlendOption::BlendByWeight },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlendByWeight.ToolTip", "Blend By Weight without normalizing" },
				{ "MaxWeight.ToolTip", "Find Max Weight of curve and use that weight." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "NormalizeByWeight.ToolTip", "Normalize By Sum of Weight and use it to blend." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECurveBlendOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECurveBlendOption::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAdditiveAnimationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveAnimationType, Z_Construct_UPackage__Script_Engine(), TEXT("EAdditiveAnimationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdditiveAnimationType(EAdditiveAnimationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAdditiveAnimationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAdditiveAnimationType_CRC() { return 3398519296U; }
	UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdditiveAnimationType"), 0, Get_Z_Construct_UEnum_Engine_EAdditiveAnimationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AAT_None", (int64)AAT_None },
				{ "AAT_LocalSpaceBase", (int64)AAT_LocalSpaceBase },
				{ "AAT_RotationOffsetMeshSpace", (int64)AAT_RotationOffsetMeshSpace },
				{ "AAT_MAX", (int64)AAT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAT_LocalSpaceBase.DisplayName", "Local Space" },
				{ "AAT_LocalSpaceBase.ToolTip", "Create Additive from LocalSpace Base." },
				{ "AAT_None.DisplayName", "No additive" },
				{ "AAT_None.ToolTip", "No additive." },
				{ "AAT_RotationOffsetMeshSpace.DisplayName", "Mesh Space" },
				{ "AAT_RotationOffsetMeshSpace.ToolTip", "Create Additive from MeshSpace Rotation Only, Translation still will be LocalSpace." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Indicates whether an animation is additive, and what kind." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAdditiveAnimationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAdditiveAnimationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENotifyFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyFilterType, Z_Construct_UPackage__Script_Engine(), TEXT("ENotifyFilterType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENotifyFilterType(ENotifyFilterType_StaticEnum, TEXT("/Script/Engine"), TEXT("ENotifyFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENotifyFilterType_CRC() { return 571552261U; }
	UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENotifyFilterType"), 0, Get_Z_Construct_UEnum_Engine_ENotifyFilterType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENotifyFilterType::NoFiltering", (int64)ENotifyFilterType::NoFiltering },
				{ "ENotifyFilterType::LOD", (int64)ENotifyFilterType::LOD },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LOD.ToolTip", "Filter By Skeletal Mesh LOD." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "NoFiltering.ToolTip", "No filtering." },
				{ "ToolTip", "Filtering method for deciding whether to trigger a notify." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENotifyFilterType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENotifyFilterType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMontageNotifyTickType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageNotifyTickType, Z_Construct_UPackage__Script_Engine(), TEXT("EMontageNotifyTickType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMontageNotifyTickType(EMontageNotifyTickType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMontageNotifyTickType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMontageNotifyTickType_CRC() { return 1045091798U; }
	UEnum* Z_Construct_UEnum_Engine_EMontageNotifyTickType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMontageNotifyTickType"), 0, Get_Z_Construct_UEnum_Engine_EMontageNotifyTickType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMontageNotifyTickType::Queued", (int64)EMontageNotifyTickType::Queued },
				{ "EMontageNotifyTickType::BranchingPoint", (int64)EMontageNotifyTickType::BranchingPoint },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BranchingPoint.ToolTip", "Trigger notifies as they are encountered (Slower). Suitable for changing sections or montage position." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "Queued.ToolTip", "Queue notifies, and trigger them at the end of the evaluation phase (faster). Not suitable for changing sections or montage position." },
				{ "ToolTip", "Ticking method for AnimNotifies in AnimMontages." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMontageNotifyTickType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMontageNotifyTickType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBoneRotationSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneRotationSource, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneRotationSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneRotationSource(EBoneRotationSource_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneRotationSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneRotationSource_CRC() { return 123795360U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneRotationSource"), 0, Get_Z_Construct_UEnum_Engine_EBoneRotationSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BRS_KeepComponentSpaceRotation", (int64)BRS_KeepComponentSpaceRotation },
				{ "BRS_KeepLocalSpaceRotation", (int64)BRS_KeepLocalSpaceRotation },
				{ "BRS_CopyFromTarget", (int64)BRS_CopyFromTarget },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BRS_CopyFromTarget.DisplayName", "Copy Target Rotation" },
				{ "BRS_CopyFromTarget.ToolTip", "Copy rotation of target to bone." },
				{ "BRS_KeepComponentSpaceRotation.DisplayName", "No Change (Preserve Existing Component Space Rotation)" },
				{ "BRS_KeepComponentSpaceRotation.ToolTip", "Don't change rotation at all." },
				{ "BRS_KeepLocalSpaceRotation.DisplayName", "Maintain Local Rotation Relative to Parent" },
				{ "BRS_KeepLocalSpaceRotation.ToolTip", "Keep forward direction vector relative to the parent bone." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Enum for specifying the source of a bone's rotation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneRotationSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBoneRotationSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBoneControlSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneControlSpace, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneControlSpace"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneControlSpace(EBoneControlSpace_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneControlSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneControlSpace_CRC() { return 2576926453U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneControlSpace"), 0, Get_Z_Construct_UEnum_Engine_EBoneControlSpace_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BCS_WorldSpace", (int64)BCS_WorldSpace },
				{ "BCS_ComponentSpace", (int64)BCS_ComponentSpace },
				{ "BCS_ParentBoneSpace", (int64)BCS_ParentBoneSpace },
				{ "BCS_BoneSpace", (int64)BCS_BoneSpace },
				{ "BCS_MAX", (int64)BCS_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BCS_BoneSpace.DisplayName", "Bone Space" },
				{ "BCS_BoneSpace.ToolTip", "Set position of bone in its own reference frame." },
				{ "BCS_ComponentSpace.DisplayName", "Component Space" },
				{ "BCS_ComponentSpace.ToolTip", "Set position of bone in SkeletalMeshComponent's reference frame." },
				{ "BCS_ParentBoneSpace.DisplayName", "Parent Bone Space" },
				{ "BCS_ParentBoneSpace.ToolTip", "Set position of bone relative to parent bone." },
				{ "BCS_WorldSpace.DisplayName", "World Space" },
				{ "BCS_WorldSpace.ToolTip", "Set absolute position of bone in world space." },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Enum for controlling which reference frame a controller is applied in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneControlSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBoneControlSpace",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBoneAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneAxis(EBoneAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneAxis_CRC() { return 2106248336U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneAxis"), 0, Get_Z_Construct_UEnum_Engine_EBoneAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BA_X", (int64)BA_X },
				{ "BA_Y", (int64)BA_Y },
				{ "BA_Z", (int64)BA_Z },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BA_X.DisplayName", "X Axis" },
				{ "BA_Y.DisplayName", "Y Axis" },
				{ "BA_Z.DisplayName", "Z Axis" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Enum for specifying a specific axis of a bone" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBoneAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBoneAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMarkerSyncData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncData, Z_Construct_UPackage__Script_Engine(), TEXT("MarkerSyncData"), sizeof(FMarkerSyncData), Get_Z_Construct_UScriptStruct_FMarkerSyncData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMarkerSyncData(FMarkerSyncData::StaticStruct, TEXT("/Script/Engine"), TEXT("MarkerSyncData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMarkerSyncData
{
	FScriptStruct_Engine_StaticRegisterNativesFMarkerSyncData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MarkerSyncData")),new UScriptStruct::TCppStructOps<FMarkerSyncData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMarkerSyncData;
	UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MarkerSyncData"), sizeof(FMarkerSyncData), Get_Z_Construct_UScriptStruct_FMarkerSyncData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerSyncData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthoredSyncMarkers_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Authored Sync markers" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AuthoredSyncMarkers = { UE4CodeGen_Private::EPropertyClass::Array, "AuthoredSyncMarkers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMarkerSyncData, AuthoredSyncMarkers), METADATA_PARAMS(NewProp_AuthoredSyncMarkers_MetaData, ARRAY_COUNT(NewProp_AuthoredSyncMarkers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthoredSyncMarkers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AuthoredSyncMarkers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthoredSyncMarkers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthoredSyncMarkers_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MarkerSyncData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMarkerSyncData),
				alignof(FMarkerSyncData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncData_CRC() { return 592850243U; }
class UScriptStruct* FAnimNotifyTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyTrack, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyTrack"), sizeof(FAnimNotifyTrack), Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyTrack(FAnimNotifyTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyTrack")),new UScriptStruct::TCppStructOps<FAnimNotifyTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyTrack;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyTrack"), sizeof(FAnimNotifyTrack), Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num()." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyTrack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyTrack, TrackColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_TrackColor_MetaData, ARRAY_COUNT(NewProp_TrackColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyTrack, TrackName), METADATA_PARAMS(NewProp_TrackName_MetaData, ARRAY_COUNT(NewProp_TrackName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNotifyTrack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimNotifyTrack),
				alignof(FAnimNotifyTrack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyTrack_CRC() { return 3180834604U; }
class UScriptStruct* FAnimSyncMarker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSyncMarker_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSyncMarker, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSyncMarker"), sizeof(FAnimSyncMarker), Get_Z_Construct_UScriptStruct_FAnimSyncMarker_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSyncMarker(FAnimSyncMarker::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSyncMarker"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSyncMarker
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSyncMarker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSyncMarker")),new UScriptStruct::TCppStructOps<FAnimSyncMarker>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSyncMarker;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSyncMarker_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSyncMarker"), sizeof(FAnimSyncMarker), Get_Z_Construct_UScriptStruct_FAnimSyncMarker_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSyncMarker>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "The editor track this marker sits on" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TrackIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FAnimSyncMarker, TrackIndex), METADATA_PARAMS(NewProp_TrackIndex_MetaData, ARRAY_COUNT(NewProp_TrackIndex_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Time in seconds of this marker" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAnimSyncMarker, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "The name of this marker" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerName = { UE4CodeGen_Private::EPropertyClass::Name, "MarkerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FAnimSyncMarker, MarkerName), METADATA_PARAMS(NewProp_MarkerName_MetaData, ARRAY_COUNT(NewProp_MarkerName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIndex,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarkerName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimSyncMarker",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimSyncMarker),
				alignof(FAnimSyncMarker),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSyncMarker_CRC() { return 2005822575U; }
class UScriptStruct* FAnimNotifyEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEvent, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyEvent"), sizeof(FAnimNotifyEvent), Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyEvent(FAnimNotifyEvent::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEvent
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyEvent")),new UScriptStruct::TCppStructOps<FAnimNotifyEvent>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyEvent"), sizeof(FAnimNotifyEvent), Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Triggers an animation notify.  Each AnimNotifyEvent contains an AnimNotify object\nwhich has its Notify method called and passed to the animation." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "'Track' that the notify exists on, used for visual placement in editor and sorting priority in runtime" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TrackIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, TrackIndex), METADATA_PARAMS(NewProp_TrackIndex_MetaData, ARRAY_COUNT(NewProp_TrackIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Color of Notify in editor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NotifyColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_NotifyColor_MetaData, ARRAY_COUNT(NewProp_NotifyColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnDedicatedServer_MetaData[] = {
				{ "Category", "AnimNotifyTriggerSettings" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "If disabled this notify will be skipped on dedicated servers" },
			};
#endif
			auto NewProp_bTriggerOnDedicatedServer_SetBit = [](void* Obj){ ((FAnimNotifyEvent*)Obj)->bTriggerOnDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bTriggerOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNotifyEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTriggerOnDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTriggerOnDedicatedServer_MetaData, ARRAY_COUNT(NewProp_bTriggerOnDedicatedServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterLOD_MetaData[] = {
				{ "Category", "AnimNotifyTriggerSettings" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "LOD to start filtering this notify from." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotifyFilterLOD = { UE4CodeGen_Private::EPropertyClass::Int, "NotifyFilterLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyFilterLOD), METADATA_PARAMS(NewProp_NotifyFilterLOD_MetaData, ARRAY_COUNT(NewProp_NotifyFilterLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterType_MetaData[] = {
				{ "Category", "AnimNotifyTriggerSettings" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Defines a method for filtering notifies (stopping them triggering) e.g. by looking at the meshes current LOD" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyFilterType = { UE4CodeGen_Private::EPropertyClass::Byte, "NotifyFilterType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyFilterType), Z_Construct_UEnum_Engine_ENotifyFilterType, METADATA_PARAMS(NewProp_NotifyFilterType_MetaData, ARRAY_COUNT(NewProp_NotifyFilterType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTriggerChance_MetaData[] = {
				{ "Category", "AnimNotifyTriggerSettings" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Defines the chance of of this notify triggering, 0 = No Chance, 1 = Always triggers" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotifyTriggerChance = { UE4CodeGen_Private::EPropertyClass::Float, "NotifyTriggerChance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyTriggerChance), METADATA_PARAMS(NewProp_NotifyTriggerChance_MetaData, ARRAY_COUNT(NewProp_NotifyTriggerChance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageTickType_MetaData[] = {
				{ "Category", "AnimNotifyEvent" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MontageTickType = { UE4CodeGen_Private::EPropertyClass::Byte, "MontageTickType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, MontageTickType), Z_Construct_UEnum_Engine_EMontageNotifyTickType, METADATA_PARAMS(NewProp_MontageTickType_MetaData, ARRAY_COUNT(NewProp_MontageTickType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConvertedFromBranchingPoint_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "If TRUE, this notify has been converted from an old BranchingPoint." },
			};
#endif
			auto NewProp_bConvertedFromBranchingPoint_SetBit = [](void* Obj){ ((FAnimNotifyEvent*)Obj)->bConvertedFromBranchingPoint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertedFromBranchingPoint = { UE4CodeGen_Private::EPropertyClass::Bool, "bConvertedFromBranchingPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNotifyEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConvertedFromBranchingPoint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConvertedFromBranchingPoint_MetaData, ARRAY_COUNT(NewProp_bConvertedFromBranchingPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLink_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Linkable element to use for the end handle representing a notify state duration" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLink = { UE4CodeGen_Private::EPropertyClass::Struct, "EndLink", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, EndLink), Z_Construct_UScriptStruct_FAnimLinkableElement, METADATA_PARAMS(NewProp_EndLink_MetaData, ARRAY_COUNT(NewProp_EndLink_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyStateClass_MetaData[] = {
				{ "Category", "AnimNotifyEvent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotifyStateClass = { UE4CodeGen_Private::EPropertyClass::Object, "NotifyStateClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyStateClass), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(NewProp_NotifyStateClass_MetaData, ARRAY_COUNT(NewProp_NotifyStateClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notify_MetaData[] = {
				{ "Category", "AnimNotifyEvent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Notify = { UE4CodeGen_Private::EPropertyClass::Object, "Notify", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, Notify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(NewProp_Notify_MetaData, ARRAY_COUNT(NewProp_Notify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[] = {
				{ "Category", "AnimNotifyEvent" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyName), METADATA_PARAMS(NewProp_NotifyName_MetaData, ARRAY_COUNT(NewProp_NotifyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerWeightThreshold_MetaData[] = {
				{ "Category", "AnimNotifyEvent" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerWeightThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "TriggerWeightThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, TriggerWeightThreshold), METADATA_PARAMS(NewProp_TriggerWeightThreshold_MetaData, ARRAY_COUNT(NewProp_TriggerWeightThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTriggerTimeOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "An offset similar to TriggerTimeOffset but used for the end scrub handle of a notify state's duration" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTriggerTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "EndTriggerTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, EndTriggerTimeOffset), METADATA_PARAMS(NewProp_EndTriggerTimeOffset_MetaData, ARRAY_COUNT(NewProp_EndTriggerTimeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTimeOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "TriggerTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, TriggerTimeOffset), METADATA_PARAMS(NewProp_TriggerTimeOffset_MetaData, ARRAY_COUNT(NewProp_TriggerTimeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "The user requested time for this notify" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTime = { UE4CodeGen_Private::EPropertyClass::Float, "DisplayTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, DisplayTime_DEPRECATED), METADATA_PARAMS(NewProp_DisplayTime_MetaData, ARRAY_COUNT(NewProp_DisplayTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIndex,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyColor,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTriggerOnDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyFilterLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyFilterType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyTriggerChance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MontageTickType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConvertedFromBranchingPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndLink,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyStateClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Notify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriggerWeightThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTriggerTimeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriggerTimeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimLinkableElement,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNotifyEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FAnimNotifyEvent),
				alignof(FAnimNotifyEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEvent_CRC() { return 916101371U; }
class UScriptStruct* FPerBoneBlendWeights::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneBlendWeights, Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneBlendWeights"), sizeof(FPerBoneBlendWeights), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerBoneBlendWeights(FPerBoneBlendWeights::StaticStruct, TEXT("/Script/Engine"), TEXT("PerBoneBlendWeights"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeights
{
	FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeights()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerBoneBlendWeights")),new UScriptStruct::TCppStructOps<FPerBoneBlendWeights>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeights;
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeights()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerBoneBlendWeights"), sizeof(FPerBoneBlendWeights), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneBlendWeights>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneBlendWeights_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneBlendWeights = { UE4CodeGen_Private::EPropertyClass::Array, "BoneBlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPerBoneBlendWeights, BoneBlendWeights), METADATA_PARAMS(NewProp_BoneBlendWeights_MetaData, ARRAY_COUNT(NewProp_BoneBlendWeights_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneBlendWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneBlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneBlendWeights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneBlendWeights_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PerBoneBlendWeights",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPerBoneBlendWeights),
				alignof(FPerBoneBlendWeights),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeights_CRC() { return 3912871445U; }
class UScriptStruct* FPerBoneBlendWeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneBlendWeight, Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneBlendWeight"), sizeof(FPerBoneBlendWeight), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerBoneBlendWeight(FPerBoneBlendWeight::StaticStruct, TEXT("/Script/Engine"), TEXT("PerBoneBlendWeight"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeight
{
	FScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeight()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerBoneBlendWeight")),new UScriptStruct::TCppStructOps<FPerBoneBlendWeight>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerBoneBlendWeight;
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerBoneBlendWeight"), sizeof(FPerBoneBlendWeight), Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneBlendWeight>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPerBoneBlendWeight, BlendWeight), METADATA_PARAMS(NewProp_BlendWeight_MetaData, ARRAY_COUNT(NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
				{ "ToolTip", "Source index of the buffer." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPerBoneBlendWeight, SourceIndex), METADATA_PARAMS(NewProp_SourceIndex_MetaData, ARRAY_COUNT(NewProp_SourceIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PerBoneBlendWeight",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPerBoneBlendWeight),
				alignof(FPerBoneBlendWeight),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerBoneBlendWeight_CRC() { return 3937341231U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
