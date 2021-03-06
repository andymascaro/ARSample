// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Rig_generated_h
#error "Rig.generated.h already included, missing '#pragma once' in Rig.h"
#endif
#define ENGINE_Rig_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_128_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformBase(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_116_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_97_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_27_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNode(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURig(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URig(); \
public: \
	DECLARE_CLASS(URig, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_INCLASS \
private: \
	static void StaticRegisterNativesURig(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_URig(); \
public: \
	DECLARE_CLASS(URig, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URig(URig&&); \
	ENGINE_API URig(const URig&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URig(URig&&); \
	ENGINE_API URig(const URig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URig)


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformBases() { return STRUCT_OFFSET(URig, TransformBases); } \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(URig, Nodes); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_144_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_147_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Rig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_Rig_h


#define FOREACH_ENUM_ECONSTRAINTTRANSFORM(op) \
	op(EConstraintTransform::Absolute) 
#define FOREACH_ENUM_ECONTROLCONSTRAINT(op) \
	op(EControlConstraint::Orientation) \
	op(EControlConstraint::Translation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
