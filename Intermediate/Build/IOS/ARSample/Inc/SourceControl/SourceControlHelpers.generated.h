// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCECONTROL_SourceControlHelpers_generated_h
#error "SourceControlHelpers.generated.h already included, missing '#pragma once' in SourceControlHelpers.h"
#endif
#define SOURCECONTROL_SourceControlHelpers_generated_h

#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyFileUnderSourceControl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDestFile); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSourceFile); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InFileDescription); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutFailReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USourceControlHelpers::CopyFileUnderSourceControl(Z_Param_InDestFile,Z_Param_InSourceFile,Z_Param_Out_InFileDescription,Z_Param_Out_OutFailReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkFileForAdd) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USourceControlHelpers::MarkFileForAdd(Z_Param_InFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckOutFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USourceControlHelpers::CheckOutFile(Z_Param_InFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbsoluteFilenames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFileNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USourceControlHelpers::AbsoluteFilenames(Z_Param_Out_InFileNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackageFilenames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPackageNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USourceControlHelpers::PackageFilenames(Z_Param_Out_InPackageNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackageFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USourceControlHelpers::PackageFilename(Z_Param_InPackageName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyFileUnderSourceControl) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InDestFile); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSourceFile); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InFileDescription); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutFailReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USourceControlHelpers::CopyFileUnderSourceControl(Z_Param_InDestFile,Z_Param_InSourceFile,Z_Param_Out_InFileDescription,Z_Param_Out_OutFailReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkFileForAdd) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USourceControlHelpers::MarkFileForAdd(Z_Param_InFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckOutFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USourceControlHelpers::CheckOutFile(Z_Param_InFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbsoluteFilenames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFileNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USourceControlHelpers::AbsoluteFilenames(Z_Param_Out_InFileNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackageFilenames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPackageNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=USourceControlHelpers::PackageFilenames(Z_Param_Out_InPackageNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackageFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=USourceControlHelpers::PackageFilename(Z_Param_InPackageName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceControlHelpers(); \
	friend SOURCECONTROL_API class UClass* Z_Construct_UClass_USourceControlHelpers(); \
public: \
	DECLARE_CLASS(USourceControlHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SourceControl"), NO_API) \
	DECLARE_SERIALIZER(USourceControlHelpers) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSourceControlHelpers(); \
	friend SOURCECONTROL_API class UClass* Z_Construct_UClass_USourceControlHelpers(); \
public: \
	DECLARE_CLASS(USourceControlHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/SourceControl"), NO_API) \
	DECLARE_SERIALIZER(USourceControlHelpers) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceControlHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceControlHelpers(USourceControlHelpers&&); \
	NO_API USourceControlHelpers(const USourceControlHelpers&); \
public:


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceControlHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceControlHelpers(USourceControlHelpers&&); \
	NO_API USourceControlHelpers(const USourceControlHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlHelpers)


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_27_PROLOG
#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_RPC_WRAPPERS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_INCLASS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_SourceControl_Public_SourceControlHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
