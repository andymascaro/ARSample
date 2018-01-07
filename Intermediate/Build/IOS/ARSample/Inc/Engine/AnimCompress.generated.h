// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCompress_generated_h
#error "AnimCompress.generated.h already included, missing '#pragma once' in AnimCompress.h"
#endif
#define ENGINE_AnimCompress_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCompress(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimCompress(); \
public: \
	DECLARE_CLASS(UAnimCompress, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompress) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimCompress(); \
public: \
	DECLARE_CLASS(UAnimCompress, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompress) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimCompress(UAnimCompress&&); \
	ENGINE_API UAnimCompress(const UAnimCompress&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimCompress(UAnimCompress&&); \
	ENGINE_API UAnimCompress(const UAnimCompress&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_67_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimCompress."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
