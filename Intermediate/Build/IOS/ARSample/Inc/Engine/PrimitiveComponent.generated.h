// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
class AActor;
struct FHitResult;
struct FVector;
class APawn;
class UPhysicalMaterial;
enum class ERendererStencilMask : uint8;
struct FWalkableSlopeOverride;
class UMaterialInterface;
class UMaterialInstanceDynamic;
#ifdef ENGINE_PrimitiveComponent_generated_h
#error "PrimitiveComponent.generated.h already included, missing '#pragma once' in PrimitiveComponent.h"
#endif
#define ENGINE_PrimitiveComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_72_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_162_DELEGATE \
struct _Script_Engine_eventComponentEndTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_161_DELEGATE \
struct _Script_Engine_eventComponentBeginTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_160_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchEndSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchEndSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_159_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchBeginSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchBeginSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_158_DELEGATE \
struct _Script_Engine_eventComponentOnReleasedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonReleased; \
}; \
static inline void FComponentOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnReleasedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonReleased) \
{ \
	_Script_Engine_eventComponentOnReleasedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonReleased=ButtonReleased; \
	ComponentOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_157_DELEGATE \
struct _Script_Engine_eventComponentOnClickedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonPressed; \
}; \
static inline void FComponentOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnClickedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) \
{ \
	_Script_Engine_eventComponentOnClickedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonPressed=ButtonPressed; \
	ComponentOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_156_DELEGATE \
struct _Script_Engine_eventComponentEndCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_155_DELEGATE \
struct _Script_Engine_eventComponentBeginCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_153_DELEGATE \
struct _Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms \
{ \
	UPrimitiveComponent* ChangedComponent; \
}; \
static inline void FComponentCollisionSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentCollisionSettingsChangedSignature, UPrimitiveComponent* ChangedComponent) \
{ \
	_Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms Parms; \
	Parms.ChangedComponent=ChangedComponent; \
	ComponentCollisionSettingsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_151_DELEGATE \
struct _Script_Engine_eventComponentSleepSignature_Parms \
{ \
	UPrimitiveComponent* SleepingComponent; \
	FName BoneName; \
}; \
static inline void FComponentSleepSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentSleepSignature, UPrimitiveComponent* SleepingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentSleepSignature_Parms Parms; \
	Parms.SleepingComponent=SleepingComponent; \
	Parms.BoneName=BoneName; \
	ComponentSleepSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_149_DELEGATE \
struct _Script_Engine_eventComponentWakeSignature_Parms \
{ \
	UPrimitiveComponent* WakingComponent; \
	FName BoneName; \
}; \
static inline void FComponentWakeSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentWakeSignature, UPrimitiveComponent* WakingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentWakeSignature_Parms Parms; \
	Parms.WakingComponent=WakingComponent; \
	Parms.BoneName=BoneName; \
	ComponentWakeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_147_DELEGATE \
struct _Script_Engine_eventComponentEndOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
}; \
static inline void FComponentEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) \
{ \
	_Script_Engine_eventComponentEndOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	ComponentEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_145_DELEGATE \
struct _Script_Engine_eventComponentBeginOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
	bool bFromSweep; \
	FHitResult SweepResult; \
}; \
static inline void FComponentBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult) \
{ \
	_Script_Engine_eventComponentBeginOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	Parms.bFromSweep=bFromSweep ? true : false; \
	Parms.SweepResult=SweepResult; \
	ComponentBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_143_DELEGATE \
struct _Script_Engine_eventComponentHitSignature_Parms \
{ \
	UPrimitiveComponent* HitComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FComponentHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentHitSignature, UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_Engine_eventComponentHitSignature_Parms Parms; \
	Parms.HitComponent=HitComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	ComponentHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanCharacterStepUp(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCullDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCullDistance(Z_Param_NewCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysMaterialOverride) \
	{ \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_NewPhysMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysMaterialOverride(Z_Param_NewPhysMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionResponseToAllChannels(ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel),ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnyRigidBodyAwake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleByMomentOfInertia) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputVector); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->ScaleByMomentOfInertia(Z_Param_InputVector,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInertiaTensor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetInertiaTensor(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassOverrideInKg) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MassInKg); \
		P_GET_UBOOL(Z_Param_bOverrideMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMassOverrideInKg(Z_Param_BoneName,Z_Param_MassInKg,Z_Param_bOverrideMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMassScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMassScale(Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMassScale(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMassScale(Z_Param_BoneName,Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngularDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAngularDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAngularDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinearDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetLinearDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLinearDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGravityEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsGravityEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bGravityEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableGravity(Z_Param_bGravityEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeAllRigidBodies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->WakeAllRigidBodies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsAngularVelocityInRadians(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsAngularVelocityInDegrees(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocity) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsAngularVelocity(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionObjectType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=this->GetCollisionObjectType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionResponse>*)Z_Param__Result=this->GetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_IsPhysicsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_IsQueryCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_IsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionEnabled::Type>*)Z_Param__Result=this->GetCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestPointOnCollision) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPointOnBody); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetClosestPointOnCollision(Z_Param_Out_Point,Z_Param_Out_OutPointOnBody,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderInMono) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderInMono(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderInMainPass) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderInMainPass(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask) \
	{ \
		P_GET_ENUM(ERendererStencilMask,Z_Param_WriteMaskBit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomDepthStencilWriteMask(ERendererStencilMask(Z_Param_WriteMaskBit)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomDepthStencilValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderCustomDepth) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderCustomDepth(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_LineTraceComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_LineTraceComponent(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionObjectType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionObjectType(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionProfileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetCollisionProfileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionProfileName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InCollisionProfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionProfileName(Z_Param_InCollisionProfileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionEnabled(ECollisionEnabled::Type(Z_Param_NewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReceivesDecals) \
	{ \
		P_GET_UBOOL(Z_Param_bNewReceivesDecals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetReceivesDecals(Z_Param_bNewReceivesDecals); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTranslucentSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewTranslucentSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTranslucentSortPriority(Z_Param_NewTranslucentSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSingleSampleShadowFromStationaryLights(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastShadow) \
	{ \
		P_GET_UBOOL(Z_Param_NewCastShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCastShadow(Z_Param_NewCastShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlyOwnerSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOnlyOwnerSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOnlyOwnerSee(Z_Param_bNewOnlyOwnerSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerNoSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOwnerNoSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOwnerNoSee(Z_Param_bNewOwnerNoSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPutRigidBodyToSleep) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PutRigidBodyToSleep(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeRigidBody) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->WakeRigidBody(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCenterOfMass) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CenterOfMassOffset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCenterOfMass(Z_Param_CenterOfMassOffset,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCenterOfMass(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsAngularVelocityInRadians(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsAngularVelocityInDegrees(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsAngularVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsMaxAngularVelocityInRadians(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsMaxAngularVelocityInDegrees(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsMaxAngularVelocity(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAngularVelocityInDegrees(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAngularVelocityInRadians(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAngularVelocity(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsLinearVelocityAtPoint(Z_Param_Point,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsLinearVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTorqueInDegrees(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTorqueInRadians(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorque) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTorque(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddRadialForce(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocationLocal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForceAtLocationLocal(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForceAtLocation(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForce(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddRadialImpulse(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulseAtLocation(Z_Param_Impulse,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddAngularImpulseInDegrees(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddAngularImpulseInRadians(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddAngularImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintMode(EDOFMode::Type(Z_Param_ConstraintMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLockedAxis) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_LockedAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLockedAxis(EDOFMode::Type(Z_Param_LockedAxis)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSimulatePhysics(Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride) \
	{ \
		P_GET_STRUCT_REF(FWalkableSlopeOverride,Z_Param_Out_NewOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWalkableSlopeOverride(Z_Param_Out_NewOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FWalkableSlopeOverride*)Z_Param__Result=this->GetWalkableSlopeOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FaceIndex); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetMaterialFromCollisionFaceIndex(Z_Param_FaceIndex,Z_Param_Out_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateDynamicMaterialInstance(Z_Param_ElementIndex,Z_Param_SourceMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateAndSetMaterialInstanceDynamicFromMaterial(Z_Param_ElementIndex,Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateAndSetMaterialInstanceDynamic(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterialByName(Z_Param_MaterialSlotName,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterial(Z_Param_ElementIndex,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetMaterial(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundsScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBoundsScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoundsScale(Z_Param_NewBoundsScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_InOverlappingComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetOverlappingComponents(Z_Param_Out_InOverlappingComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OverlappingActors); \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetOverlappingActors(Z_Param_Out_OverlappingActors,Z_Param_ClassFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOverlappingActor(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOverlappingComponent(Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=this->CopyArrayOfMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IgnoreComponentWhenMoving(Z_Param_Component,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=this->CopyArrayOfMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IgnoreActorWhenMoving(Z_Param_Actor,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanCharacterStepUp(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCullDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCullDistance(Z_Param_NewCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysMaterialOverride) \
	{ \
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_NewPhysMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysMaterialOverride(Z_Param_NewPhysMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionResponseToAllChannels(ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewResponse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel),ECollisionResponse(Z_Param_NewResponse)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnyRigidBodyAwake(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleByMomentOfInertia) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InputVector); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->ScaleByMomentOfInertia(Z_Param_InputVector,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInertiaTensor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetInertiaTensor(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassOverrideInKg) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MassInKg); \
		P_GET_UBOOL(Z_Param_bOverrideMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMassOverrideInKg(Z_Param_BoneName,Z_Param_MassInKg,Z_Param_bOverrideMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMassScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMassScale(Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMassScale(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMassScale) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMassScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMassScale(Z_Param_BoneName,Z_Param_InMassScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngularDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAngularDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAngularDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinearDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetLinearDamping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLinearDamping) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLinearDamping(Z_Param_InDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGravityEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsGravityEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bGravityEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableGravity(Z_Param_bGravityEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeAllRigidBodies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->WakeAllRigidBodies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsAngularVelocityInRadians(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsAngularVelocityInDegrees(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocity) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsAngularVelocity(Z_Param_Out_NewAngVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionObjectType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=this->GetCollisionObjectType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionResponse>*)Z_Param__Result=this->GetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_IsPhysicsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_IsQueryCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_IsCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ECollisionEnabled::Type>*)Z_Param__Result=this->GetCollisionEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestPointOnCollision) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPointOnBody); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetClosestPointOnCollision(Z_Param_Out_Point,Z_Param_Out_OutPointOnBody,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderInMono) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderInMono(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderInMainPass) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderInMainPass(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask) \
	{ \
		P_GET_ENUM(ERendererStencilMask,Z_Param_WriteMaskBit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomDepthStencilWriteMask(ERendererStencilMask(Z_Param_WriteMaskBit)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomDepthStencilValue(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderCustomDepth) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRenderCustomDepth(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_LineTraceComponent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_TraceStart); \
		P_GET_STRUCT(FVector,Z_Param_TraceEnd); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_UBOOL(Z_Param_bShowTrace); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_LineTraceComponent(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_Out_OutHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionObjectType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionObjectType(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCollisionProfileName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetCollisionProfileName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionProfileName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InCollisionProfileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionProfileName(Z_Param_InCollisionProfileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCollisionEnabled(ECollisionEnabled::Type(Z_Param_NewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReceivesDecals) \
	{ \
		P_GET_UBOOL(Z_Param_bNewReceivesDecals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetReceivesDecals(Z_Param_bNewReceivesDecals); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTranslucentSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewTranslucentSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTranslucentSortPriority(Z_Param_NewTranslucentSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSingleSampleShadowFromStationaryLights(Z_Param_bNewSingleSampleShadowFromStationaryLights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastShadow) \
	{ \
		P_GET_UBOOL(Z_Param_NewCastShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCastShadow(Z_Param_NewCastShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnlyOwnerSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOnlyOwnerSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOnlyOwnerSee(Z_Param_bNewOnlyOwnerSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerNoSee) \
	{ \
		P_GET_UBOOL(Z_Param_bNewOwnerNoSee); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOwnerNoSee(Z_Param_bNewOwnerNoSee); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPutRigidBodyToSleep) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PutRigidBodyToSleep(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWakeRigidBody) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->WakeRigidBody(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCenterOfMass) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CenterOfMassOffset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCenterOfMass(Z_Param_CenterOfMassOffset,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCenterOfMass(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsAngularVelocityInRadians(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsAngularVelocityInDegrees(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsAngularVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsMaxAngularVelocityInRadians(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsMaxAngularVelocityInDegrees(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsMaxAngularVelocity(Z_Param_NewMaxAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAngularVelocityInDegrees(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAngularVelocityInRadians(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewAngVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsAngularVelocity(Z_Param_NewAngVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsLinearVelocityAtPoint(Z_Param_Point,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPhysicsLinearVelocity(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsLinearVelocity(Z_Param_NewVel,Z_Param_bAddToCurrent,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTorqueInDegrees(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorqueInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTorqueInRadians(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTorque) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Torque); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTorque(Z_Param_Torque,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddRadialForce(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocationLocal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForceAtLocationLocal(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForceAtLocation(Z_Param_Force,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForce(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRadialImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddRadialImpulse(Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseAtLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulseAtLocation(Z_Param_Impulse,Z_Param_Location,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddAngularImpulseInDegrees(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddAngularImpulseInRadians(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAngularImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddAngularImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulse(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintMode(EDOFMode::Type(Z_Param_ConstraintMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLockedAxis) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_LockedAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLockedAxis(EDOFMode::Type(Z_Param_LockedAxis)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSimulatePhysics(Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride) \
	{ \
		P_GET_STRUCT_REF(FWalkableSlopeOverride,Z_Param_Out_NewOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWalkableSlopeOverride(Z_Param_Out_NewOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FWalkableSlopeOverride*)Z_Param__Result=this->GetWalkableSlopeOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FaceIndex); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetMaterialFromCollisionFaceIndex(Z_Param_FaceIndex,Z_Param_Out_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateDynamicMaterialInstance(Z_Param_ElementIndex,Z_Param_SourceMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateAndSetMaterialInstanceDynamicFromMaterial(Z_Param_ElementIndex,Z_Param_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateAndSetMaterialInstanceDynamic(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterialByName(Z_Param_MaterialSlotName,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterial(Z_Param_ElementIndex,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ElementIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetMaterial(Z_Param_ElementIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundsScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBoundsScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoundsScale(Z_Param_NewBoundsScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_InOverlappingComponents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetOverlappingComponents(Z_Param_Out_InOverlappingComponents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OverlappingActors); \
		P_GET_OBJECT(UClass,Z_Param_ClassFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetOverlappingActors(Z_Param_Out_OverlappingActors,Z_Param_ClassFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOverlappingActor(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverlappingComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOverlappingComponent(Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=this->CopyArrayOfMoveIgnoreComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IgnoreComponentWhenMoving(Z_Param_Component,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=this->CopyArrayOfMoveIgnoreActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldIgnore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IgnoreActorWhenMoving(Z_Param_Actor,Z_Param_bShouldIgnore); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent(); \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent(); \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPrimitiveComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CanBeCharacterBase_DEPRECATED() { return STRUCT_OFFSET(UPrimitiveComponent, CanBeCharacterBase_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__LODParentPrimitive() { return STRUCT_OFFSET(UPrimitiveComponent, LODParentPrimitive); }


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_169_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h


#define FOREACH_ENUM_ERENDERERSTENCILMASK(op) \
	op(ERendererStencilMask::ERSM_Default) \
	op(ERendererStencilMask::ERSM_255) \
	op(ERendererStencilMask::ERSM_1) \
	op(ERendererStencilMask::ERSM_2) \
	op(ERendererStencilMask::ERSM_4) \
	op(ERendererStencilMask::ERSM_8) \
	op(ERendererStencilMask::ERSM_16) \
	op(ERendererStencilMask::ERSM_32) \
	op(ERendererStencilMask::ERSM_64) 
#define FOREACH_ENUM_EHASCUSTOMNAVIGABLEGEOMETRY(op) \
	op(EHasCustomNavigableGeometry::No) \
	op(EHasCustomNavigableGeometry::Yes) \
	op(EHasCustomNavigableGeometry::EvenIfNotCollidable) 
#define FOREACH_ENUM_ECANBECHARACTERBASE(op) \
	op(ECB_No) \
	op(ECB_Yes) \
	op(ECB_Owner) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
