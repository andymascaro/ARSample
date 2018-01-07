// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneBindingOverrides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOverrides() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverridesInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneBindingOverrideData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingOverrideData"), sizeof(FMovieSceneBindingOverrideData), Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBindingOverrideData(FMovieSceneBindingOverrideData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneBindingOverrideData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBindingOverrideData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBindingOverrideData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBindingOverrideData")),new UScriptStruct::TCppStructOps<FMovieSceneBindingOverrideData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBindingOverrideData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBindingOverrideData"), sizeof(FMovieSceneBindingOverrideData), Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
				{ "ToolTip", "Movie scene binding override data" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingOverrideData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridesDefault_MetaData[] = {
				{ "Category", "Binding" },
				{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
				{ "ToolTip", "Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (false)." },
			};
#endif
			auto NewProp_bOverridesDefault_SetBit = [](void* Obj){ ((FMovieSceneBindingOverrideData*)Obj)->bOverridesDefault = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverridesDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneBindingOverrideData), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverridesDefault_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverridesDefault_MetaData, ARRAY_COUNT(NewProp_bOverridesDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
				{ "Category", "Binding" },
				{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
				{ "ToolTip", "Specifies the object to override the binding with." },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Object = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Object", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneBindingOverrideData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Object_MetaData, ARRAY_COUNT(NewProp_Object_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[] = {
				{ "Category", "Binding" },
				{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
				{ "ToolTip", "Specifies the object binding to override." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBindingId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneBindingOverrideData, ObjectBindingId), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(NewProp_ObjectBindingId_MetaData, ARRAY_COUNT(NewProp_ObjectBindingId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverridesDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Object,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBindingId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneBindingOverrideData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneBindingOverrideData),
				alignof(FMovieSceneBindingOverrideData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_CRC() { return 867298900U; }
	void UMovieSceneBindingOverrides::StaticRegisterNativesUMovieSceneBindingOverrides()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister()
	{
		return UMovieSceneBindingOverrides::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneBindingOverrides()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneBindingOverrides.h" },
				{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A one-to-many definition of movie scene object binding IDs to overridden objects that should be bound to that binding." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingData_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Binding Overrides" },
				{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
				{ "ToolTip", "The actual binding data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BindingData = { UE4CodeGen_Private::EPropertyClass::Array, "BindingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneBindingOverrides, BindingData), METADATA_PARAMS(NewProp_BindingData_MetaData, ARRAY_COUNT(NewProp_BindingData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BindingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingData_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMovieSceneBindingOverridesInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBindingOverrides, IMovieSceneBindingOverridesInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneBindingOverrides>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneBindingOverrides::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00301080u,
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
	IMPLEMENT_CLASS(UMovieSceneBindingOverrides, 2649030702);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBindingOverrides(Z_Construct_UClass_UMovieSceneBindingOverrides, &UMovieSceneBindingOverrides::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneBindingOverrides"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingOverrides);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
