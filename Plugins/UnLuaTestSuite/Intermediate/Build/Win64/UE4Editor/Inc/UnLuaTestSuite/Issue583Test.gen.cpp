// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue583Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue583Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue583Row();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue583Record();
// End Cross Module References

static_assert(std::is_polymorphic<FIssue583Row>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FIssue583Row cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FIssue583Row::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FIssue583Row_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue583Row, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue583Row"), sizeof(FIssue583Row), Get_Z_Construct_UScriptStruct_FIssue583Row_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue583Row>()
{
	return FIssue583Row::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIssue583Row(FIssue583Row::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("Issue583Row"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue583Row
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue583Row()
	{
		UScriptStruct::DeferCppStructOps<FIssue583Row>(FName(TEXT("Issue583Row")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue583Row;
	struct Z_Construct_UScriptStruct_FIssue583Row_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Records_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Records;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue583Row_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue583Row_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue583Row>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_ValueProp = { "Records", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FIssue583Record, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_Key_KeyProp = { "Records_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_MetaData[] = {
		{ "Category", "Issue583Row" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue583Row, Records), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Row_Statics::NewProp_Records,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue583Row_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Issue583Row",
		sizeof(FIssue583Row),
		alignof(FIssue583Row),
		Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Row_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue583Row_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Row_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue583Row()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIssue583Row_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Issue583Row"), sizeof(FIssue583Row), Get_Z_Construct_UScriptStruct_FIssue583Row_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIssue583Row_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIssue583Row_Hash() { return 2130680561U; }
class UScriptStruct* FIssue583Record::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FIssue583Record_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue583Record, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue583Record"), sizeof(FIssue583Record), Get_Z_Construct_UScriptStruct_FIssue583Record_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue583Record>()
{
	return FIssue583Record::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIssue583Record(FIssue583Record::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("Issue583Record"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue583Record
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue583Record()
	{
		UScriptStruct::DeferCppStructOps<FIssue583Record>(FName(TEXT("Issue583Record")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue583Record;
	struct Z_Construct_UScriptStruct_FIssue583Record_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue583Record_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue583Record_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue583Record>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Issue583Record" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue583Record, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag_MetaData[] = {
		{ "Category", "Issue583Record" },
		{ "ModuleRelativePath", "Private/Tests/Issue583Test.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue583Record, Flag), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue583Record_Statics::NewProp_Flag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue583Record_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue583Record",
		sizeof(FIssue583Record),
		alignof(FIssue583Record),
		Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue583Record_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue583Record_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue583Record()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIssue583Record_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Issue583Record"), sizeof(FIssue583Record), Get_Z_Construct_UScriptStruct_FIssue583Record_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIssue583Record_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIssue583Record_Hash() { return 3673258208U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
