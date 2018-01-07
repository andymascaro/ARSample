// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
struct FARFilter;
#ifdef ASSETREGISTRY_IAssetRegistry_generated_h
#error "IAssetRegistry.generated.h already included, missing '#pragma once' in IAssetRegistry.h"
#endif
#define ASSETREGISTRY_IAssetRegistry_generated_h

#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoadingAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLoadingAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunAssetsThroughFilter) \
	{ \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList); \
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RunAssetsThroughFilter(Z_Param_Out_AssetDataList,Z_Param_Out_Filter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubPaths) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InBasePath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList); \
		P_GET_UBOOL(Z_Param_bInRecurse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSubPaths(Z_Param_InBasePath,Z_Param_Out_OutPathList,Z_Param_bInRecurse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCachedPaths) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetAllCachedPaths(Z_Param_Out_OutPathList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAssets) \
	{ \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllAssets(Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetByObjectPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ObjectPath); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=this->GetAssetByObjectPath(Z_Param_ObjectPath,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssets) \
	{ \
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssets(Z_Param_Out_Filter,Z_Param_Out_OutAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsByClass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClassName); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bSearchSubClasses); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssetsByClass(Z_Param_ClassName,Z_Param_Out_OutAssetData,Z_Param_bSearchSubClasses); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackagePath); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssetsByPath(Z_Param_PackagePath,Z_Param_Out_OutAssetData,Z_Param_bRecursive,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsByPackageName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssetsByPackageName(Z_Param_PackageName,Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAssets) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackagePath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasAssets(Z_Param_PackagePath,Z_Param_bRecursive); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoadingAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLoadingAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunAssetsThroughFilter) \
	{ \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList); \
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RunAssetsThroughFilter(Z_Param_Out_AssetDataList,Z_Param_Out_Filter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubPaths) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InBasePath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList); \
		P_GET_UBOOL(Z_Param_bInRecurse); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetSubPaths(Z_Param_InBasePath,Z_Param_Out_OutPathList,Z_Param_bInRecurse); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCachedPaths) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutPathList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetAllCachedPaths(Z_Param_Out_OutPathList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAssets) \
	{ \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllAssets(Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetByObjectPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ObjectPath); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=this->GetAssetByObjectPath(Z_Param_ObjectPath,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssets) \
	{ \
		P_GET_STRUCT_REF(FARFilter,Z_Param_Out_Filter); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssets(Z_Param_Out_Filter,Z_Param_Out_OutAssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsByClass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClassName); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bSearchSubClasses); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssetsByClass(Z_Param_ClassName,Z_Param_Out_OutAssetData,Z_Param_bSearchSubClasses); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackagePath); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssetsByPath(Z_Param_PackagePath,Z_Param_Out_OutAssetData,Z_Param_bRecursive,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsByPackageName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData); \
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAssetsByPackageName(Z_Param_PackageName,Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAssets) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackagePath); \
		P_GET_UBOOL(Z_Param_bRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasAssets(Z_Param_PackagePath,Z_Param_bRecursive); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETREGISTRY_API UAssetRegistry(UAssetRegistry&&); \
	ASSETREGISTRY_API UAssetRegistry(const UAssetRegistry&); \
public:


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETREGISTRY_API UAssetRegistry(UAssetRegistry&&); \
	ASSETREGISTRY_API UAssetRegistry(const UAssetRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry)


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetRegistry(); \
	friend ASSETREGISTRY_API class UClass* Z_Construct_UClass_UAssetRegistry(); \
public: \
	DECLARE_CLASS(UAssetRegistry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/AssetRegistry"), ASSETREGISTRY_API) \
	DECLARE_SERIALIZER(UAssetRegistry) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_58_PROLOG
#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h_61_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AssetRegistry_Public_IAssetRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
