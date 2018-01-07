// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/SpectatorPawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorPawnMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USpectatorPawnMovement::StaticRegisterNativesUSpectatorPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister()
	{
		return USpectatorPawnMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_USpectatorPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/SpectatorPawnMovement.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
				{ "ToolTip", "If true, component moves at full speed no matter the time dilation. Default is false." },
			};
#endif
			auto NewProp_bIgnoreTimeDilation_SetBit = [](void* Obj){ ((USpectatorPawnMovement*)Obj)->bIgnoreTimeDilation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpectatorPawnMovement), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreTimeDilation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreTimeDilation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpectatorPawnMovement>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpectatorPawnMovement::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectatorPawnMovement, 1796472143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectatorPawnMovement(Z_Construct_UClass_USpectatorPawnMovement, &USpectatorPawnMovement::StaticClass, TEXT("/Script/Engine"), TEXT("USpectatorPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
