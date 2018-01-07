// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_NamedSlotInterface_generated_h
#error "NamedSlotInterface.generated.h already included, missing '#pragma once' in NamedSlotInterface.h"
#endif
#define UMG_NamedSlotInterface_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamedSlotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlotInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamedSlotInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlotInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNamedSlotInterface(UNamedSlotInterface&&); \
	NO_API UNamedSlotInterface(const UNamedSlotInterface&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNamedSlotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNamedSlotInterface(UNamedSlotInterface&&); \
	NO_API UNamedSlotInterface(const UNamedSlotInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNamedSlotInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlotInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlotInterface)


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNamedSlotInterface(); \
	friend UMG_API class UClass* Z_Construct_UClass_UNamedSlotInterface(); \
public: \
	DECLARE_CLASS(UNamedSlotInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UNamedSlotInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INamedSlotInterface() {} \
public: \
	typedef UNamedSlotInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~INamedSlotInterface() {} \
public: \
	typedef UNamedSlotInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
