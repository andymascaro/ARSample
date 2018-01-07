// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ImportantToggleSettingInterface_generated_h
#error "ImportantToggleSettingInterface.generated.h already included, missing '#pragma once' in ImportantToggleSettingInterface.h"
#endif
#define ENGINE_ImportantToggleSettingInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportantToggleSettingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportantToggleSettingInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportantToggleSettingInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportantToggleSettingInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UImportantToggleSettingInterface(UImportantToggleSettingInterface&&); \
	ENGINE_API UImportantToggleSettingInterface(const UImportantToggleSettingInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportantToggleSettingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UImportantToggleSettingInterface(UImportantToggleSettingInterface&&); \
	ENGINE_API UImportantToggleSettingInterface(const UImportantToggleSettingInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportantToggleSettingInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportantToggleSettingInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportantToggleSettingInterface)


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUImportantToggleSettingInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UImportantToggleSettingInterface(); \
public: \
	DECLARE_CLASS(UImportantToggleSettingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UImportantToggleSettingInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IImportantToggleSettingInterface() {} \
public: \
	typedef UImportantToggleSettingInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IImportantToggleSettingInterface() {} \
public: \
	typedef UImportantToggleSettingInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
