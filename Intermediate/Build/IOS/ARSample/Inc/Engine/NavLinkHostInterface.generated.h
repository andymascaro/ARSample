// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavLinkHostInterface_generated_h
#error "NavLinkHostInterface.generated.h already included, missing '#pragma once' in NavLinkHostInterface.h"
#endif
#define ENGINE_NavLinkHostInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavLinkHostInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkHostInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavLinkHostInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkHostInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavLinkHostInterface(UNavLinkHostInterface&&); \
	ENGINE_API UNavLinkHostInterface(const UNavLinkHostInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavLinkHostInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavLinkHostInterface(UNavLinkHostInterface&&); \
	ENGINE_API UNavLinkHostInterface(const UNavLinkHostInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavLinkHostInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkHostInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkHostInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavLinkHostInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNavLinkHostInterface(); \
public: \
	DECLARE_CLASS(UNavLinkHostInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavLinkHostInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavLinkHostInterface() {} \
public: \
	typedef UNavLinkHostInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~INavLinkHostInterface() {} \
public: \
	typedef UNavLinkHostInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkHostInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
