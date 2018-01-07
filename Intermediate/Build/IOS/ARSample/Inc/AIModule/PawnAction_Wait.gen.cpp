// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Actions/PawnAction_Wait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Wait() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Wait_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UPawnAction_Wait::StaticRegisterNativesUPawnAction_Wait()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Wait_NoRegister()
	{
		return UPawnAction_Wait::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnAction_Wait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPawnAction,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Actions/PawnAction_Wait.h" },
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Wait.h" },
				{ "ToolTip", "uses system timers rather then ticking" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToWait_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction_Wait.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToWait = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToWait", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPawnAction_Wait, TimeToWait), METADATA_PARAMS(NewProp_TimeToWait_MetaData, ARRAY_COUNT(NewProp_TimeToWait_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeToWait,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnAction_Wait>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnAction_Wait::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(UPawnAction_Wait, 465418757);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Wait(Z_Construct_UClass_UPawnAction_Wait, &UPawnAction_Wait::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Wait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Wait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
