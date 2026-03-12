// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UObject;
#ifdef UNLUATESTSUITE_OutParamTest_generated_h
#error "OutParamTest.generated.h already included, missing '#pragma once' in OutParamTest.h"
#endif
#define UNLUATESTSUITE_OutParamTest_generated_h

#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_SPARSE_DATA
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_EVENT_PARMS \
	struct OutParamTestStub_eventReturnFull_Parms \
	{ \
		FVector Dest; \
		UObject* Obj; \
		float Radius; \
		bool bStop; \
	}; \
	struct OutParamTestStub_eventReturnPartial_Parms \
	{ \
		FVector Dest; \
		UObject* Obj; \
		float Radius; \
		bool bStop; \
	};


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_CALLBACK_WRAPPERS
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutParamTestStub(); \
	friend struct Z_Construct_UClass_UOutParamTestStub_Statics; \
public: \
	DECLARE_CLASS(UOutParamTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UOutParamTestStub) \
	virtual UObject* _getUObject() const override { return const_cast<UOutParamTestStub*>(this); }


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUOutParamTestStub(); \
	friend struct Z_Construct_UClass_UOutParamTestStub_Statics; \
public: \
	DECLARE_CLASS(UOutParamTestStub, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UOutParamTestStub) \
	virtual UObject* _getUObject() const override { return const_cast<UOutParamTestStub*>(this); }


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutParamTestStub(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutParamTestStub) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutParamTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutParamTestStub); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutParamTestStub(UOutParamTestStub&&); \
	NO_API UOutParamTestStub(const UOutParamTestStub&); \
public:


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutParamTestStub(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutParamTestStub(UOutParamTestStub&&); \
	NO_API UOutParamTestStub(const UOutParamTestStub&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutParamTestStub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutParamTestStub); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutParamTestStub)


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_PRIVATE_PROPERTY_OFFSET
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_20_PROLOG \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_EVENT_PARMS


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_PRIVATE_PROPERTY_OFFSET \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_SPARSE_DATA \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_CALLBACK_WRAPPERS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_PRIVATE_PROPERTY_OFFSET \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_SPARSE_DATA \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_CALLBACK_WRAPPERS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_INCLASS_NO_PURE_DECLS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class UOutParamTestStub>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_OutParamTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
