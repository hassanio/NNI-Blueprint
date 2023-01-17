// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPLUGIN_TestPluginBPLibrary_generated_h
#error "TestPluginBPLibrary.generated.h already included, missing '#pragma once' in TestPluginBPLibrary.h"
#endif
#define TESTPLUGIN_TestPluginBPLibrary_generated_h

#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_SPARSE_DATA
#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadONNXfile); \
	DECLARE_FUNCTION(execLoadFromBytes); \
	DECLARE_FUNCTION(execLoadFromFile); \
	DECLARE_FUNCTION(execTestPluginSampleFunction);


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadONNXfile); \
	DECLARE_FUNCTION(execLoadFromBytes); \
	DECLARE_FUNCTION(execLoadFromFile); \
	DECLARE_FUNCTION(execTestPluginSampleFunction);


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UTestPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTestPluginBPLibrary)


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTestPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UTestPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTestPluginBPLibrary)


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestPluginBPLibrary(UTestPluginBPLibrary&&); \
	NO_API UTestPluginBPLibrary(const UTestPluginBPLibrary&); \
public:


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestPluginBPLibrary(UTestPluginBPLibrary&&); \
	NO_API UTestPluginBPLibrary(const UTestPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestPluginBPLibrary)


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_25_PROLOG
#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_SPARSE_DATA \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_RPC_WRAPPERS \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_INCLASS \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_SPARSE_DATA \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TestPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPLUGIN_API UClass* StaticClass<class UTestPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
