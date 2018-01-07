// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PreviewCollectionInterface_generated_h
#error "PreviewCollectionInterface.generated.h already included, missing '#pragma once' in PreviewCollectionInterface.h"
#endif
#define ENGINE_PreviewCollectionInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreviewCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewCollectionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreviewCollectionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewCollectionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPreviewCollectionInterface(UPreviewCollectionInterface&&); \
	NO_API UPreviewCollectionInterface(const UPreviewCollectionInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPreviewCollectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPreviewCollectionInterface(UPreviewCollectionInterface&&); \
	NO_API UPreviewCollectionInterface(const UPreviewCollectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPreviewCollectionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewCollectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewCollectionInterface)


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPreviewCollectionInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPreviewCollectionInterface(); \
public: \
	DECLARE_CLASS(UPreviewCollectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPreviewCollectionInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPreviewCollectionInterface() {} \
public: \
	typedef UPreviewCollectionInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IPreviewCollectionInterface() {} \
public: \
	typedef UPreviewCollectionInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
