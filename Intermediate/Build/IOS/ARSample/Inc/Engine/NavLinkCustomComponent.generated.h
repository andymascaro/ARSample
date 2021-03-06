// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavLinkCustomComponent_generated_h
#error "NavLinkCustomComponent.generated.h already included, missing '#pragma once' in NavLinkCustomComponent.h"
#endif
#define ENGINE_NavLinkCustomComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavLinkCustomComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavLinkCustomComponent(); \
public: \
	DECLARE_CLASS(UNavLinkCustomComponent, UNavRelevantComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkCustomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkCustomComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkCustomComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavLinkCustomComponent(); \
public: \
	DECLARE_CLASS(UNavLinkCustomComponent, UNavRelevantComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkCustomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkCustomComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkCustomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkCustomComponent(UNavLinkCustomComponent&&); \
	NO_API UNavLinkCustomComponent(const UNavLinkCustomComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkCustomComponent(UNavLinkCustomComponent&&); \
	NO_API UNavLinkCustomComponent(const UNavLinkCustomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkCustomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomComponent)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavLinkUserId() { return STRUCT_OFFSET(UNavLinkCustomComponent, NavLinkUserId); } \
	FORCEINLINE static uint32 __PPO__EnabledAreaClass() { return STRUCT_OFFSET(UNavLinkCustomComponent, EnabledAreaClass); } \
	FORCEINLINE static uint32 __PPO__DisabledAreaClass() { return STRUCT_OFFSET(UNavLinkCustomComponent, DisabledAreaClass); } \
	FORCEINLINE static uint32 __PPO__LinkRelativeStart() { return STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeStart); } \
	FORCEINLINE static uint32 __PPO__LinkRelativeEnd() { return STRUCT_OFFSET(UNavLinkCustomComponent, LinkRelativeEnd); } \
	FORCEINLINE static uint32 __PPO__LinkDirection() { return STRUCT_OFFSET(UNavLinkCustomComponent, LinkDirection); } \
	FORCEINLINE static uint32 __PPO__ObstacleOffset() { return STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleOffset); } \
	FORCEINLINE static uint32 __PPO__ObstacleExtent() { return STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleExtent); } \
	FORCEINLINE static uint32 __PPO__ObstacleAreaClass() { return STRUCT_OFFSET(UNavLinkCustomComponent, ObstacleAreaClass); } \
	FORCEINLINE static uint32 __PPO__BroadcastRadius() { return STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastRadius); } \
	FORCEINLINE static uint32 __PPO__BroadcastInterval() { return STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastInterval); } \
	FORCEINLINE static uint32 __PPO__BroadcastChannel() { return STRUCT_OFFSET(UNavLinkCustomComponent, BroadcastChannel); }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_27_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLinkCustomComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkCustomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
