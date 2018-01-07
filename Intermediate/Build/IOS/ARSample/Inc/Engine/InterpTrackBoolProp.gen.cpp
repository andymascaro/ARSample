// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackBoolProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackBoolProp() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoolTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackBoolProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackBoolProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
class UScriptStruct* FBoolTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoolTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("BoolTrackKey"), sizeof(FBoolTrackKey), Get_Z_Construct_UScriptStruct_FBoolTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoolTrackKey(FBoolTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("BoolTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoolTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFBoolTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoolTrackKey")),new UScriptStruct::TCppStructOps<FBoolTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoolTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FBoolTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoolTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoolTrackKey"), sizeof(FBoolTrackKey), Get_Z_Construct_UScriptStruct_FBoolTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
				{ "ToolTip", "Information for one event in the track." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolTrackKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "BoolTrackKey" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
			};
#endif
			auto NewProp_Value_SetBit = [](void* Obj){ ((FBoolTrackKey*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBoolTrackKey), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBoolTrackKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoolTrackKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoolTrackKey),
				alignof(FBoolTrackKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoolTrackKey_CRC() { return 2073351547U; }
	void UInterpTrackBoolProp::StaticRegisterNativesUInterpTrackBoolProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackBoolProp_NoRegister()
	{
		return UInterpTrackBoolProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackBoolProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Bool Property Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackBoolProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
				{ "Category", "InterpTrackBoolProp" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
				{ "ToolTip", "Name of property in Group  AActor  which this track will modify over time." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UInterpTrackBoolProp, PropertyName), METADATA_PARAMS(NewProp_PropertyName_MetaData, ARRAY_COUNT(NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
				{ "ToolTip", "Array of booleans to set." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolTrack = { UE4CodeGen_Private::EPropertyClass::Array, "BoolTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackBoolProp, BoolTrack), METADATA_PARAMS(NewProp_BoolTrack_MetaData, ARRAY_COUNT(NewProp_BoolTrack_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolTrack_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoolTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoolTrackKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolTrack_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackBoolProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackBoolProp::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackBoolProp, 562250966);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackBoolProp(Z_Construct_UClass_UInterpTrackBoolProp, &UInterpTrackBoolProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackBoolProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackBoolProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
