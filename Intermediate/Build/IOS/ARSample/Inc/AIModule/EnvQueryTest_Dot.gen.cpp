// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Dot() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
// End Cross Module References
	static UEnum* EEnvTestDot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDot, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDot"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvTestDot(EEnvTestDot_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvTestDot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvTestDot_CRC() { return 3993173905U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvTestDot"), 0, Get_Z_Construct_UEnum_AIModule_EEnvTestDot_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvTestDot::Dot3D", (int64)EEnvTestDot::Dot3D },
				{ "EEnvTestDot::Dot2D", (int64)EEnvTestDot::Dot2D },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dot2D.DisplayName", "Dot 2D (Heading)" },
				{ "Dot2D.Tooltip", "Dot Product in the XY-plane, which is equivalent to the cosine of the heading or yaw angle." },
				{ "Dot3D.DisplayName", "Dot (3D)" },
				{ "Dot3D.Tooltip", "Fully 3D dot-product" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEnvTestDot",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EEnvTestDot",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryTest_Dot::StaticRegisterNativesUEnvQueryTest_Dot()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister()
	{
		return UEnvQueryTest_Dot::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Dot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteValue_MetaData[] = {
				{ "Category", "Dot" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
				{ "ToolTip", "If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful\nwhen you want to compare \"how lateral\" something is.  I.E. values closer to zero are further to the side,\nand values closer to 1 are more in front or behind (without distinguishing forward/backward)." },
			};
#endif
			auto NewProp_bAbsoluteValue_SetBit = [](void* Obj){ ((UEnvQueryTest_Dot*)Obj)->bAbsoluteValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bAbsoluteValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryTest_Dot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAbsoluteValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAbsoluteValue_MetaData, ARRAY_COUNT(NewProp_bAbsoluteValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
				{ "Category", "Dot" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TestMode = { UE4CodeGen_Private::EPropertyClass::Enum, "TestMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Dot, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDot, METADATA_PARAMS(NewProp_TestMode_MetaData, ARRAY_COUNT(NewProp_TestMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineB_MetaData[] = {
				{ "Category", "Dot" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
				{ "ToolTip", "defines direction of second line used by test" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineB = { UE4CodeGen_Private::EPropertyClass::Struct, "LineB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Dot, LineB), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(NewProp_LineB_MetaData, ARRAY_COUNT(NewProp_LineB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineA_MetaData[] = {
				{ "Category", "Dot" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
				{ "ToolTip", "defines direction of first line used by test" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineA = { UE4CodeGen_Private::EPropertyClass::Struct, "LineA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Dot, LineA), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(NewProp_LineA_MetaData, ARRAY_COUNT(NewProp_LineA_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAbsoluteValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineA,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_Dot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_Dot::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UEnvQueryTest_Dot, 1077726513);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Dot(Z_Construct_UClass_UEnvQueryTest_Dot, &UEnvQueryTest_Dot::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Dot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Dot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
