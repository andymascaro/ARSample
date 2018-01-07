// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceActor() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoundActorProxy(FBoundActorProxy::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("BoundActorProxy"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoundActorProxy")),new UScriptStruct::TCppStructOps<FBoundActorProxy>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy;
	UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundActorProxy>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundActor_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Specifies the actor to override the binding with" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor = { UE4CodeGen_Private::EPropertyClass::Object, "BoundActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800000801, 1, nullptr, STRUCT_OFFSET(FBoundActorProxy, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_BoundActor_MetaData, ARRAY_COUNT(NewProp_BoundActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundActor,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoundActorProxy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoundActorProxy),
				alignof(FBoundActorProxy),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_CRC() { return 2411270466U; }
	void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "LevelSequenceActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelSequenceBurnInInitSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelSequenceBurnInInitSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300080u,
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
	IMPLEMENT_CLASS(ULevelSequenceBurnInInitSettings, 3617776764);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings(Z_Construct_UClass_ULevelSequenceBurnInInitSettings, &ULevelSequenceBurnInInitSettings::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInInitSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
	void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LevelSequenceActor.h" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "General" },
				{ "EditCondition", "bUseBurnIn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Object, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080009, 1, nullptr, STRUCT_OFFSET(ULevelSequenceBurnInOptions, Settings), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[] = {
				{ "Category", "General" },
				{ "EditCondition", "bUseBurnIn" },
				{ "MetaClass", "LevelSequenceBurnIn" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurnInClass = { UE4CodeGen_Private::EPropertyClass::Struct, "BurnInClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULevelSequenceBurnInOptions, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(NewProp_BurnInClass_MetaData, ARRAY_COUNT(NewProp_BurnInClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBurnIn_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			auto NewProp_bUseBurnIn_SetBit = [](void* Obj){ ((ULevelSequenceBurnInOptions*)Obj)->bUseBurnIn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBurnIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBurnIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULevelSequenceBurnInOptions), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseBurnIn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseBurnIn_MetaData, ARRAY_COUNT(NewProp_bUseBurnIn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurnInClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseBurnIn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelSequenceBurnInOptions>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelSequenceBurnInOptions::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(ULevelSequenceBurnInOptions, 962914299);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions(Z_Construct_UClass_ULevelSequenceBurnInOptions, &ULevelSequenceBurnInOptions::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
	void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
	{
		UClass* Class = ALevelSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", (Native)&ALevelSequenceActor::execAddBinding },
			{ "GetSequence", (Native)&ALevelSequenceActor::execGetSequence },
			{ "RemoveBinding", (Native)&ALevelSequenceActor::execRemoveBinding },
			{ "ResetBinding", (Native)&ALevelSequenceActor::execResetBinding },
			{ "ResetBindings", (Native)&ALevelSequenceActor::execResetBindings },
			{ "SetBinding", (Native)&ALevelSequenceActor::execSetBinding },
			{ "SetEventReceivers", (Native)&ALevelSequenceActor::execSetEventReceivers },
			{ "SetSequence", (Native)&ALevelSequenceActor::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
	{
		struct LevelSequenceActor_eventAddBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAllowBindingsFromAsset_SetBit = [](void* Obj){ ((LevelSequenceActor_eventAddBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowBindingsFromAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventAddBinding_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowBindingsFromAsset_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowBindingsFromAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Binding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic|Bindings" },
				{ "CPP_Default_bAllowBindingsFromAsset", "false" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "AddBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventAddBinding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
	{
		struct LevelSequenceActor_eventGetSequence_Parms
		{
			bool bLoad;
			bool bInitializePlayer;
			ULevelSequence* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bInitializePlayer_SetBit = [](void* Obj){ ((LevelSequenceActor_eventGetSequence_Parms*)Obj)->bInitializePlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializePlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitializePlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventGetSequence_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInitializePlayer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bLoad_SetBit = [](void* Obj){ ((LevelSequenceActor_eventGetSequence_Parms*)Obj)->bLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventGetSequence_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoad_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInitializePlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoad,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "CPP_Default_bInitializePlayer", "false" },
				{ "CPP_Default_bLoad", "false" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Get the level sequence being played by this actor.\n\n@param bLoad Whether to load the sequence object if it is not already in memory.\n@param bInitializePlayer Whether to initialize the player when the sequence has been loaded.\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "GetSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LevelSequenceActor_eventGetSequence_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
	{
		struct LevelSequenceActor_eventRemoveBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Binding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic|Bindings" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "RemoveBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventRemoveBinding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
	{
		struct LevelSequenceActor_eventResetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventResetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Binding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic|Bindings" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Resets the specified binding back to the defaults defined by the Level Sequence asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "ResetBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventResetBinding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic|Bindings" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Resets all overridden bindings back to the defaults defined by the Level Sequence asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "ResetBindings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
	{
		struct LevelSequenceActor_eventSetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAllowBindingsFromAsset_SetBit = [](void* Obj){ ((LevelSequenceActor_eventSetBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowBindingsFromAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelSequenceActor_eventSetBinding_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowBindingsFromAsset_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Actors), METADATA_PARAMS(NewProp_Actors_MetaData, ARRAY_COUNT(NewProp_Actors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding = { UE4CodeGen_Private::EPropertyClass::Struct, "Binding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowBindingsFromAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Binding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic|Bindings" },
				{ "CPP_Default_bAllowBindingsFromAsset", "false" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "SetBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(LevelSequenceActor_eventSetBinding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers()
	{
		struct LevelSequenceActor_eventSetEventReceivers_Parms
		{
			TArray<AActor*> AdditionalReceivers;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetEventReceivers_Parms, AdditionalReceivers), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalReceivers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalReceivers_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Set an array of additional actors that will receive events triggerd from this sequence actor\n\n@param AdditionalReceivers An array of actors to receive events" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "SetEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventSetEventReceivers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
	{
		struct LevelSequenceActor_eventSetSequence_Parms
		{
			ULevelSequence* InSequence;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence = { UE4CodeGen_Private::EPropertyClass::Object, "InSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSequence,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, "SetSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelSequenceActor_eventSetSequence_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
	{
		return ALevelSequenceActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALevelSequenceActor_AddBinding, "AddBinding" }, // 309955494
				{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequence, "GetSequence" }, // 1476724055
				{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding, "RemoveBinding" }, // 3241561351
				{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding, "ResetBinding" }, // 1613112321
				{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings, "ResetBindings" }, // 465853571
				{ &Z_Construct_UFunction_ALevelSequenceActor_SetBinding, "SetBinding" }, // 1110467239
				{ &Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers, "SetEventReceivers" }, // 2371340115
				{ &Z_Construct_UFunction_ALevelSequenceActor_SetSequence, "SetSequence" }, // 386211371
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Physics LOD Activation" },
				{ "IncludePath", "LevelSequenceActor.h" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Actor responsible for controlling a specific level sequence in the world." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInInstance_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Burn-in widget" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInInstance = { UE4CodeGen_Private::EPropertyClass::Object, "BurnInInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister, METADATA_PARAMS(NewProp_BurnInInstance_MetaData, ARRAY_COUNT(NewProp_BurnInInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[] = {
				{ "Category", "General" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ToolTip", "Mapping of actors to override the sequence bindings with" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BindingOverrides = { UE4CodeGen_Private::EPropertyClass::Object, "BindingOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120400000a001d, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister, METADATA_PARAMS(NewProp_BindingOverrides_MetaData, ARRAY_COUNT(NewProp_BindingOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[] = {
				{ "Category", "General" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions = { UE4CodeGen_Private::EPropertyClass::Object, "BurnInOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120400000a001d, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(NewProp_BurnInOptions_MetaData, ARRAY_COUNT(NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalEventReceivers_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalEventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, AdditionalEventReceivers), METADATA_PARAMS(NewProp_AdditionalEventReceivers_MetaData, ARRAY_COUNT(NewProp_AdditionalEventReceivers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalEventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[] = {
				{ "AllowedClasses", "LevelSequence" },
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSequence = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, LevelSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_LevelSequence_MetaData, ARRAY_COUNT(NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
				{ "Category", "Playback" },
				{ "ExposeFunctionCategories", "Game|Cinematic" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer = { UE4CodeGen_Private::EPropertyClass::Object, "SequencePlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, SequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(NewProp_SequencePlayer_MetaData, ARRAY_COUNT(NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[] = {
				{ "Category", "Playback" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaybackSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ALevelSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(NewProp_PlaybackSettings_MetaData, ARRAY_COUNT(NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
				{ "Category", "Playback" },
				{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
			};
#endif
			auto NewProp_bAutoPlay_SetBit = [](void* Obj){ ((ALevelSequenceActor*)Obj)->bAutoPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALevelSequenceActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoPlay_MetaData, ARRAY_COUNT(NewProp_bAutoPlay_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurnInInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurnInOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalEventReceivers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalEventReceivers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequencePlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaybackSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoPlay,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALevelSequenceActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALevelSequenceActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ALevelSequenceActor, 1015477753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelSequenceActor(Z_Construct_UClass_ALevelSequenceActor, &ALevelSequenceActor::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ALevelSequenceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
