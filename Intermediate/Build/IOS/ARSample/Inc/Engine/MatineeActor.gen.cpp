// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/MatineeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeActor() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpGroupActorInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCutInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_EnableGroupByName();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Pause();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Reverse();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_SetLoopingState();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_SetPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_AMatineeActor_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpData_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Signature of function to handle a matinee event track key" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnMatineeEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FInterpGroupActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpGroupActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("InterpGroupActorInfo"), sizeof(FInterpGroupActorInfo), Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpGroupActorInfo(FInterpGroupActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpGroupActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpGroupActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpGroupActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpGroupActorInfo")),new UScriptStruct::TCppStructOps<FInterpGroupActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpGroupActorInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FInterpGroupActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpGroupActorInfo"), sizeof(FInterpGroupActorInfo), Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "A group and all the actors controlled by the group" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpGroupActorInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
				{ "Category", "InterpGroupActorInfo" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors = { UE4CodeGen_Private::EPropertyClass::Array, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInterpGroupActorInfo, Actors), METADATA_PARAMS(NewProp_Actors_MetaData, ARRAY_COUNT(NewProp_Actors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Actors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
				{ "Category", "InterpGroupActorInfo" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectName = { UE4CodeGen_Private::EPropertyClass::Name, "ObjectName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInterpGroupActorInfo, ObjectName), METADATA_PARAMS(NewProp_ObjectName_MetaData, ARRAY_COUNT(NewProp_ObjectName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InterpGroupActorInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FInterpGroupActorInfo),
				alignof(FInterpGroupActorInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpGroupActorInfo_CRC() { return 1677979360U; }
class UScriptStruct* FCameraCutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraCutInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraCutInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraCutInfo"), sizeof(FCameraCutInfo), Get_Z_Construct_UScriptStruct_FCameraCutInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraCutInfo(FCameraCutInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraCutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraCutInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraCutInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraCutInfo")),new UScriptStruct::TCppStructOps<FCameraCutInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraCutInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FCameraCutInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraCutInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraCutInfo"), sizeof(FCameraCutInfo), Get_Z_Construct_UScriptStruct_FCameraCutInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Helper struct for storing the camera world-position for each camera cut in the cinematic." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraCutInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCameraCutInfo, TimeStamp), METADATA_PARAMS(NewProp_TimeStamp_MetaData, ARRAY_COUNT(NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCameraCutInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CameraCutInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCameraCutInfo),
				alignof(FCameraCutInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraCutInfo_CRC() { return 2301733730U; }
	void AMatineeActor::StaticRegisterNativesAMatineeActor()
	{
		UClass* Class = AMatineeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePlaybackDirection", (Native)&AMatineeActor::execChangePlaybackDirection },
			{ "EnableGroupByName", (Native)&AMatineeActor::execEnableGroupByName },
			{ "Pause", (Native)&AMatineeActor::execPause },
			{ "Play", (Native)&AMatineeActor::execPlay },
			{ "Reverse", (Native)&AMatineeActor::execReverse },
			{ "SetLoopingState", (Native)&AMatineeActor::execSetLoopingState },
			{ "SetPosition", (Native)&AMatineeActor::execSetPosition },
			{ "Stop", (Native)&AMatineeActor::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Changes the direction of playback (go in reverse if it was going forward, or vice versa)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "ChangePlaybackDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_EnableGroupByName()
	{
		struct MatineeActor_eventEnableGroupByName_Parms
		{
			FString GroupName;
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((MatineeActor_eventEnableGroupByName_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MatineeActor_eventEnableGroupByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Str, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MatineeActor_eventEnableGroupByName_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "EnableGroupByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MatineeActor_eventEnableGroupByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Hold playback at its current position. Calling Pause again will continue playback in its current direction." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "Pause", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Begin playback of the matinee. Only called in game.\nWill then advance Position by (PlayRate * Deltatime) each time the matinee is ticked." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Similar to play, but the playback will go backwards until the beginning of the sequence is reached." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "Reverse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_SetLoopingState()
	{
		struct MatineeActor_eventSetLoopingState_Parms
		{
			bool bNewLooping;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewLooping_SetBit = [](void* Obj){ ((MatineeActor_eventSetLoopingState_Parms*)Obj)->bNewLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MatineeActor_eventSetLoopingState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewLooping_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewLooping,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Change the looping behaviour of this matinee" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "SetLoopingState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(MatineeActor_eventSetLoopingState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_SetPosition()
	{
		struct MatineeActor_eventSetPosition_Parms
		{
			float NewPosition;
			bool bJump;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bJump_SetBit = [](void* Obj){ ((MatineeActor_eventSetPosition_Parms*)Obj)->bJump = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJump = { UE4CodeGen_Private::EPropertyClass::Bool, "bJump", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MatineeActor_eventSetPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bJump_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition = { UE4CodeGen_Private::EPropertyClass::Float, "NewPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MatineeActor_eventSetPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bJump,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "CPP_Default_bJump", "false" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Set the position of the interpolation.\n@note if the interpolation is not currently active, this function doesn't send any Kismet events\n@param NewPosition the new position to set the interpolation to\n@param bJump if true, teleport to the new position (don't trigger any events between the old and new positions, etc)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "SetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MatineeActor_eventSetPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMatineeActor_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Stops playback at the current position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMatineeActor, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMatineeActor_NoRegister()
	{
		return AMatineeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMatineeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMatineeActor_ChangePlaybackDirection, "ChangePlaybackDirection" }, // 2882595943
				{ &Z_Construct_UFunction_AMatineeActor_EnableGroupByName, "EnableGroupByName" }, // 1085148323
				{ &Z_Construct_UFunction_AMatineeActor_Pause, "Pause" }, // 3224102606
				{ &Z_Construct_UFunction_AMatineeActor_Play, "Play" }, // 2964338181
				{ &Z_Construct_UFunction_AMatineeActor_Reverse, "Reverse" }, // 1470527027
				{ &Z_Construct_UFunction_AMatineeActor_SetLoopingState, "SetLoopingState" }, // 1061683359
				{ &Z_Construct_UFunction_AMatineeActor_SetPosition, "SetPosition" }, // 3659559997
				{ &Z_Construct_UFunction_AMatineeActor_Stop, "Stop" }, // 2038081458
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Game Input" },
				{ "IncludePath", "Matinee/MatineeActor.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPause_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Event triggered when the matinee is paused for whatever reason" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPause = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AMatineeActor, OnPause), Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPause_MetaData, ARRAY_COUNT(NewProp_OnPause_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Event triggered when the matinee is stopped for whatever reason" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AMatineeActor, OnStop), Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnStop_MetaData, ARRAY_COUNT(NewProp_OnStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlay_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Event triggered when the matinee is played for whatever reason" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlay = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AMatineeActor, OnPlay), Z_Construct_UDelegateFunction_Engine_OnMatineeEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPlay_MetaData, ARRAY_COUNT(NewProp_OnPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationForceIsPlaying_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Counter to indicate that play count has changed. Used to work around single frames that go from play-stop-play where bIsPlaying won't get replicated." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationForceIsPlaying = { UE4CodeGen_Private::EPropertyClass::Byte, "ReplicationForceIsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AMatineeActor, ReplicationForceIsPlaying), nullptr, METADATA_PARAMS(NewProp_ReplicationForceIsPlaying_MetaData, ARRAY_COUNT(NewProp_ReplicationForceIsPlaying_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpPosition_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpPosition = { UE4CodeGen_Private::EPropertyClass::Float, "InterpPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020035, 1, nullptr, STRUCT_OFFSET(AMatineeActor, InterpPosition), METADATA_PARAMS(NewProp_InterpPosition_MetaData, ARRAY_COUNT(NewProp_InterpPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingStop_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "The below property is deprecated and will be removed in 4.9." },
			};
#endif
			auto NewProp_bPendingStop_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bPendingStop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingStop = { UE4CodeGen_Private::EPropertyClass::Bool, "bPendingStop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPendingStop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPendingStop_MetaData, ARRAY_COUNT(NewProp_bPendingStop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaused_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			auto NewProp_bPaused_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bPaused = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bPaused", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPaused_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPaused_MetaData, ARRAY_COUNT(NewProp_bPaused_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			auto NewProp_bReversePlayback_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bReversePlayback = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bReversePlayback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReversePlayback_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReversePlayback_MetaData, ARRAY_COUNT(NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "properties that may change on InterpAction that we need to notify clients about, since the object's properties will not be replicated" },
			};
#endif
			auto NewProp_bIsPlaying_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bIsPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022035, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPlaying_MetaData, ARRAY_COUNT(NewProp_bIsPlaying_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScrubbing_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Set by the editor when scrubbing data" },
			};
#endif
			auto NewProp_bIsScrubbing_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bIsScrubbing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScrubbing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsScrubbing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsScrubbing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsScrubbing_MetaData, ARRAY_COUNT(NewProp_bIsScrubbing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBeingEdited_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			auto NewProp_bIsBeingEdited_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bIsBeingEdited = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBeingEdited = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsBeingEdited", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsBeingEdited_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsBeingEdited_MetaData, ARRAY_COUNT(NewProp_bIsBeingEdited_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AMatineeActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCuts_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Contains the camera world-position for each camera cut in the cinematic." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraCuts = { UE4CodeGen_Private::EPropertyClass::Array, "CameraCuts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(AMatineeActor, CameraCuts), METADATA_PARAMS(NewProp_CameraCuts_MetaData, ARRAY_COUNT(NewProp_CameraCuts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCuts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraCuts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCameraCutInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupInst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Instance data for interp groups. One for each variable/group combination." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupInst = { UE4CodeGen_Private::EPropertyClass::Array, "GroupInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(AMatineeActor, GroupInst), METADATA_PARAMS(NewProp_GroupInst_MetaData, ARRAY_COUNT(NewProp_GroupInst_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupInst_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GroupInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UInterpGroupInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldShowGore_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Cached value that indicates whether or not gore was enabled when the sequence was started" },
			};
#endif
			auto NewProp_bShouldShowGore_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bShouldShowGore = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldShowGore = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldShowGore", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldShowGore_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldShowGore_MetaData, ARRAY_COUNT(NewProp_bShouldShowGore_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupActorInfos_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "@todo UE4 matinee - shouldnt be directly editable.  Needs a nice interface in matinee" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupActorInfos = { UE4CodeGen_Private::EPropertyClass::Array, "GroupActorInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AMatineeActor, GroupActorInfos), METADATA_PARAMS(NewProp_GroupActorInfos_MetaData, ARRAY_COUNT(NewProp_GroupActorInfos_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupActorInfos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupActorInfos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInterpGroupActorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideHud_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Hide HUD during play" },
			};
#endif
			auto NewProp_bHideHud_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bHideHud = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideHud = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideHud", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHideHud_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHideHud_MetaData, ARRAY_COUNT(NewProp_bHideHud_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Hide Player Pawn during play" },
			};
#endif
			auto NewProp_bHidePlayer_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bHidePlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bHidePlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHidePlayer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHidePlayer_MetaData, ARRAY_COUNT(NewProp_bHidePlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLookAtInput_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Disable LookAt Input from player during play" },
			};
#endif
			auto NewProp_bDisableLookAtInput_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bDisableLookAtInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLookAtInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableLookAtInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableLookAtInput_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableLookAtInput_MetaData, ARRAY_COUNT(NewProp_bDisableLookAtInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMovementInput_MetaData[] = {
				{ "Category", "Cinematic" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Disable Input from player during play" },
			};
#endif
			auto NewProp_bDisableMovementInput_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bDisableMovementInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMovementInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMovementInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableMovementInput_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableMovementInput_MetaData, ARRAY_COUNT(NewProp_bDisableMovementInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredSplitScreenNum_MetaData[] = {
				{ "Category", "MatineeActor" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Preferred local viewport number (when split screen is active) the director track should associate with, or zero for 'all'." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreferredSplitScreenNum = { UE4CodeGen_Private::EPropertyClass::Int, "PreferredSplitScreenNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(AMatineeActor, PreferredSplitScreenNum), METADATA_PARAMS(NewProp_PreferredSplitScreenNum_MetaData, ARRAY_COUNT(NewProp_PreferredSplitScreenNum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkippable_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Lets you skip the matinee with the CANCELMATINEE exec command. Triggers all events to the end along the way." },
			};
#endif
			auto NewProp_bIsSkippable_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bIsSkippable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkippable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSkippable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSkippable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSkippable_MetaData, ARRAY_COUNT(NewProp_bIsSkippable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipUpdateIfNotVisible_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "if bClientSideOnly is true, whether this matinee should be completely skipped if none of the affected Actors are visible" },
			};
#endif
			auto NewProp_bSkipUpdateIfNotVisible_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bSkipUpdateIfNotVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipUpdateIfNotVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipUpdateIfNotVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipUpdateIfNotVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipUpdateIfNotVisible_MetaData, ARRAY_COUNT(NewProp_bSkipUpdateIfNotVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientSideOnly_MetaData[] = {
				{ "Category", "MatineeActor" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Indicates that this interpolation does not affect gameplay. This means that:\n-it is not replicated via MatineeActor\n-it is not ticked if no affected Actors are visible\n-on dedicated servers, it is completely ignored" },
			};
#endif
			auto NewProp_bClientSideOnly_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bClientSideOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSideOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientSideOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientSideOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClientSideOnly_MetaData, ARRAY_COUNT(NewProp_bClientSideOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableRadioFilter_MetaData[] = {
				{ "Category", "MatineeActor" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "If true, disables the realtime radio effect" },
			};
#endif
			auto NewProp_bDisableRadioFilter_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bDisableRadioFilter = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableRadioFilter = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableRadioFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableRadioFilter_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableRadioFilter_MetaData, ARRAY_COUNT(NewProp_bDisableRadioFilter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRewindIfAlreadyPlaying_MetaData[] = {
				{ "Category", "Rewind" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Only used if bRewindOnPlay if true. Defines what should happen if the Play input is activated while currently playing.\nIf true, hitting Play while currently playing will pop the position back to the start and begin playback over again.\nIf false, hitting Play while currently playing will do nothing." },
			};
#endif
			auto NewProp_bRewindIfAlreadyPlaying_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bRewindIfAlreadyPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRewindIfAlreadyPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bRewindIfAlreadyPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRewindIfAlreadyPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRewindIfAlreadyPlaying_MetaData, ARRAY_COUNT(NewProp_bRewindIfAlreadyPlaying_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoResetOnRewind_MetaData[] = {
				{ "Category", "Rewind" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "If true, when rewinding this interpolation, reset the 'initial positions' of any RelateToInitial movements to the current location.\nThis allows the next loop of movement to proceed from the current locations." },
			};
#endif
			auto NewProp_bNoResetOnRewind_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bNoResetOnRewind = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoResetOnRewind = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoResetOnRewind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoResetOnRewind_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoResetOnRewind_MetaData, ARRAY_COUNT(NewProp_bNoResetOnRewind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRewindOnPlay_MetaData[] = {
				{ "Category", "Rewind" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "If true, sequence will rewind itself back to the start each time the Play input is activated." },
			};
#endif
			auto NewProp_bRewindOnPlay_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bRewindOnPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRewindOnPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bRewindOnPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRewindOnPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRewindOnPlay_MetaData, ARRAY_COUNT(NewProp_bRewindOnPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "If sequence should pop back to beginning when finished.\nNote, if true, will never get Completed/Reversed events - sequence must be explicitly Stopped." },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceStartPosition_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Time position to always start at if bForceStartPos is set to true." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceStartPosition = { UE4CodeGen_Private::EPropertyClass::Float, "ForceStartPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(AMatineeActor, ForceStartPosition), METADATA_PARAMS(NewProp_ForceStartPosition_MetaData, ARRAY_COUNT(NewProp_ForceStartPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceStartPos_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Lets you force the sequence to always start at ForceStartPosition" },
			};
#endif
			auto NewProp_bForceStartPos_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bForceStartPos = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceStartPos = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceStartPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceStartPos_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceStartPos_MetaData, ARRAY_COUNT(NewProp_bForceStartPos_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayOnLevelLoad_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "If true, the matinee will play when the level is loaded." },
			};
#endif
			auto NewProp_bPlayOnLevelLoad_SetBit = [](void* Obj){ ((AMatineeActor*)Obj)->bPlayOnLevelLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayOnLevelLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayOnLevelLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AMatineeActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlayOnLevelLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlayOnLevelLoad_MetaData, ARRAY_COUNT(NewProp_bPlayOnLevelLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
				{ "Category", "Play" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Time multiplier for playback." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMatineeActor, PlayRate), METADATA_PARAMS(NewProp_PlayRate_MetaData, ARRAY_COUNT(NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeControllerName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "Name of controller node in level script, used to know what function to try and find for events" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatineeControllerName = { UE4CodeGen_Private::EPropertyClass::Name, "MatineeControllerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMatineeActor, MatineeControllerName), METADATA_PARAMS(NewProp_MatineeControllerName_MetaData, ARRAY_COUNT(NewProp_MatineeControllerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeData_MetaData[] = {
				{ "Category", "MatineeActor" },
				{ "ForceRebuildProperty", "GroupActorInfos" },
				{ "ModuleRelativePath", "Classes/Matinee/MatineeActor.h" },
				{ "ToolTip", "The matinee data used by this actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatineeData = { UE4CodeGen_Private::EPropertyClass::Object, "MatineeData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMatineeActor, MatineeData), Z_Construct_UClass_UInterpData_NoRegister, METADATA_PARAMS(NewProp_MatineeData_MetaData, ARRAY_COUNT(NewProp_MatineeData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPause,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicationForceIsPlaying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPendingStop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPaused,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReversePlayback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPlaying,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsScrubbing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsBeingEdited,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraCuts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraCuts_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupInst_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldShowGore,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupActorInfos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupActorInfos_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHideHud,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHidePlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableLookAtInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableMovementInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreferredSplitScreenNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSkippable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipUpdateIfNotVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientSideOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableRadioFilter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRewindIfAlreadyPlaying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoResetOnRewind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRewindOnPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceStartPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceStartPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlayOnLevelLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MatineeControllerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MatineeData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMatineeActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMatineeActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AMatineeActor, 3670558959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMatineeActor(Z_Construct_UClass_AMatineeActor, &AMatineeActor::StaticClass, TEXT("/Script/Engine"), TEXT("AMatineeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMatineeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
