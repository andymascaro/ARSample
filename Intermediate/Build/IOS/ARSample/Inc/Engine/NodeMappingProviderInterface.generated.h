// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NodeMappingProviderInterface_generated_h
#error "NodeMappingProviderInterface.generated.h already included, missing '#pragma once' in NodeMappingProviderInterface.h"
#endif
#define ENGINE_NodeMappingProviderInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingProviderInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingProviderInterface(UNodeMappingProviderInterface&&); \
	NO_API UNodeMappingProviderInterface(const UNodeMappingProviderInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingProviderInterface(UNodeMappingProviderInterface&&); \
	NO_API UNodeMappingProviderInterface(const UNodeMappingProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingProviderInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingProviderInterface)


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNodeMappingProviderInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNodeMappingProviderInterface(); \
public: \
	DECLARE_CLASS(UNodeMappingProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNodeMappingProviderInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INodeMappingProviderInterface() {} \
public: \
	typedef UNodeMappingProviderInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INodeMappingProviderInterface() {} \
public: \
	typedef UNodeMappingProviderInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
