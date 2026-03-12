// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue561Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue561Test() {}
// Cross Module References
	UNLUATESTSUITE_API UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue561Struct();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnLuaTestSuite, nullptr, "Issue561Event__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FIssue561Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FIssue561Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue561Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue561Struct"), sizeof(FIssue561Struct), Get_Z_Construct_UScriptStruct_FIssue561Struct_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue561Struct>()
{
	return FIssue561Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIssue561Struct(FIssue561Struct::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("Issue561Struct"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue561Struct
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue561Struct()
	{
		UScriptStruct::DeferCppStructOps<FIssue561Struct>(FName(TEXT("Issue561Struct")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue561Struct;
	struct Z_Construct_UScriptStruct_FIssue561Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue561Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue561Test.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent = { "OnMouseEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue561Struct, OnMouseEvent), Z_Construct_UDelegateFunction_UnLuaTestSuite_Issue561Event__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue561Struct_Statics::NewProp_OnMouseEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue561Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue561Struct",
		sizeof(FIssue561Struct),
		alignof(FIssue561Struct),
		Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue561Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue561Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIssue561Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Issue561Struct"), sizeof(FIssue561Struct), Get_Z_Construct_UScriptStruct_FIssue561Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIssue561Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIssue561Struct_Hash() { return 3430848204U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
