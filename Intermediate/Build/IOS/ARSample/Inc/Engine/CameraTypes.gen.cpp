// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Camera/CameraTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ECameraAnimPlaySpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraAnimPlaySpace"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraAnimPlaySpace(ECameraAnimPlaySpace_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraAnimPlaySpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraAnimPlaySpace_CRC() { return 2473599160U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraAnimPlaySpace"), 0, Get_Z_Construct_UEnum_Engine_ECameraAnimPlaySpace_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraAnimPlaySpace::CameraLocal", (int64)ECameraAnimPlaySpace::CameraLocal },
				{ "ECameraAnimPlaySpace::World", (int64)ECameraAnimPlaySpace::World },
				{ "ECameraAnimPlaySpace::UserDefined", (int64)ECameraAnimPlaySpace::UserDefined },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CameraLocal.ToolTip", "This anim is applied in camera space." },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "UserDefined.ToolTip", "This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix)." },
				{ "World.ToolTip", "This anim is applied in world space." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECameraAnimPlaySpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECameraAnimPlaySpace::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECameraProjectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraProjectionMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraProjectionMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraProjectionMode(ECameraProjectionMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraProjectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraProjectionMode_CRC() { return 3785166906U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraProjectionMode"), 0, Get_Z_Construct_UEnum_Engine_ECameraProjectionMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraProjectionMode::Perspective", (int64)ECameraProjectionMode::Perspective },
				{ "ECameraProjectionMode::Orthographic", (int64)ECameraProjectionMode::Orthographic },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECameraProjectionMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECameraProjectionMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMinimalViewInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMinimalViewInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalViewInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MinimalViewInfo"), sizeof(FMinimalViewInfo), Get_Z_Construct_UScriptStruct_FMinimalViewInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMinimalViewInfo(FMinimalViewInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MinimalViewInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MinimalViewInfo")),new UScriptStruct::TCppStructOps<FMinimalViewInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMinimalViewInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MinimalViewInfo"), sizeof(FMinimalViewInfo), Get_Z_Construct_UScriptStruct_FMinimalViewInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalViewInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "Off-axis / off-center projection offset as proportion of screen dimensions" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "OffCenterProjectionOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022805, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_OffCenterProjectionOffset_MetaData, ARRAY_COUNT(NewProp_OffCenterProjectionOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "Post-process settings to use if PostProcessBlendWeight is non-zero." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "Indicates if PostProcessSettings should be applied." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, PostProcessBlendWeight), METADATA_PARAMS(NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "The type of camera" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ProjectionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(NewProp_ProjectionMode_MetaData, ARRAY_COUNT(NewProp_ProjectionMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
			};
#endif
			auto NewProp_bUseFieldOfViewForLOD_SetBit = [](void* Obj){ ((FMinimalViewInfo*)Obj)->bUseFieldOfViewForLOD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFieldOfViewForLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMinimalViewInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFieldOfViewForLOD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFieldOfViewForLOD_MetaData, ARRAY_COUNT(NewProp_bUseFieldOfViewForLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
			};
#endif
			auto NewProp_bConstrainAspectRatio_SetBit = [](void* Obj){ ((FMinimalViewInfo*)Obj)->bConstrainAspectRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bConstrainAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMinimalViewInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bConstrainAspectRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bConstrainAspectRatio_MetaData, ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "Aspect Ratio (Width/Height); ignored unless bConstrainAspectRatio is true" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "AspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, AspectRatio), METADATA_PARAMS(NewProp_AspectRatio_MetaData, ARRAY_COUNT(NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoFarClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OrthoFarClipPlane), METADATA_PARAMS(NewProp_OrthoFarClipPlane_MetaData, ARRAY_COUNT(NewProp_OrthoFarClipPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoNearClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OrthoNearClipPlane), METADATA_PARAMS(NewProp_OrthoNearClipPlane_MetaData, ARRAY_COUNT(NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth = { UE4CodeGen_Private::EPropertyClass::Float, "OrthoWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, OrthoWidth), METADATA_PARAMS(NewProp_OrthoWidth_MetaData, ARRAY_COUNT(NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "The field of view (in degrees) in perspective mode (ignored in Orthographic mode)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV = { UE4CodeGen_Private::EPropertyClass::Float, "FOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, FOV), METADATA_PARAMS(NewProp_FOV_MetaData, ARRAY_COUNT(NewProp_FOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "Rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
				{ "ToolTip", "Location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMinimalViewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffCenterProjectionOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessBlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFieldOfViewForLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bConstrainAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoFarClipPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoNearClipPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrthoWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MinimalViewInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMinimalViewInfo),
				alignof(FMinimalViewInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMinimalViewInfo_CRC() { return 25850135U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
