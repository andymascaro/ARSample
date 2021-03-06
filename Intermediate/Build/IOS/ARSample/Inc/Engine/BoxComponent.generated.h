// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ENGINE_BoxComponent_generated_h
#error "BoxComponent.generated.h already included, missing '#pragma once' in BoxComponent.h"
#endif
#define ENGINE_BoxComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUnscaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetScaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoxExtent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InBoxExtent); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoxExtent(Z_Param_InBoxExtent,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUnscaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetScaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoxExtent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InBoxExtent); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoxExtent(Z_Param_InBoxExtent,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoxComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent(); \
public: \
	DECLARE_CLASS(UBoxComponent, UShapeComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoxComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBoxComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent(); \
public: \
	DECLARE_CLASS(UBoxComponent, UShapeComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoxComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxComponent(UBoxComponent&&); \
	NO_API UBoxComponent(const UBoxComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxComponent(UBoxComponent&&); \
	NO_API UBoxComponent(const UBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxExtent() { return STRUCT_OFFSET(UBoxComponent, BoxExtent); }


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BoxComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
