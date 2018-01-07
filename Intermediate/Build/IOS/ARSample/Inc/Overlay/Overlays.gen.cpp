// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Overlays.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlays() {}
// Cross Module References
	OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
	UPackage* Z_Construct_UPackage__Script_Overlay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FOverlayItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVERLAY_API uint32 Get_Z_Construct_UScriptStruct_FOverlayItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlayItem, Z_Construct_UPackage__Script_Overlay(), TEXT("OverlayItem"), sizeof(FOverlayItem), Get_Z_Construct_UScriptStruct_FOverlayItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOverlayItem(FOverlayItem::StaticStruct, TEXT("/Script/Overlay"), TEXT("OverlayItem"), false, nullptr, nullptr);
static struct FScriptStruct_Overlay_StaticRegisterNativesFOverlayItem
{
	FScriptStruct_Overlay_StaticRegisterNativesFOverlayItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OverlayItem")),new UScriptStruct::TCppStructOps<FOverlayItem>);
	}
} ScriptStruct_Overlay_StaticRegisterNativesFOverlayItem;
	UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOverlayItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Overlay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OverlayItem"), sizeof(FOverlayItem), Get_Z_Construct_UScriptStruct_FOverlayItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Overlays.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlayItem>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "Display Data" },
				{ "ModuleRelativePath", "Public/Overlays.h" },
				{ "ToolTip", "The position of the text on screen (Between 0.0 and 1.0)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOverlayItem, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Display Data" },
				{ "ModuleRelativePath", "Public/Overlays.h" },
				{ "ToolTip", "Text that appears onscreen when the overlay is shown" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOverlayItem, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
				{ "Category", "Display Times" },
				{ "ModuleRelativePath", "Public/Overlays.h" },
				{ "ToolTip", "When the overlay should be cleared" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOverlayItem, EndTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(NewProp_EndTime_MetaData, ARRAY_COUNT(NewProp_EndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "Category", "Display Times" },
				{ "ModuleRelativePath", "Public/Overlays.h" },
				{ "ToolTip", "When the overlay should be displayed" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOverlayItem, StartTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"OverlayItem",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FOverlayItem),
				alignof(FOverlayItem),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOverlayItem_CRC() { return 3492391318U; }
	void UOverlays::StaticRegisterNativesUOverlays()
	{
	}
	UClass* Z_Construct_UClass_UOverlays_NoRegister()
	{
		return UOverlays::StaticClass();
	}
	UClass* Z_Construct_UClass_UOverlays()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Overlays.h" },
				{ "ModuleRelativePath", "Public/Overlays.h" },
				{ "ToolTip", "An interface class for creating overlay data assets" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOverlays>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOverlays::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOverlays, 2759987477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOverlays(Z_Construct_UClass_UOverlays, &UOverlays::StaticClass, TEXT("/Script/Overlay"), TEXT("UOverlays"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlays);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
