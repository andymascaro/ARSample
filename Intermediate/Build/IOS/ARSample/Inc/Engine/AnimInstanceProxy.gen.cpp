// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/AnimInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceProxy() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQueuedDrawDebugItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EDrawDebugItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDrawDebugItemType, Z_Construct_UPackage__Script_Engine(), TEXT("EDrawDebugItemType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDrawDebugItemType(EDrawDebugItemType_StaticEnum, TEXT("/Script/Engine"), TEXT("EDrawDebugItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDrawDebugItemType_CRC() { return 2051544542U; }
	UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDrawDebugItemType"), 0, Get_Z_Construct_UEnum_Engine_EDrawDebugItemType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDrawDebugItemType::DirectionalArrow", (int64)EDrawDebugItemType::DirectionalArrow },
				{ "EDrawDebugItemType::Sphere", (int64)EDrawDebugItemType::Sphere },
				{ "EDrawDebugItemType::Line", (int64)EDrawDebugItemType::Line },
				{ "EDrawDebugItemType::OnScreenMessage", (int64)EDrawDebugItemType::OnScreenMessage },
				{ "EDrawDebugItemType::CoordinateSystem", (int64)EDrawDebugItemType::CoordinateSystem },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDrawDebugItemType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EDrawDebugItemType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceProxy, Z_Construct_UPackage__Script_Engine(), TEXT("AnimInstanceProxy"), sizeof(FAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimInstanceProxy(FAnimInstanceProxy::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimInstanceProxy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimInstanceProxy"), sizeof(FAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "DisplayName", "Native Variables" },
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
				{ "ToolTip", "Proxy object passed around during animation tree update in lieu of a UAnimInstance" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceProxy>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimInstanceProxy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimInstanceProxy),
				alignof(FAnimInstanceProxy),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_CRC() { return 2675130839U; }
class UScriptStruct* FQueuedDrawDebugItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueuedDrawDebugItem, Z_Construct_UPackage__Script_Engine(), TEXT("QueuedDrawDebugItem"), sizeof(FQueuedDrawDebugItem), Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueuedDrawDebugItem(FQueuedDrawDebugItem::StaticStruct, TEXT("/Script/Engine"), TEXT("QueuedDrawDebugItem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQueuedDrawDebugItem
{
	FScriptStruct_Engine_StaticRegisterNativesFQueuedDrawDebugItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QueuedDrawDebugItem")),new UScriptStruct::TCppStructOps<FQueuedDrawDebugItem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQueuedDrawDebugItem;
	UScriptStruct* Z_Construct_UScriptStruct_FQueuedDrawDebugItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueuedDrawDebugItem"), sizeof(FQueuedDrawDebugItem), Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueuedDrawDebugItem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextScale = { UE4CodeGen_Private::EPropertyClass::Struct, "TextScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, TextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_TextScale_MetaData, ARRAY_COUNT(NewProp_TextScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Str, "Message", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Message), METADATA_PARAMS(NewProp_Message_MetaData, ARRAY_COUNT(NewProp_Message_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness = { UE4CodeGen_Private::EPropertyClass::Float, "Thickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Thickness), METADATA_PARAMS(NewProp_Thickness_MetaData, ARRAY_COUNT(NewProp_Thickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "LifeTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, LifeTime), METADATA_PARAMS(NewProp_LifeTime_MetaData, ARRAY_COUNT(NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistentLines_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			auto NewProp_bPersistentLines_SetBit = [](void* Obj){ ((FQueuedDrawDebugItem*)Obj)->bPersistentLines = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistentLines = { UE4CodeGen_Private::EPropertyClass::Bool, "bPersistentLines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FQueuedDrawDebugItem), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPersistentLines_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPersistentLines_MetaData, ARRAY_COUNT(NewProp_bPersistentLines_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments = { UE4CodeGen_Private::EPropertyClass::Int, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Segments), METADATA_PARAMS(NewProp_Segments_MetaData, ARRAY_COUNT(NewProp_Segments_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Float, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLoc_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "EndLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, EndLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EndLoc_MetaData, ARRAY_COUNT(NewProp_EndLoc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartLoc_MetaData, ARRAY_COUNT(NewProp_StartLoc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Byte, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FQueuedDrawDebugItem, ItemType), Z_Construct_UEnum_Engine_EDrawDebugItemType, METADATA_PARAMS(NewProp_ItemType_MetaData, ARRAY_COUNT(NewProp_ItemType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Message,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LifeTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPersistentLines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ItemType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"QueuedDrawDebugItem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FQueuedDrawDebugItem),
				alignof(FQueuedDrawDebugItem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_CRC() { return 2310395139U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
