// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue554Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue554Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FIssue554Struct();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue554Class_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue554Class();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FIssue554Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FIssue554Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIssue554Struct, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("Issue554Struct"), sizeof(FIssue554Struct), Get_Z_Construct_UScriptStruct_FIssue554Struct_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FIssue554Struct>()
{
	return FIssue554Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIssue554Struct(FIssue554Struct::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("Issue554Struct"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue554Struct
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue554Struct()
	{
		UScriptStruct::DeferCppStructOps<FIssue554Struct>(FName(TEXT("Issue554Struct")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFIssue554Struct;
	struct Z_Construct_UScriptStruct_FIssue554Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIssue554Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue554Struct, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIssue554Struct, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIssue554Struct_Statics::NewProp_Yaw,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIssue554Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"Issue554Struct",
		sizeof(FIssue554Struct),
		alignof(FIssue554Struct),
		Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIssue554Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIssue554Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIssue554Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Issue554Struct"), sizeof(FIssue554Struct), Get_Z_Construct_UScriptStruct_FIssue554Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIssue554Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIssue554Struct_Hash() { return 1507669512U; }
	void UIssue554Class::StaticRegisterNativesUIssue554Class()
	{
	}
	UClass* Z_Construct_UClass_UIssue554Class_NoRegister()
	{
		return UIssue554Class::StaticClass();
	}
	struct Z_Construct_UClass_UIssue554Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue554Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue554Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue554Test.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Struct, UIssue554Class), STRUCT_OFFSET(UIssue554Class, Struct), Z_Construct_UScriptStruct_FIssue554Struct, METADATA_PARAMS(Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIssue554Class_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIssue554Class_Statics::NewProp_Struct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue554Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIssue554Class>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIssue554Class_Statics::ClassParams = {
		&UIssue554Class::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIssue554Class_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue554Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue554Class()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIssue554Class_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIssue554Class, 1522399303);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue554Class>()
	{
		return UIssue554Class::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIssue554Class(Z_Construct_UClass_UIssue554Class, &UIssue554Class::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UIssue554Class"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue554Class);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
