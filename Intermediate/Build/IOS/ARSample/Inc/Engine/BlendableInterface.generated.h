// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendableInterface_generated_h
#error "BlendableInterface.generated.h already included, missing '#pragma once' in BlendableInterface.h"
#endif
#define ENGINE_BlendableInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendableInterface(UBlendableInterface&&); \
	NO_API UBlendableInterface(const UBlendableInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendableInterface(UBlendableInterface&&); \
	NO_API UBlendableInterface(const UBlendableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendableInterface)


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlendableInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlendableInterface(); \
public: \
	DECLARE_CLASS(UBlendableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlendableInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBlendableInterface() {} \
public: \
	typedef UBlendableInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_INCLASS_IINTERFACE \
protected: \
	virtual ~IBlendableInterface() {} \
public: \
	typedef UBlendableInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_38_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h


#define FOREACH_ENUM_EBLENDABLELOCATION(op) \
	op(BL_AfterTonemapping) \
	op(BL_BeforeTonemapping) \
	op(BL_BeforeTranslucency) \
	op(BL_ReplacingTonemapper) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
