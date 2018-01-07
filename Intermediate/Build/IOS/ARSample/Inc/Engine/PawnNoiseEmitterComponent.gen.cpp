// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/PawnNoiseEmitterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnNoiseEmitterComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPawnNoiseEmitterComponent::StaticRegisterNativesUPawnNoiseEmitterComponent()
	{
		UClass* Class = UPawnNoiseEmitterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeNoise", (Native)&UPawnNoiseEmitterComponent::execMakeNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise()
	{
		struct PawnNoiseEmitterComponent_eventMakeNoise_Parms
		{
			AActor* NoiseMaker;
			float Loudness;
			FVector NoiseLocation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NoiseLocation_MetaData, ARRAY_COUNT(NewProp_NoiseLocation_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker = { UE4CodeGen_Private::EPropertyClass::Object, "NoiseMaker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, NoiseMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loudness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseMaker,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Components|PawnNoiseEmitter" },
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "Cache noises instigated by the owning pawn for AI sensing\n@param NoiseMaker - is the actual actor which made the noise\n@param Loudness - is the relative loudness of the noise (0.0 to 1.0)\n@param NoiseLocation - is the position of the noise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnNoiseEmitterComponent, "MakeNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20404, sizeof(PawnNoiseEmitterComponent_eventMakeNoise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister()
	{
		return UPawnNoiseEmitterComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise, "MakeNoise" }, // 4080873586
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Components/PawnNoiseEmitterComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "PawnNoiseEmitterComponent tracks noise event data used by SensingComponents to hear a Pawn.\nThis component is intended to exist on either a Pawn or its Controller. It does nothing on network clients." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocalNoiseTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "Time of last local noise update" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLocalNoiseTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastLocalNoiseTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseTime), METADATA_PARAMS(NewProp_LastLocalNoiseTime_MetaData, ARRAY_COUNT(NewProp_LastLocalNoiseTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocalNoiseVolume_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "Most recent noise made by this pawn at its own location" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLocalNoiseVolume = { UE4CodeGen_Private::EPropertyClass::Float, "LastLocalNoiseVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseVolume), METADATA_PARAMS(NewProp_LastLocalNoiseVolume_MetaData, ARRAY_COUNT(NewProp_LastLocalNoiseVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoiseTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "Time of last remote noise update" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRemoteNoiseTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastRemoteNoiseTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseTime), METADATA_PARAMS(NewProp_LastRemoteNoiseTime_MetaData, ARRAY_COUNT(NewProp_LastRemoteNoiseTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoiseVolume_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "Most recent volume of noise made by this pawn not at its own location" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRemoteNoiseVolume = { UE4CodeGen_Private::EPropertyClass::Float, "LastRemoteNoiseVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseVolume), METADATA_PARAMS(NewProp_LastRemoteNoiseVolume_MetaData, ARRAY_COUNT(NewProp_LastRemoteNoiseVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLifetime_MetaData[] = {
				{ "Category", "Noise Settings" },
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "After this amount of time, new sound events will overwrite previous sounds even if they are not louder (allows old sounds to decay)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseLifetime = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseLifetime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnNoiseEmitterComponent, NoiseLifetime), METADATA_PARAMS(NewProp_NoiseLifetime_MetaData, ARRAY_COUNT(NewProp_NoiseLifetime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoisePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "Most recent noise made by this pawn not at its own location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRemoteNoisePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "LastRemoteNoisePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoisePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LastRemoteNoisePosition_MetaData, ARRAY_COUNT(NewProp_LastRemoteNoisePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAIPerceptionSystemCompatibilityMode_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
				{ "ToolTip", "If set to true (default value) will notify AIPerceptionSystem about noise events\notherwise only PawnSensingComponents will be able to pick up noises generated by this component" },
			};
#endif
			auto NewProp_bAIPerceptionSystemCompatibilityMode_SetBit = [](void* Obj){ ((UPawnNoiseEmitterComponent*)Obj)->bAIPerceptionSystemCompatibilityMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAIPerceptionSystemCompatibilityMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bAIPerceptionSystemCompatibilityMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnNoiseEmitterComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAIPerceptionSystemCompatibilityMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAIPerceptionSystemCompatibilityMode_MetaData, ARRAY_COUNT(NewProp_bAIPerceptionSystemCompatibilityMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastLocalNoiseTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastLocalNoiseVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastRemoteNoiseTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastRemoteNoiseVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLifetime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastRemoteNoisePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAIPerceptionSystemCompatibilityMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnNoiseEmitterComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnNoiseEmitterComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UPawnNoiseEmitterComponent, 3021987565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnNoiseEmitterComponent(Z_Construct_UClass_UPawnNoiseEmitterComponent, &UPawnNoiseEmitterComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPawnNoiseEmitterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnNoiseEmitterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
