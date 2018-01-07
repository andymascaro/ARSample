// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeDistanceCrossFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDistanceCrossFade() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
// End Cross Module References
class UScriptStruct* FDistanceDatum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDatum, Z_Construct_UPackage__Script_Engine(), TEXT("DistanceDatum"), sizeof(FDistanceDatum), Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDistanceDatum(FDistanceDatum::StaticStruct, TEXT("/Script/Engine"), TEXT("DistanceDatum"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDistanceDatum
{
	FScriptStruct_Engine_StaticRegisterNativesFDistanceDatum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DistanceDatum")),new UScriptStruct::TCppStructOps<FDistanceDatum>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDistanceDatum;
	UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistanceDatum"), sizeof(FDistanceDatum), Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistanceDatum>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
				{ "Category", "DistanceDatum" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "The volume for which this Input should be played." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDistanceDatum, Volume), METADATA_PARAMS(NewProp_Volume_MetaData, ARRAY_COUNT(NewProp_Volume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceEnd_MetaData[] = {
				{ "Category", "DistanceDatum" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "The distance at which this sound is no longer audible." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceEnd = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDistanceEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeOutDistanceEnd), METADATA_PARAMS(NewProp_FadeOutDistanceEnd_MetaData, ARRAY_COUNT(NewProp_FadeOutDistanceEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceStart_MetaData[] = {
				{ "Category", "DistanceDatum" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "The distance at which this sound starts fading out." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceStart = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDistanceStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeOutDistanceStart), METADATA_PARAMS(NewProp_FadeOutDistanceStart_MetaData, ARRAY_COUNT(NewProp_FadeOutDistanceStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDistanceEnd_MetaData[] = {
				{ "Category", "DistanceDatum" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "The distance at which this sound has faded in completely." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDistanceEnd = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDistanceEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeInDistanceEnd), METADATA_PARAMS(NewProp_FadeInDistanceEnd_MetaData, ARRAY_COUNT(NewProp_FadeInDistanceEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDistanceStart_MetaData[] = {
				{ "Category", "DistanceDatum" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "The FadeInDistance at which to start hearing this sound.\n       * If you want to hear the sound up close then setting this to 0 might be a good option." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDistanceStart = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDistanceStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeInDistanceStart), METADATA_PARAMS(NewProp_FadeInDistanceStart_MetaData, ARRAY_COUNT(NewProp_FadeInDistanceStart_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeOutDistanceEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeOutDistanceStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeInDistanceEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeInDistanceStart,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DistanceDatum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FDistanceDatum),
				alignof(FDistanceDatum),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistanceDatum_CRC() { return 2325922829U; }
	void USoundNodeDistanceCrossFade::StaticRegisterNativesUSoundNodeDistanceCrossFade()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister()
	{
		return USoundNodeDistanceCrossFade::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Crossfade by Distance" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeDistanceCrossFade.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "SoundNodeDistanceCrossFade\n\nThis node's purpose is to play different sounds based on the distance to the listener.\nThe node mixes between the N different sounds which are valid for the distance.  One should\nthink of a SoundNodeDistanceCrossFade as Mixer node which determines the set of nodes to\n\"mix in\" based on their distance to the sound.\n\nExample:\nYou have a gun that plays a fire sound.  At long distances you want a different sound than\nif you were up close.   So you use a SoundNodeDistanceCrossFade which will calculate the distance\na listener is from the sound and play either:  short distance, long distance, mix of short and long sounds.\n\nA SoundNodeDistanceCrossFade differs from an SoundNodeAttenuation in that any sound is only going\nbe played if it is within the MinRadius and MaxRadius.  So if you want the short distance sound to be\nheard by people close to it, the MinRadius should probably be 0\n\nThe volume curve for a SoundNodeDistanceCrossFade will look like this:\n\n                         Volume (of the input)\n   FadeInDistance.Max --> _________________ <-- FadeOutDistance.Min\n                         /                 \\\n                        /                   \\\n                       /                     \\\nFadeInDistance.Min -->/                       \\ <-- FadeOutDistance.Max" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossFadeInput_MetaData[] = {
				{ "Category", "CrossFade" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
				{ "ToolTip", "Each input needs to have the correct data filled in so the SoundNodeDistanceCrossFade is able\nto determine which sounds to play" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CrossFadeInput = { UE4CodeGen_Private::EPropertyClass::Array, "CrossFadeInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000049, 1, nullptr, STRUCT_OFFSET(USoundNodeDistanceCrossFade, CrossFadeInput), METADATA_PARAMS(NewProp_CrossFadeInput_MetaData, ARRAY_COUNT(NewProp_CrossFadeInput_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrossFadeInput_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CrossFadeInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000008, 1, nullptr, 0, Z_Construct_UScriptStruct_FDistanceDatum, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrossFadeInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrossFadeInput_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeDistanceCrossFade>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeDistanceCrossFade::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(USoundNodeDistanceCrossFade, 506197887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDistanceCrossFade(Z_Construct_UClass_USoundNodeDistanceCrossFade, &USoundNodeDistanceCrossFade::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDistanceCrossFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDistanceCrossFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
