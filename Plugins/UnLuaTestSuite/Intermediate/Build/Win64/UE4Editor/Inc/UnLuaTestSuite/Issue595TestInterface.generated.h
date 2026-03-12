// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNLUATESTSUITE_Issue595TestInterface_generated_h
#error "Issue595TestInterface.generated.h already included, missing '#pragma once' in Issue595TestInterface.h"
#endif
#define UNLUATESTSUITE_Issue595TestInterface_generated_h

#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_SPARSE_DATA
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_RPC_WRAPPERS \
	virtual int32 Test_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execTest);


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 Test_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execTest);


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_EVENT_PARMS \
	struct Issue595Interface_eventTest_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Issue595Interface_eventTest_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_CALLBACK_WRAPPERS
#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIssue595Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIssue595Interface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIssue595Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIssue595Interface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIssue595Interface(UIssue595Interface&&); \
	NO_API UIssue595Interface(const UIssue595Interface&); \
public:


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIssue595Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIssue595Interface(UIssue595Interface&&); \
	NO_API UIssue595Interface(const UIssue595Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIssue595Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIssue595Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIssue595Interface)


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIssue595Interface(); \
	friend struct Z_Construct_UClass_UIssue595Interface_Statics; \
public: \
	DECLARE_CLASS(UIssue595Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnLuaTestSuite"), NO_API) \
	DECLARE_SERIALIZER(UIssue595Interface)


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_GENERATED_UINTERFACE_BODY() \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIssue595Interface() {} \
public: \
	typedef UIssue595Interface UClassType; \
	typedef IIssue595Interface ThisClass; \
	static int32 Execute_Test(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IIssue595Interface() {} \
public: \
	typedef UIssue595Interface UClassType; \
	typedef IIssue595Interface ThisClass; \
	static int32 Execute_Test(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_19_PROLOG \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_EVENT_PARMS


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_SPARSE_DATA \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_RPC_WRAPPERS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_CALLBACK_WRAPPERS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_SPARSE_DATA \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_CALLBACK_WRAPPERS \
	UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUATESTSUITE_API UClass* StaticClass<class UIssue595Interface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnLua_master_Plugins_UnLuaTestSuite_Source_UnLuaTestSuite_Private_Tests_Issue595TestInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
