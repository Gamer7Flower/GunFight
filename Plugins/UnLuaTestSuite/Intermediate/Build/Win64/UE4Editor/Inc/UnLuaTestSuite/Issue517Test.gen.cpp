// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue517Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue517Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue517Struct();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue517Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FIssue517Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FIssue517Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue517Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue517Struct"), sizeof(FIssue517Struct), Get_Z_Construct_UScriptStruct_FIssue517Struct_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue517Struct>()
{
	return FIssue517Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIssue517Struct(FIssue517Struct::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("Issue517Struct"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue517Struct
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue517Struct()
	{
		UScriptStruct::DeferCppStructOps<FIssue517Struct>(FName(TEXT("Issue517Struct")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue517Struct;
	struct Z_Construct_UScriptStruct_FIssue517Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayFromStruct_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayFromStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayFromStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue517Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_Inner = { "ArrayFromStruct", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct = { "ArrayFromStruct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue517Struct, ArrayFromStruct), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue517Struct_Statics::NewProp_ArrayFromStruct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue517Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue517Struct",
		sizeof(FIssue517Struct),
		alignof(FIssue517Struct),
		Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue517Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue517Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIssue517Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Issue517Struct"), sizeof(FIssue517Struct), Get_Z_Construct_UScriptStruct_FIssue517Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIssue517Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIssue517Struct_Hash() { return 2088420754U; }
	void AIssue517Actor::StaticRegisterNativesAIssue517Actor()
	{
	}
	UClass* Z_Construct_UClass_AIssue517Actor_NoRegister()
	{
		return AIssue517Actor::StaticClass();
	}
	struct Z_Construct_UClass_AIssue517Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayFromActor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayFromActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayFromActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIssue517Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue517Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIssue517Actor, Struct), Z_Construct_UScriptStruct_FIssue517Struct, METADATA_PARAMS(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_Inner = { "ArrayFromActor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue517Test.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor = { "ArrayFromActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIssue517Actor, ArrayFromActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIssue517Actor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIssue517Actor_Statics::NewProp_ArrayFromActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIssue517Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssue517Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIssue517Actor_Statics::ClassParams = {
		&AIssue517Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIssue517Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue517Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIssue517Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIssue517Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIssue517Actor, 4099089364);
	template<> UNLUATESTSUITE_API UClass* StaticClass<AIssue517Actor>()
	{
		return AIssue517Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIssue517Actor(Z_Construct_UClass_AIssue517Actor, &AIssue517Actor::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("AIssue517Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIssue517Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
