// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/MemberReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemberReference() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMemberReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMemberReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemberReference, Z_Construct_UPackage__Script_Engine(), TEXT("MemberReference"), sizeof(FMemberReference), Get_Z_Construct_UScriptStruct_FMemberReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMemberReference(FMemberReference::StaticStruct, TEXT("/Script/Engine"), TEXT("MemberReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMemberReference
{
	FScriptStruct_Engine_StaticRegisterNativesFMemberReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MemberReference")),new UScriptStruct::TCppStructOps<FMemberReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMemberReference;
	UScriptStruct* Z_Construct_UScriptStruct_FMemberReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMemberReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MemberReference"), sizeof(FMemberReference), Get_Z_Construct_UScriptStruct_FMemberReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
				{ "ToolTip", "@TODO: this can encapsulate globally defined fields as well (like with native\n       delegate signatures); consider renaming to FFieldReference" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemberReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasDeprecated_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
				{ "ToolTip", "Whether or not this property has been deprecated" },
			};
#endif
			auto NewProp_bWasDeprecated_SetBit = [](void* Obj){ ((FMemberReference*)Obj)->bWasDeprecated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasDeprecated = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasDeprecated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMemberReference), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWasDeprecated_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWasDeprecated_MetaData, ARRAY_COUNT(NewProp_bWasDeprecated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelfContext_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
				{ "ToolTip", "Whether or not this should be a \"self\" context" },
			};
#endif
			auto NewProp_bSelfContext_SetBit = [](void* Obj){ ((FMemberReference*)Obj)->bSelfContext = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfContext = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelfContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMemberReference), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelfContext_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelfContext_MetaData, ARRAY_COUNT(NewProp_bSelfContext_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
				{ "ToolTip", "The Guid of the variable" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "MemberGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_MemberGuid_MetaData, ARRAY_COUNT(NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
				{ "ToolTip", "Name of variable" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MemberName = { UE4CodeGen_Private::EPropertyClass::Name, "MemberName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMemberReference, MemberName), METADATA_PARAMS(NewProp_MemberName_MetaData, ARRAY_COUNT(NewProp_MemberName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberScope_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberScope = { UE4CodeGen_Private::EPropertyClass::Str, "MemberScope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMemberReference, MemberScope), METADATA_PARAMS(NewProp_MemberScope_MetaData, ARRAY_COUNT(NewProp_MemberScope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
				{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally). Should\nbe NULL if bSelfContext is true." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MemberParent = { UE4CodeGen_Private::EPropertyClass::Object, "MemberParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_MemberParent_MetaData, ARRAY_COUNT(NewProp_MemberParent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWasDeprecated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelfContext,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberScope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MemberParent,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MemberReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMemberReference),
				alignof(FMemberReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMemberReference_CRC() { return 1556386661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
