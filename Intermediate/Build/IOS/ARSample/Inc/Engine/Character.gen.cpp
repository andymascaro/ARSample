// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBasedMovementInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepRootMotionMontage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_CanJump();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_CanJumpInternal();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_ClientCheatFly();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_ClientCheatGhost();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_ClientCheatWalk();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_Crouch();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_GetCurrentMontage();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_IsJumpProvidingForce();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_IsPlayingRootMotion();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_Jump();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_K2_OnEndCrouch();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_K2_OnStartCrouch();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_LaunchCharacter();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnJumped();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnLanded();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnLaunched();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnRep_IsCrouched();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnRep_RootMotion();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_OnWalkingOffLedge();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_PlayAnimMontage();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_SetReplicateMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_StopAnimMontage();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_StopJumping();
	ENGINE_API UFunction* Z_Construct_UFunction_ACharacter_UnCrouch();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_LandedSignature__DelegateSignature()
	{
		struct _Script_Engine_eventLandedSignature_Parms
		{
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventLandedSignature_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "LandedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventLandedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "CharacterReachedApexSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature()
	{
		struct _Script_Engine_eventCharacterMovementUpdatedSignature_Parms
		{
			float DeltaSeconds;
			FVector OldLocation;
			FVector OldVelocity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "OldVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "CharacterMovementUpdatedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventCharacterMovementUpdatedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature()
	{
		struct _Script_Engine_eventMovementModeChangedSignature_Parms
		{
			ACharacter* Character;
			TEnumAsByte<EMovementMode> PrevMovementMode;
			uint8 PreviousCustomMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousCustomMode = { UE4CodeGen_Private::EPropertyClass::Byte, "PreviousCustomMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventMovementModeChangedSignature_Parms, PreviousCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "PrevMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventMovementModeChangedSignature_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventMovementModeChangedSignature_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousCustomMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Character,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "MovementModeChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventMovementModeChangedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FBasedMovementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBasedMovementInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasedMovementInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BasedMovementInfo"), sizeof(FBasedMovementInfo), Get_Z_Construct_UScriptStruct_FBasedMovementInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBasedMovementInfo(FBasedMovementInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BasedMovementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBasedMovementInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBasedMovementInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BasedMovementInfo")),new UScriptStruct::TCppStructOps<FBasedMovementInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBasedMovementInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBasedMovementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBasedMovementInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BasedMovementInfo"), sizeof(FBasedMovementInfo), Get_Z_Construct_UScriptStruct_FBasedMovementInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Struct to hold information about the \"base\" object the character is standing on." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasedMovementInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerHasVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Whether there is a velocity on the server. Used for forcing replication when velocity goes to zero." },
			};
#endif
			auto NewProp_bServerHasVelocity_SetBit = [](void* Obj){ ((FBasedMovementInfo*)Obj)->bServerHasVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerHasVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bServerHasVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBasedMovementInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bServerHasVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bServerHasVelocity_MetaData, ARRAY_COUNT(NewProp_bServerHasVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Whether rotation is relative to the base or absolute. It can only be relative if location is also relative." },
			};
#endif
			auto NewProp_bRelativeRotation_SetBit = [](void* Obj){ ((FBasedMovementInfo*)Obj)->bRelativeRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBasedMovementInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelativeRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRelativeRotation_MetaData, ARRAY_COUNT(NewProp_bRelativeRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerHasBaseComponent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Whether the server says that there is a base. On clients, the component may not have resolved yet." },
			};
#endif
			auto NewProp_bServerHasBaseComponent_SetBit = [](void* Obj){ ((FBasedMovementInfo*)Obj)->bServerHasBaseComponent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerHasBaseComponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bServerHasBaseComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBasedMovementInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bServerHasBaseComponent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bServerHasBaseComponent_MetaData, ARRAY_COUNT(NewProp_bServerHasBaseComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Rotation: relative to MovementBase if HasRelativeRotation() is true, absolute otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBasedMovementInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Location relative to MovementBase. Only valid if HasRelativeLocation() is true." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBasedMovementInfo, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Bone name on component, for skeletal meshes. NAME_None if not a skeletal mesh or if bone is invalid." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBasedMovementInfo, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Component we are based on" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "MovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FBasedMovementInfo, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_MovementBase_MetaData, ARRAY_COUNT(NewProp_MovementBase_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bServerHasVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bServerHasBaseComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementBase,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BasedMovementInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FBasedMovementInfo),
				alignof(FBasedMovementInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBasedMovementInfo_CRC() { return 3666931535U; }
class UScriptStruct* FSimulatedRootMotionReplicatedMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove, Z_Construct_UPackage__Script_Engine(), TEXT("SimulatedRootMotionReplicatedMove"), sizeof(FSimulatedRootMotionReplicatedMove), Get_Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimulatedRootMotionReplicatedMove(FSimulatedRootMotionReplicatedMove::StaticStruct, TEXT("/Script/Engine"), TEXT("SimulatedRootMotionReplicatedMove"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSimulatedRootMotionReplicatedMove
{
	FScriptStruct_Engine_StaticRegisterNativesFSimulatedRootMotionReplicatedMove()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimulatedRootMotionReplicatedMove")),new UScriptStruct::TCppStructOps<FSimulatedRootMotionReplicatedMove>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSimulatedRootMotionReplicatedMove;
	UScriptStruct* Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimulatedRootMotionReplicatedMove"), sizeof(FSimulatedRootMotionReplicatedMove), Get_Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulatedRootMotionReplicatedMove>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Root Motion information" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootMotion = { UE4CodeGen_Private::EPropertyClass::Struct, "RootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FSimulatedRootMotionReplicatedMove, RootMotion), Z_Construct_UScriptStruct_FRepRootMotionMontage, METADATA_PARAMS(NewProp_RootMotion_MetaData, ARRAY_COUNT(NewProp_RootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Local time when move was received on client and saved." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSimulatedRootMotionReplicatedMove, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SimulatedRootMotionReplicatedMove",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FSimulatedRootMotionReplicatedMove),
				alignof(FSimulatedRootMotionReplicatedMove),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_CRC() { return 1057915549U; }
class UScriptStruct* FRepRootMotionMontage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRepRootMotionMontage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepRootMotionMontage, Z_Construct_UPackage__Script_Engine(), TEXT("RepRootMotionMontage"), sizeof(FRepRootMotionMontage), Get_Z_Construct_UScriptStruct_FRepRootMotionMontage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepRootMotionMontage(FRepRootMotionMontage::StaticStruct, TEXT("/Script/Engine"), TEXT("RepRootMotionMontage"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRepRootMotionMontage
{
	FScriptStruct_Engine_StaticRegisterNativesFRepRootMotionMontage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RepRootMotionMontage")),new UScriptStruct::TCppStructOps<FRepRootMotionMontage>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRepRootMotionMontage;
	UScriptStruct* Z_Construct_UScriptStruct_FRepRootMotionMontage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepRootMotionMontage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepRootMotionMontage"), sizeof(FRepRootMotionMontage), Get_Z_Construct_UScriptStruct_FRepRootMotionMontage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Replicated data when playing a root motion montage." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepRootMotionMontage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Velocity" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(NewProp_LinearVelocity_MetaData, ARRAY_COUNT(NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Acceleration" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Acceleration), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthoritativeRootMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "State of Root Motion Sources on Authority" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthoritativeRootMotion = { UE4CodeGen_Private::EPropertyClass::Struct, "AuthoritativeRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, AuthoritativeRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(NewProp_AuthoritativeRootMotion_MetaData, ARRAY_COUNT(NewProp_AuthoritativeRootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Whether rotation is relative or absolute." },
			};
#endif
			auto NewProp_bRelativeRotation_SetBit = [](void* Obj){ ((FRepRootMotionMontage*)Obj)->bRelativeRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRepRootMotionMontage), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelativeRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRelativeRotation_MetaData, ARRAY_COUNT(NewProp_bRelativeRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativePosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Additional replicated flag, if MovementBase can't be resolved on the client. So we don't use wrong data." },
			};
#endif
			auto NewProp_bRelativePosition_SetBit = [](void* Obj){ ((FRepRootMotionMontage*)Obj)->bRelativePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRepRootMotionMontage), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelativePosition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRelativePosition_MetaData, ARRAY_COUNT(NewProp_bRelativePosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementBaseBoneName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Bone on the MovementBase, if a skeletal mesh." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovementBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "MovementBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, MovementBaseBoneName), METADATA_PARAMS(NewProp_MovementBaseBoneName_MetaData, ARRAY_COUNT(NewProp_MovementBaseBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Movement Relative to Base" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "MovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_MovementBase_MetaData, ARRAY_COUNT(NewProp_MovementBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Track position of Montage" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Float, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, Position), METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "AnimMontage providing Root Motion" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage = { UE4CodeGen_Private::EPropertyClass::Object, "AnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRepRootMotionMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_AnimMontage_MetaData, ARRAY_COUNT(NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Whether this has useful/active data." },
			};
#endif
			auto NewProp_bIsActive_SetBit = [](void* Obj){ ((FRepRootMotionMontage*)Obj)->bIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRepRootMotionMontage), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsActive_MetaData, ARRAY_COUNT(NewProp_bIsActive_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinearVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuthoritativeRootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelativePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimMontage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsActive,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RepRootMotionMontage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FRepRootMotionMontage),
				alignof(FRepRootMotionMontage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepRootMotionMontage_CRC() { return 1319157882U; }
	static FName NAME_ACharacter_CanJumpInternal = FName(TEXT("CanJumpInternal"));
	bool ACharacter::CanJumpInternal() const
	{
		Character_eventCanJumpInternal_Parms Parms;
		const_cast<ACharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_ACharacter_CanJumpInternal),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ACharacter_ClientCheatFly = FName(TEXT("ClientCheatFly"));
	void ACharacter::ClientCheatFly()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientCheatFly),NULL);
	}
	static FName NAME_ACharacter_ClientCheatGhost = FName(TEXT("ClientCheatGhost"));
	void ACharacter::ClientCheatGhost()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientCheatGhost),NULL);
	}
	static FName NAME_ACharacter_ClientCheatWalk = FName(TEXT("ClientCheatWalk"));
	void ACharacter::ClientCheatWalk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_ClientCheatWalk),NULL);
	}
	static FName NAME_ACharacter_K2_OnEndCrouch = FName(TEXT("K2_OnEndCrouch"));
	void ACharacter::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		Character_eventK2_OnEndCrouch_Parms Parms;
		Parms.HalfHeightAdjust=HalfHeightAdjust;
		Parms.ScaledHalfHeightAdjust=ScaledHalfHeightAdjust;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_OnEndCrouch),&Parms);
	}
	static FName NAME_ACharacter_K2_OnMovementModeChanged = FName(TEXT("K2_OnMovementModeChanged"));
	void ACharacter::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode)
	{
		Character_eventK2_OnMovementModeChanged_Parms Parms;
		Parms.PrevMovementMode=PrevMovementMode;
		Parms.NewMovementMode=NewMovementMode;
		Parms.PrevCustomMode=PrevCustomMode;
		Parms.NewCustomMode=NewCustomMode;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_OnMovementModeChanged),&Parms);
	}
	static FName NAME_ACharacter_K2_OnStartCrouch = FName(TEXT("K2_OnStartCrouch"));
	void ACharacter::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		Character_eventK2_OnStartCrouch_Parms Parms;
		Parms.HalfHeightAdjust=HalfHeightAdjust;
		Parms.ScaledHalfHeightAdjust=ScaledHalfHeightAdjust;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_OnStartCrouch),&Parms);
	}
	static FName NAME_ACharacter_K2_UpdateCustomMovement = FName(TEXT("K2_UpdateCustomMovement"));
	void ACharacter::K2_UpdateCustomMovement(float DeltaTime)
	{
		Character_eventK2_UpdateCustomMovement_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_K2_UpdateCustomMovement),&Parms);
	}
	static FName NAME_ACharacter_OnJumped = FName(TEXT("OnJumped"));
	void ACharacter::OnJumped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnJumped),NULL);
	}
	static FName NAME_ACharacter_OnLanded = FName(TEXT("OnLanded"));
	void ACharacter::OnLanded(FHitResult const& Hit)
	{
		Character_eventOnLanded_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnLanded),&Parms);
	}
	static FName NAME_ACharacter_OnLaunched = FName(TEXT("OnLaunched"));
	void ACharacter::OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride)
	{
		Character_eventOnLaunched_Parms Parms;
		Parms.LaunchVelocity=LaunchVelocity;
		Parms.bXYOverride=bXYOverride ? true : false;
		Parms.bZOverride=bZOverride ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnLaunched),&Parms);
	}
	static FName NAME_ACharacter_OnWalkingOffLedge = FName(TEXT("OnWalkingOffLedge"));
	void ACharacter::OnWalkingOffLedge(FVector const& PreviousFloorImpactNormal, FVector const& PreviousFloorContactNormal, FVector const& PreviousLocation, float TimeDelta)
	{
		Character_eventOnWalkingOffLedge_Parms Parms;
		Parms.PreviousFloorImpactNormal=PreviousFloorImpactNormal;
		Parms.PreviousFloorContactNormal=PreviousFloorContactNormal;
		Parms.PreviousLocation=PreviousLocation;
		Parms.TimeDelta=TimeDelta;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_OnWalkingOffLedge),&Parms);
	}
	static FName NAME_ACharacter_RootMotionDebugClientPrintOnScreen = FName(TEXT("RootMotionDebugClientPrintOnScreen"));
	void ACharacter::RootMotionDebugClientPrintOnScreen(const FString& InString)
	{
		Character_eventRootMotionDebugClientPrintOnScreen_Parms Parms;
		Parms.InString=InString;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_RootMotionDebugClientPrintOnScreen),&Parms);
	}
	void ACharacter::StaticRegisterNativesACharacter()
	{
		UClass* Class = ACharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CacheInitialMeshOffset", (Native)&ACharacter::execCacheInitialMeshOffset },
			{ "CanJump", (Native)&ACharacter::execCanJump },
			{ "CanJumpInternal", (Native)&ACharacter::execCanJumpInternal },
			{ "ClientCheatFly", (Native)&ACharacter::execClientCheatFly },
			{ "ClientCheatGhost", (Native)&ACharacter::execClientCheatGhost },
			{ "ClientCheatWalk", (Native)&ACharacter::execClientCheatWalk },
			{ "Crouch", (Native)&ACharacter::execCrouch },
			{ "GetAnimRootMotionTranslationScale", (Native)&ACharacter::execGetAnimRootMotionTranslationScale },
			{ "GetBaseRotationOffsetRotator", (Native)&ACharacter::execGetBaseRotationOffsetRotator },
			{ "GetBaseTranslationOffset", (Native)&ACharacter::execGetBaseTranslationOffset },
			{ "GetCurrentMontage", (Native)&ACharacter::execGetCurrentMontage },
			{ "IsJumpProvidingForce", (Native)&ACharacter::execIsJumpProvidingForce },
			{ "IsPlayingNetworkedRootMotionMontage", (Native)&ACharacter::execIsPlayingNetworkedRootMotionMontage },
			{ "IsPlayingRootMotion", (Native)&ACharacter::execIsPlayingRootMotion },
			{ "Jump", (Native)&ACharacter::execJump },
			{ "LaunchCharacter", (Native)&ACharacter::execLaunchCharacter },
			{ "OnJumped", (Native)&ACharacter::execOnJumped },
			{ "OnRep_IsCrouched", (Native)&ACharacter::execOnRep_IsCrouched },
			{ "OnRep_ReplicatedBasedMovement", (Native)&ACharacter::execOnRep_ReplicatedBasedMovement },
			{ "OnRep_RootMotion", (Native)&ACharacter::execOnRep_RootMotion },
			{ "OnWalkingOffLedge", (Native)&ACharacter::execOnWalkingOffLedge },
			{ "PlayAnimMontage", (Native)&ACharacter::execPlayAnimMontage },
			{ "RootMotionDebugClientPrintOnScreen", (Native)&ACharacter::execRootMotionDebugClientPrintOnScreen },
			{ "SetReplicateMovement", (Native)&ACharacter::execSetReplicateMovement },
			{ "StopAnimMontage", (Native)&ACharacter::execStopAnimMontage },
			{ "StopJumping", (Native)&ACharacter::execStopJumping },
			{ "UnCrouch", (Native)&ACharacter::execUnCrouch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset()
	{
		struct Character_eventCacheInitialMeshOffset_Parms
		{
			FVector MeshRelativeLocation;
			FRotator MeshRelativeRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshRelativeRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshRelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventCacheInitialMeshOffset_Parms, MeshRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshRelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshRelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventCacheInitialMeshOffset_Parms, MeshRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshRelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshRelativeLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Cache mesh offset from capsule. This is used as the target for network smoothing interpolation, when the mesh is offset with lagged smoothing.\nThis is automatically called during initialization; call this at runtime if you intend to change the default mesh offset from the capsule.\n@see GetBaseTranslationOffset(), GetBaseRotationOffset()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "CacheInitialMeshOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Character_eventCacheInitialMeshOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_CanJump()
	{
		struct Character_eventCanJump_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Character_eventCanJump_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventCanJump_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Check if the character can jump in the current state.\n\nThe default implementation may be overridden or extended by implementing the custom CanJump event in Blueprints.\n\n@Return Whether the character can jump in the current state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "CanJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Character_eventCanJump_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_CanJumpInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Character_eventCanJumpInternal_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventCanJumpInternal_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "DisplayName", "CanJump" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Customizable event to check if the character can jump in the current state.\nDefault implementation returns true if the character is on the ground and not crouching,\nhas a valid CharacterMovementComponent and CanEverJump() returns true.\nDefault implementation also allows for 'hold to jump higher' functionality:\nAs well as returning true when on the ground, it also returns true when GetMaxJumpTime is more\nthan zero and IsJumping returns true.\n\n\n@Return Whether the character can jump in the current state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "CanJumpInternal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48080C00, sizeof(Character_eventCanJumpInternal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_ClientCheatFly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "ClientCheatFly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_ClientCheatGhost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "ClientCheatGhost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_ClientCheatWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "ClientCheatWalk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_Crouch()
	{
		struct Character_eventCrouch_Parms
		{
			bool bClientSimulation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bClientSimulation_SetBit = [](void* Obj){ ((Character_eventCrouch_Parms*)Obj)->bClientSimulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSimulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientSimulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventCrouch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientSimulation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientSimulation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "CPP_Default_bClientSimulation", "false" },
				{ "HidePin", "bClientSimulation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Request the character to start crouching. The request is processed on the next update of the CharacterMovementComponent.\n@see OnStartCrouch\n@see IsCrouched\n@see CharacterMovement->WantsToCrouch" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "Crouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Character_eventCrouch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale()
	{
		struct Character_eventGetAnimRootMotionTranslationScale_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Character_eventGetAnimRootMotionTranslationScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Returns current value of AnimRootMotionScale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "GetAnimRootMotionTranslationScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Character_eventGetAnimRootMotionTranslationScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator()
	{
		struct Character_eventGetBaseRotationOffsetRotator_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Character_eventGetBaseRotationOffsetRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "DisplayName", "GetBaseRotationOffset" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Get the saved rotation offset of mesh. This is how much extra rotation is applied from the capsule rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "GetBaseRotationOffsetRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Character_eventGetBaseRotationOffsetRotator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset()
	{
		struct Character_eventGetBaseTranslationOffset_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Character_eventGetBaseTranslationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Get the saved translation offset of mesh. This is how much extra offset is applied from the center of the capsule." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "GetBaseTranslationOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Character_eventGetBaseTranslationOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_GetCurrentMontage()
	{
		struct Character_eventGetCurrentMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Character_eventGetCurrentMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Return current playing Montage *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "GetCurrentMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Character_eventGetCurrentMontage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_IsJumpProvidingForce()
	{
		struct Character_eventIsJumpProvidingForce_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Character_eventIsJumpProvidingForce_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventIsJumpProvidingForce_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "True if jump is actively providing a force, such as when the jump key is held and the time it has been held is less than JumpMaxHoldTime.\n@see CharacterMovement->IsFalling" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "IsJumpProvidingForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Character_eventIsJumpProvidingForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage()
	{
		struct Character_eventIsPlayingNetworkedRootMotionMontage_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Character_eventIsPlayingNetworkedRootMotionMontage_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventIsPlayingNetworkedRootMotionMontage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "true if we are playing Root Motion right now, through a Montage with RootMotionMode == ERootMotionMode::RootMotionFromMontagesOnly.\nThis means code path for networked root motion is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "IsPlayingNetworkedRootMotionMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Character_eventIsPlayingNetworkedRootMotionMontage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_IsPlayingRootMotion()
	{
		struct Character_eventIsPlayingRootMotion_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Character_eventIsPlayingRootMotion_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventIsPlayingRootMotion_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "true if we are playing Root Motion right now" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "IsPlayingRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Character_eventIsPlayingRootMotion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Make the character jump on the next update.\nIf you want your character to jump according to the time that the jump key is held,\nthen you can set JumpKeyHoldTime to some non-zero value. Make sure in this case to\ncall StopJumping() when you want the jump's z-velocity to stop being applied (such\nas on a button up event), otherwise the character will carry on receiving the\nvelocity until JumpKeyHoldTime is reached." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "Jump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_K2_OnEndCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaledHalfHeightAdjust = { UE4CodeGen_Private::EPropertyClass::Float, "ScaledHalfHeightAdjust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnEndCrouch_Parms, ScaledHalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeightAdjust = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeightAdjust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnEndCrouch_Parms, HalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaledHalfHeightAdjust,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeightAdjust,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnEndCrouch" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Event when Character stops crouching.\n@param       HalfHeightAdjust                difference between default collision half-height, and actual crouched capsule half-height.\n@param       ScaledHalfHeightAdjust  difference after component scale is taken in to account." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "K2_OnEndCrouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Character_eventK2_OnEndCrouch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCustomMode = { UE4CodeGen_Private::EPropertyClass::Byte, "NewCustomMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, NewCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevCustomMode = { UE4CodeGen_Private::EPropertyClass::Byte, "PrevCustomMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, PrevCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "NewMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "PrevMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnMovementModeChanged_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCustomMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevCustomMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrevMovementMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnMovementModeChanged" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Called from CharacterMovementComponent to notify the character that the movement mode has changed.\n@param       PrevMovementMode        Movement mode before the change\n@param       NewMovementMode         New movement mode\n@param       PrevCustomMode          Custom mode before the change (applicable if PrevMovementMode is Custom)\n@param       NewCustomMode           New custom mode (applicable if NewMovementMode is Custom)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "K2_OnMovementModeChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Character_eventK2_OnMovementModeChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_K2_OnStartCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaledHalfHeightAdjust = { UE4CodeGen_Private::EPropertyClass::Float, "ScaledHalfHeightAdjust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnStartCrouch_Parms, ScaledHalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeightAdjust = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeightAdjust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_OnStartCrouch_Parms, HalfHeightAdjust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaledHalfHeightAdjust,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeightAdjust,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnStartCrouch" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Event when Character crouches.\n@param       HalfHeightAdjust                difference between default collision half-height, and actual crouched capsule half-height.\n@param       ScaledHalfHeightAdjust  difference after component scale is taken in to account." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "K2_OnStartCrouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Character_eventK2_OnStartCrouch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventK2_UpdateCustomMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "UpdateCustomMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Event for implementing custom character movement mode. Called by CharacterMovement if MovementMode is set to Custom.\n@note C++ code should override UCharacterMovementComponent::PhysCustom() instead.\n@see UCharacterMovementComponent::PhysCustom()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "K2_UpdateCustomMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Character_eventK2_UpdateCustomMovement_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_LaunchCharacter()
	{
		struct Character_eventLaunchCharacter_Parms
		{
			FVector LaunchVelocity;
			bool bXYOverride;
			bool bZOverride;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bZOverride_SetBit = [](void* Obj){ ((Character_eventLaunchCharacter_Parms*)Obj)->bZOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bZOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventLaunchCharacter_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZOverride_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bXYOverride_SetBit = [](void* Obj){ ((Character_eventLaunchCharacter_Parms*)Obj)->bXYOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bXYOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bXYOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventLaunchCharacter_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bXYOverride_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventLaunchCharacter_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bXYOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchVelocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Set a pending launch velocity on the Character. This velocity will be processed on the next CharacterMovementComponent tick,\nand will set it to the \"falling\" state. Triggers the OnLaunched event.\n@PARAM LaunchVelocity is the velocity to impart to the Character\n@PARAM bXYOverride if true replace the XY part of the Character's velocity instead of adding to it.\n@PARAM bZOverride if true replace the Z component of the Character's velocity instead of adding to it." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "LaunchCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Character_eventLaunchCharacter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Event fired when the character has just started jumping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnJumped", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Character_eventOnLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Called upon landing when falling, to perform actions based on the Hit result.\nNote that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\nConsider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\n\n@param Hit Result describing the landing that resulted in a valid landing spot.\n@see OnMovementModeChanged()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnLanded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(Character_eventOnLanded_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnLaunched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bZOverride_SetBit = [](void* Obj){ ((Character_eventOnLaunched_Parms*)Obj)->bZOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bZOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventOnLaunched_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZOverride_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bXYOverride_SetBit = [](void* Obj){ ((Character_eventOnLaunched_Parms*)Obj)->bXYOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bXYOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bXYOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventOnLaunched_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bXYOverride_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventOnLaunched_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bXYOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchVelocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Let blueprint know that we were launched" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnLaunched", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(Character_eventOnLaunched_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_IsCrouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Handle Crouching replicated from server" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnRep_IsCrouched", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Rep notify for ReplicatedBasedMovement" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnRep_ReplicatedBasedMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnRep_RootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Handles replicated root motion properties on simulated proxies and position correction." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnRep_RootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_OnWalkingOffLedge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDelta = { UE4CodeGen_Private::EPropertyClass::Float, "TimeDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, TimeDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, PreviousLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PreviousLocation_MetaData, ARRAY_COUNT(NewProp_PreviousLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFloorContactNormal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousFloorContactNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousFloorContactNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, PreviousFloorContactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PreviousFloorContactNormal_MetaData, ARRAY_COUNT(NewProp_PreviousFloorContactNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFloorImpactNormal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousFloorImpactNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousFloorImpactNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Character_eventOnWalkingOffLedge_Parms, PreviousFloorImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PreviousFloorImpactNormal_MetaData, ARRAY_COUNT(NewProp_PreviousFloorImpactNormal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousFloorContactNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousFloorImpactNormal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Event fired when the Character is walking off a surface and is about to fall because CharacterMovement->CurrentFloor became unwalkable.\nIf CharacterMovement->MovementMode does not change during this event then the character will automatically start falling afterwards.\n@note Z velocity is zero during walking movement, and will be here as well. Another velocity can be computed here if desired and will be used when starting to fall.\n\n@param  PreviousFloorImpactNormal Normal of the previous walkable floor.\n@param  PreviousFloorContactNormal Normal of the contact with the previous walkable floor.\n@param  PreviousLocation     Previous character location before movement off the ledge.\n@param  TimeTick     Time delta of movement update resulting in moving off the ledge." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "OnWalkingOffLedge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C00, sizeof(Character_eventOnWalkingOffLedge_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_PlayAnimMontage()
	{
		struct Character_eventPlayAnimMontage_Parms
		{
			UAnimMontage* AnimMontage;
			float InPlayRate;
			FName StartSectionName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSectionName = { UE4CodeGen_Private::EPropertyClass::Name, "StartSectionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, StartSectionName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "InPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage = { UE4CodeGen_Private::EPropertyClass::Object, "AnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventPlayAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartSectionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPlayRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimMontage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "CPP_Default_InPlayRate", "1.000000" },
				{ "CPP_Default_StartSectionName", "None" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Play Animation Montage on the character mesh *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "PlayAnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Character_eventPlayAnimMontage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString = { UE4CodeGen_Private::EPropertyClass::Str, "InString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventRootMotionDebugClientPrintOnScreen_Parms, InString), METADATA_PARAMS(NewProp_InString_MetaData, ARRAY_COUNT(NewProp_InString_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "RootMotionDebugClientPrintOnScreen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, sizeof(Character_eventRootMotionDebugClientPrintOnScreen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_SetReplicateMovement()
	{
		struct Character_eventSetReplicateMovement_Parms
		{
			bool bInReplicateMovement;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInReplicateMovement_SetBit = [](void* Obj){ ((Character_eventSetReplicateMovement_Parms*)Obj)->bInReplicateMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReplicateMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bInReplicateMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventSetReplicateMovement_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInReplicateMovement_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInReplicateMovement,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replication" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Set whether this actor's movement replicates to network clients." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "SetReplicateMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Character_eventSetReplicateMovement_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_StopAnimMontage()
	{
		struct Character_eventStopAnimMontage_Parms
		{
			UAnimMontage* AnimMontage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage = { UE4CodeGen_Private::EPropertyClass::Object, "AnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Character_eventStopAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimMontage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Stop Animation Montage. If NULL, it will stop what's currently active. The Blend Out Time is taken from the montage asset that is being stopped. *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "StopAnimMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Character_eventStopAnimMontage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_StopJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Stop the character from jumping on the next update.\nCall this from an input event (such as a button 'up' event) to cease applying\njump Z-velocity. If this is not called, then jump z-velocity will be applied\nuntil JumpMaxHoldTime is reached." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "StopJumping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACharacter_UnCrouch()
	{
		struct Character_eventUnCrouch_Parms
		{
			bool bClientSimulation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bClientSimulation_SetBit = [](void* Obj){ ((Character_eventUnCrouch_Parms*)Obj)->bClientSimulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSimulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientSimulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Character_eventUnCrouch_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientSimulation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientSimulation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Character" },
				{ "CPP_Default_bClientSimulation", "false" },
				{ "HidePin", "bClientSimulation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Request the character to stop crouching. The request is processed on the next update of the CharacterMovementComponent.\n@see OnEndCrouch\n@see IsCrouched\n@see CharacterMovement->WantsToCrouch" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter, "UnCrouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Character_eventUnCrouch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacter_NoRegister()
	{
		return ACharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ACharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACharacter_CacheInitialMeshOffset, "CacheInitialMeshOffset" }, // 1629944305
				{ &Z_Construct_UFunction_ACharacter_CanJump, "CanJump" }, // 4018040532
				{ &Z_Construct_UFunction_ACharacter_CanJumpInternal, "CanJumpInternal" }, // 762607053
				{ &Z_Construct_UFunction_ACharacter_ClientCheatFly, "ClientCheatFly" }, // 4084203298
				{ &Z_Construct_UFunction_ACharacter_ClientCheatGhost, "ClientCheatGhost" }, // 367311172
				{ &Z_Construct_UFunction_ACharacter_ClientCheatWalk, "ClientCheatWalk" }, // 1221701518
				{ &Z_Construct_UFunction_ACharacter_Crouch, "Crouch" }, // 2562551464
				{ &Z_Construct_UFunction_ACharacter_GetAnimRootMotionTranslationScale, "GetAnimRootMotionTranslationScale" }, // 2202666646
				{ &Z_Construct_UFunction_ACharacter_GetBaseRotationOffsetRotator, "GetBaseRotationOffsetRotator" }, // 1159663018
				{ &Z_Construct_UFunction_ACharacter_GetBaseTranslationOffset, "GetBaseTranslationOffset" }, // 3187884963
				{ &Z_Construct_UFunction_ACharacter_GetCurrentMontage, "GetCurrentMontage" }, // 3890407298
				{ &Z_Construct_UFunction_ACharacter_IsJumpProvidingForce, "IsJumpProvidingForce" }, // 1344450195
				{ &Z_Construct_UFunction_ACharacter_IsPlayingNetworkedRootMotionMontage, "IsPlayingNetworkedRootMotionMontage" }, // 3993312399
				{ &Z_Construct_UFunction_ACharacter_IsPlayingRootMotion, "IsPlayingRootMotion" }, // 1659399429
				{ &Z_Construct_UFunction_ACharacter_Jump, "Jump" }, // 1448668621
				{ &Z_Construct_UFunction_ACharacter_K2_OnEndCrouch, "K2_OnEndCrouch" }, // 2602054260
				{ &Z_Construct_UFunction_ACharacter_K2_OnMovementModeChanged, "K2_OnMovementModeChanged" }, // 3097597146
				{ &Z_Construct_UFunction_ACharacter_K2_OnStartCrouch, "K2_OnStartCrouch" }, // 1331485665
				{ &Z_Construct_UFunction_ACharacter_K2_UpdateCustomMovement, "K2_UpdateCustomMovement" }, // 1164990576
				{ &Z_Construct_UFunction_ACharacter_LaunchCharacter, "LaunchCharacter" }, // 3353350093
				{ &Z_Construct_UFunction_ACharacter_OnJumped, "OnJumped" }, // 335121867
				{ &Z_Construct_UFunction_ACharacter_OnLanded, "OnLanded" }, // 1216627077
				{ &Z_Construct_UFunction_ACharacter_OnLaunched, "OnLaunched" }, // 1785097520
				{ &Z_Construct_UFunction_ACharacter_OnRep_IsCrouched, "OnRep_IsCrouched" }, // 234596300
				{ &Z_Construct_UFunction_ACharacter_OnRep_ReplicatedBasedMovement, "OnRep_ReplicatedBasedMovement" }, // 1695744484
				{ &Z_Construct_UFunction_ACharacter_OnRep_RootMotion, "OnRep_RootMotion" }, // 1310106822
				{ &Z_Construct_UFunction_ACharacter_OnWalkingOffLedge, "OnWalkingOffLedge" }, // 1923405336
				{ &Z_Construct_UFunction_ACharacter_PlayAnimMontage, "PlayAnimMontage" }, // 3436438004
				{ &Z_Construct_UFunction_ACharacter_RootMotionDebugClientPrintOnScreen, "RootMotionDebugClientPrintOnScreen" }, // 343666474
				{ &Z_Construct_UFunction_ACharacter_SetReplicateMovement, "SetReplicateMovement" }, // 203416316
				{ &Z_Construct_UFunction_ACharacter_StopAnimMontage, "StopAnimMontage" }, // 2911725119
				{ &Z_Construct_UFunction_ACharacter_StopJumping, "StopJumping" }, // 1798195023
				{ &Z_Construct_UFunction_ACharacter_UnCrouch, "UnCrouch" }, // 3944583904
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "GameFramework/Character.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ShortTooltip", "A character is a type of Pawn that includes the ability to walk around." },
				{ "ToolTip", "Characters are Pawns that have a mesh, collision, and built-in movement logic.\nThey are responsible for all physical interaction between the player or AI and the world, and also implement basic networking and input models.\nThey are designed for a vertically-oriented player representation that can walk, jump, fly, and swim through the world using CharacterMovementComponent.\n\n@see APawn, UCharacterMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepRootMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Replicated Root Motion montage" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepRootMotion = { UE4CodeGen_Private::EPropertyClass::Struct, "RepRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008100000020, 1, "OnRep_RootMotion", STRUCT_OFFSET(ACharacter, RepRootMotion), Z_Construct_UScriptStruct_FRepRootMotionMontage, METADATA_PARAMS(NewProp_RepRootMotion_MetaData, ARRAY_COUNT(NewProp_RepRootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionRepMoves_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Array of previously received root motion moves from the server." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootMotionRepMoves = { UE4CodeGen_Private::EPropertyClass::Array, "RootMotionRepMoves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000002000, 1, nullptr, STRUCT_OFFSET(ACharacter, RootMotionRepMoves), METADATA_PARAMS(NewProp_RootMotionRepMoves_MetaData, ARRAY_COUNT(NewProp_RootMotionRepMoves_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootMotionRepMoves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RootMotionRepMoves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientRootMotionParams_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "For LocallyControlled Autonomous clients. Saved root motion data to be used by SavedMoves." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientRootMotionParams = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientRootMotionParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(ACharacter, ClientRootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(NewProp_ClientRootMotionParams_MetaData, ARRAY_COUNT(NewProp_ClientRootMotionParams_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedRootMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "For LocallyControlled Autonomous clients.\nDuring a PerformMovement() after root motion is prepared, we save it off into this and\nthen record it into our SavedMoves.\nDuring SavedMove playback we use it as our \"Previous Move\" SavedRootMotion which includes\nlast received root motion from the Server" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedRootMotion = { UE4CodeGen_Private::EPropertyClass::Struct, "SavedRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(ACharacter, SavedRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(NewProp_SavedRootMotion_MetaData, ARRAY_COUNT(NewProp_SavedRootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterMovementUpdated_MetaData[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Event triggered at the end of a CharacterMovementComponent movement update.\nThis is the preferred event to use rather than the Tick event when performing custom updates to CharacterMovement properties based on the current state.\nThis is mainly due to the nature of network updates, where client corrections in position from the server can cause multiple iterations of a movement update,\nwhich allows this event to update as well, while a Tick event would not.\n\n@param       DeltaSeconds            Delta time in seconds for this update\n@param       InitialLocation         Location at the start of the update. May be different than the current location if movement occurred.\n@param       InitialVelocity         Velocity at the start of the update. May be different than the current velocity." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterMovementUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCharacterMovementUpdated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ACharacter, OnCharacterMovementUpdated), Z_Construct_UDelegateFunction_Engine_CharacterMovementUpdatedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnCharacterMovementUpdated_MetaData, ARRAY_COUNT(NewProp_OnCharacterMovementUpdated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementModeChangedDelegate_MetaData[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Multicast delegate for MovementMode changing." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MovementModeChangedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "MovementModeChangedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ACharacter, MovementModeChangedDelegate), Z_Construct_UDelegateFunction_Engine_MovementModeChangedSignature__DelegateSignature, METADATA_PARAMS(NewProp_MovementModeChangedDelegate_MetaData, ARRAY_COUNT(NewProp_MovementModeChangedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReachedJumpApex_MetaData[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Broadcast when Character's jump reaches its apex. Needs CharacterMovement->bNotifyApex = true" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReachedJumpApex = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnReachedJumpApex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ACharacter, OnReachedJumpApex), Z_Construct_UDelegateFunction_Engine_CharacterReachedApexSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnReachedJumpApex_MetaData, ARRAY_COUNT(NewProp_OnReachedJumpApex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasJumping_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Tracks whether or not the character was already jumping last frame." },
			};
#endif
			auto NewProp_bWasJumping_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bWasJumping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasJumping = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasJumping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022815, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWasJumping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWasJumping_MetaData, ARRAY_COUNT(NewProp_bWasJumping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpCurrentCount_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Tracks the current number of jumps performed.\nThis is incremented in CheckJumpInput, used in CanJump_Implementation, and reset in OnMovementModeChanged.\nWhen providing overrides for these methods, it's recommended to either manually\nincrement / reset this value, or call the Super:: method." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_JumpCurrentCount = { UE4CodeGen_Private::EPropertyClass::Int, "JumpCurrentCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020815, 1, nullptr, STRUCT_OFFSET(ACharacter, JumpCurrentCount), METADATA_PARAMS(NewProp_JumpCurrentCount_MetaData, ARRAY_COUNT(NewProp_JumpCurrentCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpMaxCount_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "The max number of jumps the character can perform.\nNote that if JumpMaxHoldTime is non zero and StopJumping is not called, the player\nmay be able to perform and unlimited number of jumps. Therefore it is usually\nbest to call StopJumping() when jump input has ceased (such as a button up event)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_JumpMaxCount = { UE4CodeGen_Private::EPropertyClass::Int, "JumpMaxCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(ACharacter, JumpMaxCount), METADATA_PARAMS(NewProp_JumpMaxCount_MetaData, ARRAY_COUNT(NewProp_JumpMaxCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpMaxHoldTime_MetaData[] = {
				{ "Category", "Character" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "The max time the jump key can be held.\nNote that if StopJumping() is not called before the max jump hold time is reached,\nthen the character will carry on receiving vertical velocity. Therefore it is usually\nbest to call StopJumping() when jump input has ceased (such as a button up event)." },
				{ "UIMin", "0.000000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpMaxHoldTime = { UE4CodeGen_Private::EPropertyClass::Float, "JumpMaxHoldTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(ACharacter, JumpMaxHoldTime), METADATA_PARAMS(NewProp_JumpMaxHoldTime_MetaData, ARRAY_COUNT(NewProp_JumpMaxHoldTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpKeyHoldTime_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Jump key Held Time.\nThis is the time that the player has held the jump key, in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpKeyHoldTime = { UE4CodeGen_Private::EPropertyClass::Float, "JumpKeyHoldTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022815, 1, nullptr, STRUCT_OFFSET(ACharacter, JumpKeyHoldTime), METADATA_PARAMS(NewProp_JumpKeyHoldTime_MetaData, ARRAY_COUNT(NewProp_JumpKeyHoldTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerMoveIgnoreRootMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Disable root motion on the server. When receiving a DualServerMove, where the first move is not root motion and the second is." },
			};
#endif
			auto NewProp_bServerMoveIgnoreRootMotion_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bServerMoveIgnoreRootMotion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerMoveIgnoreRootMotion = { UE4CodeGen_Private::EPropertyClass::Bool, "bServerMoveIgnoreRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bServerMoveIgnoreRootMotion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bServerMoveIgnoreRootMotion_MetaData, ARRAY_COUNT(NewProp_bServerMoveIgnoreRootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			auto NewProp_bClientCheckEncroachmentOnNetUpdate_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bClientCheckEncroachmentOnNetUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientCheckEncroachmentOnNetUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientCheckEncroachmentOnNetUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientCheckEncroachmentOnNetUpdate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData, ARRAY_COUNT(NewProp_bClientCheckEncroachmentOnNetUpdate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimGravityDisabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Disable simulated gravity (set when character encroaches geometry on client, to keep him from falling through floors)" },
			};
#endif
			auto NewProp_bSimGravityDisabled_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bSimGravityDisabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimGravityDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimGravityDisabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSimGravityDisabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSimGravityDisabled_MetaData, ARRAY_COUNT(NewProp_bSimGravityDisabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientResimulateRootMotionSources_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "If server disagrees with root motion state, client has to resimulate root motion from last AckedMove." },
			};
#endif
			auto NewProp_bClientResimulateRootMotionSources_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bClientResimulateRootMotionSources = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientResimulateRootMotionSources = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientResimulateRootMotionSources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientResimulateRootMotionSources_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClientResimulateRootMotionSources_MetaData, ARRAY_COUNT(NewProp_bClientResimulateRootMotionSources_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientResimulateRootMotion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "If server disagrees with root motion track position, client has to resimulate root motion from last AckedMove." },
			};
#endif
			auto NewProp_bClientResimulateRootMotion_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bClientResimulateRootMotion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientResimulateRootMotion = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientResimulateRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientResimulateRootMotion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClientResimulateRootMotion_MetaData, ARRAY_COUNT(NewProp_bClientResimulateRootMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientWasFalling_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "True if Pawn was initially falling when started to replay network moves." },
			};
#endif
			auto NewProp_bClientWasFalling_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bClientWasFalling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientWasFalling = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientWasFalling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientWasFalling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClientWasFalling_MetaData, ARRAY_COUNT(NewProp_bClientWasFalling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientUpdating_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "When true, applying updates to network client (replaying saved moves for a locally controlled character)" },
			};
#endif
			auto NewProp_bClientUpdating_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bClientUpdating = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientUpdating = { UE4CodeGen_Private::EPropertyClass::Bool, "bClientUpdating", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClientUpdating_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClientUpdating_MetaData, ARRAY_COUNT(NewProp_bClientUpdating_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPressedJump_MetaData[] = {
				{ "Category", "Pawn|Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "When true, player wants to jump" },
			};
#endif
			auto NewProp_bPressedJump_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bPressedJump = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPressedJump = { UE4CodeGen_Private::EPropertyClass::Bool, "bPressedJump", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPressedJump_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPressedJump_MetaData, ARRAY_COUNT(NewProp_bPressedJump_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[] = {
				{ "Category", "Character" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Set by character movement to specify that this Character is currently crouched." },
			};
#endif
			auto NewProp_bIsCrouched_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bIsCrouched = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCrouched", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_IsCrouched", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsCrouched_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsCrouched_MetaData, ARRAY_COUNT(NewProp_bIsCrouched_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchedEyeHeight_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Default crouched eye height" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchedEyeHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CrouchedEyeHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACharacter, CrouchedEyeHeight), METADATA_PARAMS(NewProp_CrouchedEyeHeight_MetaData, ARRAY_COUNT(NewProp_CrouchedEyeHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInBaseReplication_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Flag that we are receiving replication of the based movement." },
			};
#endif
			auto NewProp_bInBaseReplication_SetBit = [](void* Obj){ ((ACharacter*)Obj)->bInBaseReplication = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInBaseReplication = { UE4CodeGen_Private::EPropertyClass::Bool, "bInBaseReplication", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ACharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInBaseReplication_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInBaseReplication_MetaData, ARRAY_COUNT(NewProp_bInBaseReplication_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMovementMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "CharacterMovement MovementMode (and custom mode) replicated for simulated proxies. Use CharacterMovementComponent::UnpackNetworkMovementMode() to translate it." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicatedMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ReplicatedMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ACharacter, ReplicatedMovementMode), nullptr, METADATA_PARAMS(NewProp_ReplicatedMovementMode_MetaData, ARRAY_COUNT(NewProp_ReplicatedMovementMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "CharacterMovement ServerLastTransformUpdateTimeStamp value, replicated to simulated proxies." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedServerLastTransformUpdateTimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "ReplicatedServerLastTransformUpdateTimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ACharacter, ReplicatedServerLastTransformUpdateTimeStamp), METADATA_PARAMS(NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData, ARRAY_COUNT(NewProp_ReplicatedServerLastTransformUpdateTimeStamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseRotationOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Saved rotation offset of mesh." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ACharacter, BaseRotationOffset), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_BaseRotationOffset_MetaData, ARRAY_COUNT(NewProp_BaseRotationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTranslationOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Saved translation offset of mesh." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseTranslationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseTranslationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ACharacter, BaseTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BaseTranslationOffset_MetaData, ARRAY_COUNT(NewProp_BaseTranslationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Scale to apply to root motion translation on this Character" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale = { UE4CodeGen_Private::EPropertyClass::Float, "AnimRootMotionTranslationScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ACharacter, AnimRootMotionTranslationScale), METADATA_PARAMS(NewProp_AnimRootMotionTranslationScale_MetaData, ARRAY_COUNT(NewProp_AnimRootMotionTranslationScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedBasedMovement_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Replicated version of relative movement. Read-only on simulated proxies!" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedBasedMovement = { UE4CodeGen_Private::EPropertyClass::Struct, "ReplicatedBasedMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088100000020, 1, "OnRep_ReplicatedBasedMovement", STRUCT_OFFSET(ACharacter, ReplicatedBasedMovement), Z_Construct_UScriptStruct_FBasedMovementInfo, METADATA_PARAMS(NewProp_ReplicatedBasedMovement_MetaData, ARRAY_COUNT(NewProp_ReplicatedBasedMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasedMovement_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Info about our current movement base (object we are standing on)." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasedMovement = { UE4CodeGen_Private::EPropertyClass::Struct, "BasedMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000000, 1, nullptr, STRUCT_OFFSET(ACharacter, BasedMovement), Z_Construct_UScriptStruct_FBasedMovementInfo, METADATA_PARAMS(NewProp_BasedMovement_MetaData, ARRAY_COUNT(NewProp_BasedMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapsuleComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACharacter, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "Movement component used for movement logic in various movement modes (walking, falling, etc), containing relevant settings and functions to control movement." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACharacter, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(NewProp_CharacterMovement_MetaData, ARRAY_COUNT(NewProp_CharacterMovement_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ACharacter, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Character" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Character.h" },
				{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACharacter, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RepRootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootMotionRepMoves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootMotionRepMoves_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRootMotionParams,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedRootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnCharacterMovementUpdated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementModeChangedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnReachedJumpApex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWasJumping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpCurrentCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpMaxCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpMaxHoldTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpKeyHoldTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bServerMoveIgnoreRootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientCheckEncroachmentOnNetUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSimGravityDisabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientResimulateRootMotionSources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientResimulateRootMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientWasFalling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClientUpdating,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPressedJump,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsCrouched,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrouchedEyeHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInBaseReplication,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedServerLastTransformUpdateTimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseRotationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTranslationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimRootMotionTranslationScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedBasedMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasedMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterMovement,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter, 1983944446);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter(Z_Construct_UClass_ACharacter, &ACharacter::StaticClass, TEXT("/Script/Engine"), TEXT("ACharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
