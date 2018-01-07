// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/RootMotionSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionSource() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus();
// End Cross Module References
	static UEnum* ERootMotionFinishVelocityMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionFinishVelocityMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionFinishVelocityMode(ERootMotionFinishVelocityMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionFinishVelocityMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_CRC() { return 2718717815U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionFinishVelocityMode"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity", (int64)ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity },
				{ "ERootMotionFinishVelocityMode::SetVelocity", (int64)ERootMotionFinishVelocityMode::SetVelocity },
				{ "ERootMotionFinishVelocityMode::ClampVelocity", (int64)ERootMotionFinishVelocityMode::ClampVelocity },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ClampVelocity.ToolTip", "Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though." },
				{ "MaintainLastRootMotionVelocity.ToolTip", "Maintain the last velocity root motion gave to the character" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "SetVelocity.ToolTip", "Set Velocity to the specified value (for example, 0,0,0 to stop the character)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERootMotionFinishVelocityMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERootMotionFinishVelocityMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERootMotionSourceSettingsFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionSourceSettingsFlags"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionSourceSettingsFlags(ERootMotionSourceSettingsFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionSourceSettingsFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_CRC() { return 1197054441U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionSourceSettingsFlags"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck", (int64)ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck },
				{ "ERootMotionSourceSettingsFlags::DisablePartialEndTick", (int64)ERootMotionSourceSettingsFlags::DisablePartialEndTick },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DisablePartialEndTick.ToolTip", "If Duration of Source would end partway through the last tick it is active,\ndo not reduce SimulationTime. Disabling this is useful for sources that\nare more about providing velocity (like jumps), vs. sources that need\nthe precision of partial ticks for say ending up at an exact location (MoveTo)" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Enumeration for RootMotionSource settings" },
				{ "UseSensitiveLiftoffCheck.ToolTip", "Source will switch character to Falling mode with any \"Z up\" velocity added.\nUse this for jump-like root motion. If not enabled, uses default jump impulse\ndetection (which keeps you stuck on ground in Walking fairly strongly)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERootMotionSourceSettingsFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERootMotionSourceSettingsFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERootMotionSourceStatusFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionSourceStatusFlags"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionSourceStatusFlags(ERootMotionSourceStatusFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionSourceStatusFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_CRC() { return 3405740477U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionSourceStatusFlags"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionSourceStatusFlags::Prepared", (int64)ERootMotionSourceStatusFlags::Prepared },
				{ "ERootMotionSourceStatusFlags::Finished", (int64)ERootMotionSourceStatusFlags::Finished },
				{ "ERootMotionSourceStatusFlags::MarkedForRemoval", (int64)ERootMotionSourceStatusFlags::MarkedForRemoval },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Finished.ToolTip", "Source has timed out or otherwise reached a state where it is considered \"done\"" },
				{ "MarkedForRemoval.ToolTip", "Source has been queued for removal, will be removed next PrepareRootMotion() by the SourceGroup" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "Prepared.ToolTip", "Source has been Prepared and can contribute to root motion" },
				{ "ToolTip", "Enumeration for RootMotionSource status flags" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERootMotionSourceStatusFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERootMotionSourceStatusFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERootMotionAccumulateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionAccumulateMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionAccumulateMode(ERootMotionAccumulateMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionAccumulateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_CRC() { return 1533813729U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionAccumulateMode"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionAccumulateMode::Override", (int64)ERootMotionAccumulateMode::Override },
				{ "ERootMotionAccumulateMode::Additive", (int64)ERootMotionAccumulateMode::Additive },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.ToolTip", "Gets added on top of existing velocity" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "Override.ToolTip", "Sets velocity to this value directly" },
				{ "ToolTip", "Enumeration for RootMotionSource accumulation mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERootMotionAccumulateMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERootMotionAccumulateMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRootMotionSourceGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceGroup, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceGroup"), sizeof(FRootMotionSourceGroup), Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSourceGroup(FRootMotionSourceGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSourceGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSourceGroup")),new UScriptStruct::TCppStructOps<FRootMotionSourceGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceGroup;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSourceGroup"), sizeof(FRootMotionSourceGroup), Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Group of Root Motion Sources that are applied" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceGroup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAccumulatedSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Aggregate Settings of the last group of accumulated sources" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastAccumulatedSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LastAccumulatedSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSourceGroup, LastAccumulatedSettings), Z_Construct_UScriptStruct_FRootMotionSourceSettings, METADATA_PARAMS(NewProp_LastAccumulatedSettings_MetaData, ARRAY_COUNT(NewProp_LastAccumulatedSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAdditiveVelocityApplied_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "True when we had additive velocity applied last tick, checked to know if we should restore\nLastPreAdditiveVelocity before a Velocity computation" },
			};
#endif
			auto NewProp_bIsAdditiveVelocityApplied_SetBit = [](void* Obj){ ((FRootMotionSourceGroup*)Obj)->bIsAdditiveVelocityApplied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdditiveVelocityApplied = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAdditiveVelocityApplied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSourceGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAdditiveVelocityApplied_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAdditiveVelocityApplied_MetaData, ARRAY_COUNT(NewProp_bIsAdditiveVelocityApplied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPreAdditiveVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Saved off pre-additive-applied Velocity, used for being able to reliably add/remove additive\nvelocity from currently computed Velocity (otherwise we would be removing additive velocity\nthat no longer exists, like if you run into a wall and your Velocity becomes 0 - subtracting\nthe velocity that we added heading into the wall last tick would make you go backwards. With\nthis method we override that resulting Velocity due to obstructions" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPreAdditiveVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LastPreAdditiveVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSourceGroup, LastPreAdditiveVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(NewProp_LastPreAdditiveVelocity_MetaData, ARRAY_COUNT(NewProp_LastPreAdditiveVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasOverrideSources_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Whether this group has override root motion sources" },
			};
#endif
			auto NewProp_bHasOverrideSources_SetBit = [](void* Obj){ ((FRootMotionSourceGroup*)Obj)->bHasOverrideSources = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasOverrideSources = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasOverrideSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSourceGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasOverrideSources_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasOverrideSources_MetaData, ARRAY_COUNT(NewProp_bHasOverrideSources_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAdditiveSources_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Whether this group has additive root motion sources" },
			};
#endif
			auto NewProp_bHasAdditiveSources_SetBit = [](void* Obj){ ((FRootMotionSourceGroup*)Obj)->bHasAdditiveSources = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAdditiveSources = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasAdditiveSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSourceGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasAdditiveSources_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasAdditiveSources_MetaData, ARRAY_COUNT(NewProp_bHasAdditiveSources_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastAccumulatedSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAdditiveVelocityApplied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastPreAdditiveVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasOverrideSources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasAdditiveSources,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSourceGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSourceGroup),
				alignof(FRootMotionSourceGroup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_CRC() { return 3299583475U; }
class UScriptStruct* FRootMotionSource_JumpForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_JumpForce"), sizeof(FRootMotionSource_JumpForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_JumpForce(FRootMotionSource_JumpForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_JumpForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_JumpForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_JumpForce()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSource_JumpForce")),new UScriptStruct::TCppStructOps<FRootMotionSource_JumpForce>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_JumpForce;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_JumpForce"), sizeof(FRootMotionSource_JumpForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "JumpForce moves the target in a jump-like manner (ends when landing, applied force is relative)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_JumpForce>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve = { UE4CodeGen_Private::EPropertyClass::Object, "TimeMappingCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_JumpForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_TimeMappingCurve_MetaData, ARRAY_COUNT(NewProp_TimeMappingCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve = { UE4CodeGen_Private::EPropertyClass::Object, "PathOffsetCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_JumpForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(NewProp_PathOffsetCurve_MetaData, ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTimeout_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			auto NewProp_bDisableTimeout_SetBit = [](void* Obj){ ((FRootMotionSource_JumpForce*)Obj)->bDisableTimeout = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTimeout = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableTimeout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource_JumpForce), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableTimeout_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableTimeout_MetaData, ARRAY_COUNT(NewProp_bDisableTimeout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_JumpForce, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_JumpForce, Distance), METADATA_PARAMS(NewProp_Distance_MetaData, ARRAY_COUNT(NewProp_Distance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_JumpForce, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeMappingCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathOffsetCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableTimeout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRootMotionSource,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSource_JumpForce",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSource_JumpForce),
				alignof(FRootMotionSource_JumpForce),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_CRC() { return 1672546630U; }
class UScriptStruct* FRootMotionSource_MoveToDynamicForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_MoveToDynamicForce"), sizeof(FRootMotionSource_MoveToDynamicForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_MoveToDynamicForce(FRootMotionSource_MoveToDynamicForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_MoveToDynamicForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToDynamicForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToDynamicForce()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSource_MoveToDynamicForce")),new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToDynamicForce>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToDynamicForce;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_MoveToDynamicForce"), sizeof(FRootMotionSource_MoveToDynamicForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "MoveToDynamicForce moves the target to a given location in world space over the duration, where the end location\nis dynamic and can change during the move (meant to be used for things like moving to a moving target)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToDynamicForce>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve = { UE4CodeGen_Private::EPropertyClass::Object, "TimeMappingCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_TimeMappingCurve_MetaData, ARRAY_COUNT(NewProp_TimeMappingCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve = { UE4CodeGen_Private::EPropertyClass::Object, "PathOffsetCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(NewProp_PathOffsetCurve_MetaData, ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			auto NewProp_bRestrictSpeedToExpected_SetBit = [](void* Obj){ ((FRootMotionSource_MoveToDynamicForce*)Obj)->bRestrictSpeedToExpected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected = { UE4CodeGen_Private::EPropertyClass::Bool, "bRestrictSpeedToExpected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource_MoveToDynamicForce), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRestrictSpeedToExpected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRestrictSpeedToExpected_MetaData, ARRAY_COUNT(NewProp_bRestrictSpeedToExpected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetLocation_MetaData, ARRAY_COUNT(NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTargetLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, InitialTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_InitialTargetLocation_MetaData, ARRAY_COUNT(NewProp_InitialTargetLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartLocation_MetaData, ARRAY_COUNT(NewProp_StartLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeMappingCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathOffsetCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRestrictSpeedToExpected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialTargetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRootMotionSource,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSource_MoveToDynamicForce",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSource_MoveToDynamicForce),
				alignof(FRootMotionSource_MoveToDynamicForce),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_CRC() { return 2557004165U; }
class UScriptStruct* FRootMotionSource_MoveToForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_MoveToForce"), sizeof(FRootMotionSource_MoveToForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_MoveToForce(FRootMotionSource_MoveToForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_MoveToForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToForce()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSource_MoveToForce")),new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToForce>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToForce;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_MoveToForce"), sizeof(FRootMotionSource_MoveToForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "MoveToForce moves the target to a given fixed location in world space over the duration" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToForce>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve = { UE4CodeGen_Private::EPropertyClass::Object, "PathOffsetCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(NewProp_PathOffsetCurve_MetaData, ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			auto NewProp_bRestrictSpeedToExpected_SetBit = [](void* Obj){ ((FRootMotionSource_MoveToForce*)Obj)->bRestrictSpeedToExpected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected = { UE4CodeGen_Private::EPropertyClass::Bool, "bRestrictSpeedToExpected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource_MoveToForce), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRestrictSpeedToExpected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRestrictSpeedToExpected_MetaData, ARRAY_COUNT(NewProp_bRestrictSpeedToExpected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetLocation_MetaData, ARRAY_COUNT(NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_MoveToForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_StartLocation_MetaData, ARRAY_COUNT(NewProp_StartLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathOffsetCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRestrictSpeedToExpected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRootMotionSource,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSource_MoveToForce",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSource_MoveToForce),
				alignof(FRootMotionSource_MoveToForce),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_CRC() { return 514553556U; }
class UScriptStruct* FRootMotionSource_RadialForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_RadialForce"), sizeof(FRootMotionSource_RadialForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_RadialForce(FRootMotionSource_RadialForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_RadialForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_RadialForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_RadialForce()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSource_RadialForce")),new UScriptStruct::TCppStructOps<FRootMotionSource_RadialForce>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_RadialForce;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_RadialForce"), sizeof(FRootMotionSource_RadialForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "RadialForce applies a force pulling or pushing away from a given world location to the target" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_RadialForce>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedWorldDirection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedWorldDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "FixedWorldDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, FixedWorldDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_FixedWorldDirection_MetaData, ARRAY_COUNT(NewProp_FixedWorldDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedWorldDirection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			auto NewProp_bUseFixedWorldDirection_SetBit = [](void* Obj){ ((FRootMotionSource_RadialForce*)Obj)->bUseFixedWorldDirection = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedWorldDirection = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixedWorldDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource_RadialForce), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFixedWorldDirection_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFixedWorldDirection_MetaData, ARRAY_COUNT(NewProp_bUseFixedWorldDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime = { UE4CodeGen_Private::EPropertyClass::Object, "StrengthOverTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_StrengthOverTime_MetaData, ARRAY_COUNT(NewProp_StrengthOverTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthDistanceFalloff_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthDistanceFalloff = { UE4CodeGen_Private::EPropertyClass::Object, "StrengthDistanceFalloff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, StrengthDistanceFalloff), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_StrengthDistanceFalloff_MetaData, ARRAY_COUNT(NewProp_StrengthDistanceFalloff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoZForce_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			auto NewProp_bNoZForce_SetBit = [](void* Obj){ ((FRootMotionSource_RadialForce*)Obj)->bNoZForce = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoZForce = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoZForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource_RadialForce), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoZForce_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoZForce_MetaData, ARRAY_COUNT(NewProp_bNoZForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPush_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			auto NewProp_bIsPush_SetBit = [](void* Obj){ ((FRootMotionSource_RadialForce*)Obj)->bIsPush = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPush = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPush", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource_RadialForce), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPush_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPush_MetaData, ARRAY_COUNT(NewProp_bIsPush_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Float, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, Strength), METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocationActor = { UE4CodeGen_Private::EPropertyClass::Object, "LocationActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_LocationActor_MetaData, ARRAY_COUNT(NewProp_LocationActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_RadialForce, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FixedWorldDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFixedWorldDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthOverTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthDistanceFalloff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoZForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPush,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRootMotionSource,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSource_RadialForce",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSource_RadialForce),
				alignof(FRootMotionSource_RadialForce),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_CRC() { return 2404112840U; }
class UScriptStruct* FRootMotionSource_ConstantForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_ConstantForce"), sizeof(FRootMotionSource_ConstantForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_ConstantForce(FRootMotionSource_ConstantForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_ConstantForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_ConstantForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_ConstantForce()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSource_ConstantForce")),new UScriptStruct::TCppStructOps<FRootMotionSource_ConstantForce>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_ConstantForce;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_ConstantForce"), sizeof(FRootMotionSource_ConstantForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "ConstantForce applies a fixed force to the target" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_ConstantForce>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime = { UE4CodeGen_Private::EPropertyClass::Object, "StrengthOverTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_ConstantForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_StrengthOverTime_MetaData, ARRAY_COUNT(NewProp_StrengthOverTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force = { UE4CodeGen_Private::EPropertyClass::Struct, "Force", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource_ConstantForce, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Force_MetaData, ARRAY_COUNT(NewProp_Force_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StrengthOverTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Force,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FRootMotionSource,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSource_ConstantForce",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSource_ConstantForce),
				alignof(FRootMotionSource_ConstantForce),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_CRC() { return 3189390809U; }
class UScriptStruct* FRootMotionSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource"), sizeof(FRootMotionSource), Get_Z_Construct_UScriptStruct_FRootMotionSource_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource(FRootMotionSource::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSource")),new UScriptStruct::TCppStructOps<FRootMotionSource>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource"), sizeof(FRootMotionSource), Get_Z_Construct_UScriptStruct_FRootMotionSource_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Generalized source of Root Motion to a CharacterMovementComponent.\n\nHas priorities and different accumulation modes (override, additive, set, ignore).\n\nRootMotionSources are accumulated from highest priority to lowest, once all values\nare \"finalized\" (meaning no more accumulation to those values), root motion accumulation\nis finished. Having all of translation and rotation in a transform being overridden during\nroot motion accumulation means that CharacterMovementComponent Phys*() functions no longer\nneed to CalcVelocity() since it'll just get overridden anyway.\n\nSome example source possibilities:\n        Full Animation Root Motion (matching only form of root motion we've supported historically):\n                - Overrides all translation axes or rotation or both\n                - Very High priority so it gets applied first and since it is override no other\n                  RootMotionSources have an influence that are lower priority\n                - Scale on translation and/or rotation is set to 1 to match animation 1 for 1\n                - Provides local space transform (character-orientation relative)\n\n                - End result: Same as before - overrides velocity/rotation to values in AnimMontage\n                - But can now scale individual translation axes if desired, or instead of override\n                  can use \"set\" to allow other additive sources of root motion to be applied on top\n                  of the animation root motion (modify velocity to home root motion melee attacks, etc.)\n\n        Jump pad volumes that work during animation root montage attacks\n                - Constant velocity modification Z up, additive and high priority\n                - Attack/melee animation root motion uses \"set\" instead of \"override\" to allow other sources\n                - Animation root motion is applied, then the Z up additive of this source is so you are\n                  affected by the jump pad\n\n        Attack/melee homing\n                - Additive, lower priority so it gets applied after any animation/significant root motion\n                - World space, sourced by logic modifying velocity to go towards nearby enemies\n                - Could point to a UAbilityTask node from the GameplayAbilities system\n\n        Character movement controlled by splines/curves in-editor instead of requiring animation tweaks\n                - Same as animation root motion but source from spline/curve data" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityParams_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Finish Velocity Parameters" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinishVelocityParams = { UE4CodeGen_Private::EPropertyClass::Struct, "FinishVelocityParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, FinishVelocityParams), Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings, METADATA_PARAMS(NewProp_FinishVelocityParams_MetaData, ARRAY_COUNT(NewProp_FinishVelocityParams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Root Motion generated by this Source" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootMotionParams = { UE4CodeGen_Private::EPropertyClass::Struct, "RootMotionParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, RootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(NewProp_RootMotionParams_MetaData, ARRAY_COUNT(NewProp_RootMotionParams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "True when this RootMotionSource is contributing local space accumulation (false for world space)" },
			};
#endif
			auto NewProp_bInLocalSpace_SetBit = [](void* Obj){ ((FRootMotionSource*)Obj)->bInLocalSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionSource), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInLocalSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInLocalSpace_MetaData, ARRAY_COUNT(NewProp_bInLocalSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Settings of this source" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, Settings), Z_Construct_UScriptStruct_FRootMotionSourceSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Status of this source" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Struct, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, Status), Z_Construct_UScriptStruct_FRootMotionSourceStatus, METADATA_PARAMS(NewProp_Status_MetaData, ARRAY_COUNT(NewProp_Status_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "The length of this root motion - < 0 for infinite (to be removed manually)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "The last Time entry we had before the last SetTime() - used for simulated catchup" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousTime = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, PreviousTime), METADATA_PARAMS(NewProp_PreviousTime_MetaData, ARRAY_COUNT(NewProp_PreviousTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Time elapsed so far for this source" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, CurrentTime), METADATA_PARAMS(NewProp_CurrentTime_MetaData, ARRAY_COUNT(NewProp_CurrentTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Time this source should start (in character movement client time)\nThis is used to handle cases of inconsistent tick times (ServerMoves ticking for 1 second when root motion should\nhave only applied for the last 0.1 seconds, or root motion source ending halfway through a 0.5 second tick)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, StartTime), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "This name allows us to find the source later so that we can end it." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InstanceName = { UE4CodeGen_Private::EPropertyClass::Name, "InstanceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, InstanceName), METADATA_PARAMS(NewProp_InstanceName_MetaData, ARRAY_COUNT(NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulateMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Accumulation mode for this source (whether or not to additively apply this root motion or override completely)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccumulateMode = { UE4CodeGen_Private::EPropertyClass::Enum, "AccumulateMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, AccumulateMode), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, METADATA_PARAMS(NewProp_AccumulateMode_MetaData, ARRAY_COUNT(NewProp_AccumulateMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccumulateMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "ID local to this client or server instance. Used for matching up FRootMotionSources between SavedMoves\nand allow a mapping between server LocalIDs and client LocalIDs for correction/comparison" },
			};
#endif
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_LocalID = { UE4CodeGen_Private::EPropertyClass::UInt16, "LocalID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, LocalID), METADATA_PARAMS(NewProp_LocalID_MetaData, ARRAY_COUNT(NewProp_LocalID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Priority of this source relative to other sources - higher number being the highest priority/first applied." },
			};
#endif
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::UInt16, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSource, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FinishVelocityParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootMotionParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInLocalSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccumulateMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccumulateMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSource),
				alignof(FRootMotionSource),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_CRC() { return 2047621051U; }
class UScriptStruct* FRootMotionFinishVelocitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionFinishVelocitySettings"), sizeof(FRootMotionFinishVelocitySettings), Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionFinishVelocitySettings(FRootMotionFinishVelocitySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionFinishVelocitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionFinishVelocitySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionFinishVelocitySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionFinishVelocitySettings")),new UScriptStruct::TCppStructOps<FRootMotionFinishVelocitySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionFinishVelocitySettings;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionFinishVelocitySettings"), sizeof(FRootMotionFinishVelocitySettings), Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Struct for RootMotion Finish Velocity options." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionFinishVelocitySettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Clamp Velocity if Move == ClampVelocity" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "ClampVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, ClampVelocity), METADATA_PARAMS(NewProp_ClampVelocity_MetaData, ARRAY_COUNT(NewProp_ClampVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Set Velocity if Mode == SetVelocity" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "SetVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, SetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SetVelocity_MetaData, ARRAY_COUNT(NewProp_SetVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Mode, see ERootMotionFinishVelocityMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode = { UE4CodeGen_Private::EPropertyClass::Enum, "Mode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, Mode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(NewProp_Mode_MetaData, ARRAY_COUNT(NewProp_Mode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SetVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mode_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionFinishVelocitySettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionFinishVelocitySettings),
				alignof(FRootMotionFinishVelocitySettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_CRC() { return 700120225U; }
class UScriptStruct* FRootMotionSourceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceSettings, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceSettings"), sizeof(FRootMotionSourceSettings), Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSourceSettings(FRootMotionSourceSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSourceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSourceSettings")),new UScriptStruct::TCppStructOps<FRootMotionSourceSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSourceSettings"), sizeof(FRootMotionSourceSettings), Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Structure for RootMotionSource option flags\n(used for convenience instead of having to manually manipulate flag bitfields)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Byte, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSourceSettings, Flags), nullptr, METADATA_PARAMS(NewProp_Flags_MetaData, ARRAY_COUNT(NewProp_Flags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flags,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSourceSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSourceSettings),
				alignof(FRootMotionSourceSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_CRC() { return 150731982U; }
class UScriptStruct* FRootMotionSourceStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceStatus, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceStatus"), sizeof(FRootMotionSourceStatus), Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSourceStatus(FRootMotionSourceStatus::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSourceStatus"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceStatus
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionSourceStatus")),new UScriptStruct::TCppStructOps<FRootMotionSourceStatus>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceStatus;
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSourceStatus"), sizeof(FRootMotionSourceStatus), Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Structure for RootMotionSource status flags\n(used for convenience instead of having to manually manipulate flag bitfields)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceStatus>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Byte, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionSourceStatus, Flags), nullptr, METADATA_PARAMS(NewProp_Flags_MetaData, ARRAY_COUNT(NewProp_Flags_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flags,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RootMotionSourceStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRootMotionSourceStatus),
				alignof(FRootMotionSourceStatus),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_CRC() { return 117682984U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
