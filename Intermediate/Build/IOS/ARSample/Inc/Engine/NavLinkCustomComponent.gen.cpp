// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkCustomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkCustomComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkCustomComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
// End Cross Module References
	void UNavLinkCustomComponent::StaticRegisterNativesUNavLinkCustomComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister()
	{
		return UNavLinkCustomComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLinkCustomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavLinkCustomComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "Encapsulates NavLinkCustomInterface interface, can be used with Actors not relevant for navigation\n\nAdditional functionality:\n- can be toggled\n- can create obstacle area for easier/forced separation of link end points\n- can broadcast state changes to nearby agents" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastChannel_MetaData[] = {
				{ "Category", "Broadcast" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "trace channel for state change broadcast" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BroadcastChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "BroadcastChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_BroadcastChannel_MetaData, ARRAY_COUNT(NewProp_BroadcastChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastInterval_MetaData[] = {
				{ "Category", "Broadcast" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "interval for state change broadcast (0 = single broadcast)" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BroadcastInterval = { UE4CodeGen_Private::EPropertyClass::Float, "BroadcastInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastInterval), METADATA_PARAMS(NewProp_BroadcastInterval_MetaData, ARRAY_COUNT(NewProp_BroadcastInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastRadius_MetaData[] = {
				{ "Category", "Broadcast" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "radius of state change broadcast" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BroadcastRadius = { UE4CodeGen_Private::EPropertyClass::Float, "BroadcastRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastRadius), METADATA_PARAMS(NewProp_BroadcastRadius_MetaData, ARRAY_COUNT(NewProp_BroadcastRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleAreaClass_MetaData[] = {
				{ "Category", "Obstacle" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "area class for simple box obstacle" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObstacleAreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "ObstacleAreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ObstacleAreaClass_MetaData, ARRAY_COUNT(NewProp_ObstacleAreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleExtent_MetaData[] = {
				{ "Category", "Obstacle" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "extent of simple box obstacle" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "ObstacleExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ObstacleExtent_MetaData, ARRAY_COUNT(NewProp_ObstacleExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleOffset_MetaData[] = {
				{ "Category", "Obstacle" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "offset of simple box obstacle" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ObstacleOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ObstacleOffset_MetaData, ARRAY_COUNT(NewProp_ObstacleOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateBoxObstacle_MetaData[] = {
				{ "Category", "Obstacle" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "if set, box obstacle area will be added to generation" },
			};
#endif
			auto NewProp_bCreateBoxObstacle_SetBit = [](void* Obj){ ((UNavLinkCustomComponent*)Obj)->bCreateBoxObstacle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateBoxObstacle = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateBoxObstacle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavLinkCustomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateBoxObstacle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreateBoxObstacle_MetaData, ARRAY_COUNT(NewProp_bCreateBoxObstacle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyWhenDisabled_MetaData[] = {
				{ "Category", "Broadcast" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "should link notify nearby agents when it changes state to disabled" },
			};
#endif
			auto NewProp_bNotifyWhenDisabled_SetBit = [](void* Obj){ ((UNavLinkCustomComponent*)Obj)->bNotifyWhenDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyWhenDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotifyWhenDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavLinkCustomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNotifyWhenDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNotifyWhenDisabled_MetaData, ARRAY_COUNT(NewProp_bNotifyWhenDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyWhenEnabled_MetaData[] = {
				{ "Category", "Broadcast" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "should link notify nearby agents when it changes state to enabled" },
			};
#endif
			auto NewProp_bNotifyWhenEnabled_SetBit = [](void* Obj){ ((UNavLinkCustomComponent*)Obj)->bNotifyWhenEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyWhenEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotifyWhenEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavLinkCustomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNotifyWhenEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNotifyWhenEnabled_MetaData, ARRAY_COUNT(NewProp_bNotifyWhenEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinkEnabled_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "is link currently in enabled state? (area class)" },
			};
#endif
			auto NewProp_bLinkEnabled_SetBit = [](void* Obj){ ((UNavLinkCustomComponent*)Obj)->bLinkEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinkEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinkEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavLinkCustomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLinkEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLinkEnabled_MetaData, ARRAY_COUNT(NewProp_bLinkEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkDirection_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "direction of link" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkDirection = { UE4CodeGen_Private::EPropertyClass::Byte, "LinkDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, LinkDirection), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(NewProp_LinkDirection_MetaData, ARRAY_COUNT(NewProp_LinkDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkRelativeEnd_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "end point, relative to owner" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkRelativeEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "LinkRelativeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinkRelativeEnd_MetaData, ARRAY_COUNT(NewProp_LinkRelativeEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkRelativeStart_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "start point, relative to owner" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkRelativeStart = { UE4CodeGen_Private::EPropertyClass::Struct, "LinkRelativeStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LinkRelativeStart_MetaData, ARRAY_COUNT(NewProp_LinkRelativeStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledAreaClass_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "area class to use when link is disabled" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DisabledAreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "DisabledAreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, DisabledAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DisabledAreaClass_MetaData, ARRAY_COUNT(NewProp_DisabledAreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledAreaClass_MetaData[] = {
				{ "Category", "SmartLink" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "area class to use when link is enabled" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnabledAreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "EnabledAreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, EnabledAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_EnabledAreaClass_MetaData, ARRAY_COUNT(NewProp_EnabledAreaClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkUserId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkCustomComponent.h" },
				{ "ToolTip", "link Id assigned by navigation system" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NavLinkUserId = { UE4CodeGen_Private::EPropertyClass::UInt32, "NavLinkUserId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UNavLinkCustomComponent, NavLinkUserId), METADATA_PARAMS(NewProp_NavLinkUserId_MetaData, ARRAY_COUNT(NewProp_NavLinkUserId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BroadcastChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BroadcastInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BroadcastRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObstacleAreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObstacleExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObstacleOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateBoxObstacle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNotifyWhenDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNotifyWhenEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLinkEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkRelativeEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinkRelativeStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisabledAreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnabledAreaClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavLinkUserId,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkCustomComponent, INavLinkCustomInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavLinkCustomComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLinkCustomComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkCustomComponent, 3490073201);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkCustomComponent(Z_Construct_UClass_UNavLinkCustomComponent, &UNavLinkCustomComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkCustomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkCustomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
