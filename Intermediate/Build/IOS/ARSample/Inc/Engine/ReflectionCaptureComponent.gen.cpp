// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	static UEnum* EReflectionSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionSourceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionSourceType(EReflectionSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("EReflectionSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReflectionSourceType_CRC() { return 2190416055U; }
	UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionSourceType"), 0, Get_Z_Construct_UEnum_Engine_EReflectionSourceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionSourceType::CapturedScene", (int64)EReflectionSourceType::CapturedScene },
				{ "EReflectionSourceType::SpecifiedCubemap", (int64)EReflectionSourceType::SpecifiedCubemap },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CapturedScene.ToolTip", "Construct the reflection source from the captured scene" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "SpecifiedCubemap.ToolTip", "Construct the reflection source from the specified cubemap." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EReflectionSourceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EReflectionSourceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UReflectionCaptureComponent::StaticRegisterNativesUReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/ReflectionCaptureComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId = { UE4CodeGen_Private::EPropertyClass::Struct, "StateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_StateId_MetaData, ARRAY_COUNT(NewProp_StateId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "ToolTip", "World space offset to apply before capturing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "CaptureOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CaptureOffset_MetaData, ARRAY_COUNT(NewProp_CaptureOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "ToolTip", "A brightness control to scale the captured scene's reflection intensity." },
				{ "UIMax", "4" },
				{ "UIMin", ".5" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness = { UE4CodeGen_Private::EPropertyClass::Float, "Brightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, Brightness), METADATA_PARAMS(NewProp_Brightness_MetaData, ARRAY_COUNT(NewProp_Brightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
				{ "UIMax", "360" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SourceCubemapAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, SourceCubemapAngle), METADATA_PARAMS(NewProp_SourceCubemapAngle_MetaData, ARRAY_COUNT(NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "ToolTip", "Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap = { UE4CodeGen_Private::EPropertyClass::Object, "Cubemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(NewProp_Cubemap_MetaData, ARRAY_COUNT(NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionSourceType_MetaData[] = {
				{ "Category", "ReflectionCapture" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "ToolTip", "Indicates where to get the reflection source from." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflectionSourceType = { UE4CodeGen_Private::EPropertyClass::Enum, "ReflectionSourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, ReflectionSourceType), Z_Construct_UEnum_Engine_EReflectionSourceType, METADATA_PARAMS(NewProp_ReflectionSourceType_MetaData, ARRAY_COUNT(NewProp_ReflectionSourceType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReflectionSourceType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureOffsetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureOffsetComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_CaptureOffsetComponent_MetaData, ARRAY_COUNT(NewProp_CaptureOffsetComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Brightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceCubemapAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cubemap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReflectionSourceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReflectionSourceType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureOffsetComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReflectionCaptureComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReflectionCaptureComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80081u,
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
	IMPLEMENT_CLASS(UReflectionCaptureComponent, 1054078790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReflectionCaptureComponent(Z_Construct_UClass_UReflectionCaptureComponent, &UReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
