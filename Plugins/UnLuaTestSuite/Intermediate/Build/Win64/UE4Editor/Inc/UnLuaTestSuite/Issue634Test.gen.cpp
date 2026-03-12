// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue634Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue634Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue634Struct();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FIssue634Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FIssue634Struct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FIssue634Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FIssue634Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue634Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue634Struct"), sizeof(FIssue634Struct), Get_Z_Construct_UScriptStruct_FIssue634Struct_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue634Struct>()
{
	return FIssue634Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIssue634Struct(FIssue634Struct::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("Issue634Struct"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue634Struct
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue634Struct()
	{
		UScriptStruct::DeferCppStructOps<FIssue634Struct>(FName(TEXT("Issue634Struct")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue634Struct;
	struct Z_Construct_UScriptStruct_FIssue634Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuffID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue634Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue634Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue634Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID_MetaData[] = {
		{ "Category", "Issue634Struct" },
		{ "ModuleRelativePath", "Private/Tests/Issue634Test.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID = { "BuffID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue634Struct, BuffID), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime_MetaData[] = {
		{ "Category", "Issue634Struct" },
		{ "ModuleRelativePath", "Private/Tests/Issue634Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime = { "OverTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue634Struct, OverTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_BuffID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue634Struct_Statics::NewProp_OverTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue634Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Issue634Struct",
		sizeof(FIssue634Struct),
		alignof(FIssue634Struct),
		Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue634Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue634Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue634Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIssue634Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Issue634Struct"), sizeof(FIssue634Struct), Get_Z_Construct_UScriptStruct_FIssue634Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIssue634Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIssue634Struct_Hash() { return 1603537447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
