// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue556Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue556Test() {}
// Cross Module References
	UNLUATESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FHexHandle();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue556Actor_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_AIssue556Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FHexHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNLUATESTSUITE_API uint32 Get_Z_Construct_UScriptStruct_FHexHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHexHandle, Z_Construct_UPackage__Script_UnLuaTestSuite(), TEXT("HexHandle"), sizeof(FHexHandle), Get_Z_Construct_UScriptStruct_FHexHandle_Hash());
	}
	return Singleton;
}
template<> UNLUATESTSUITE_API UScriptStruct* StaticStruct<FHexHandle>()
{
	return FHexHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHexHandle(FHexHandle::StaticStruct, TEXT("/Script/UnLuaTestSuite"), TEXT("HexHandle"), false, nullptr, nullptr);
static struct FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFHexHandle
{
	FScriptStruct_UnLuaTestSuite_StaticRegisterNativesFHexHandle()
	{
		UScriptStruct::DeferCppStructOps<FHexHandle>(FName(TEXT("HexHandle")));
	}
} ScriptStruct_UnLuaTestSuite_StaticRegisterNativesFHexHandle;
	struct Z_Construct_UScriptStruct_FHexHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHexHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHexHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHexHandle, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexHandle_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHexHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
		nullptr,
		&NewStructOps,
		"HexHandle",
		sizeof(FHexHandle),
		alignof(FHexHandle),
		Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHexHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHexHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaTestSuite();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HexHandle"), sizeof(FHexHandle), Get_Z_Construct_UScriptStruct_FHexHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHexHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHexHandle_Hash() { return 2449763085U; }
	static FName NAME_AIssue556Actor_PlayerViewChanged = FName(TEXT("PlayerViewChanged"));
	void AIssue556Actor::PlayerViewChanged(TArray<FHexHandle> const& AddHexHandles, TArray<FHexHandle> const& RemoveHexHandles)
	{
		Issue556Actor_eventPlayerViewChanged_Parms Parms;
		Parms.AddHexHandles=AddHexHandles;
		Parms.RemoveHexHandles=RemoveHexHandles;
		ProcessEvent(FindFunctionChecked(NAME_AIssue556Actor_PlayerViewChanged),&Parms);
	}
	void AIssue556Actor::StaticRegisterNativesAIssue556Actor()
	{
	}
	struct Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddHexHandles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddHexHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddHexHandles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoveHexHandles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveHexHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveHexHandles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_Inner = { "AddHexHandles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHexHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles = { "AddHexHandles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue556Actor_eventPlayerViewChanged_Parms, AddHexHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_Inner = { "RemoveHexHandles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHexHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles = { "RemoveHexHandles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue556Actor_eventPlayerViewChanged_Parms, RemoveHexHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_AddHexHandles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::NewProp_RemoveHexHandles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIssue556Actor, nullptr, "PlayerViewChanged", nullptr, nullptr, sizeof(Issue556Actor_eventPlayerViewChanged_Parms), Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIssue556Actor_NoRegister()
	{
		return AIssue556Actor::StaticClass();
	}
	struct Z_Construct_UClass_AIssue556Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIssue556Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIssue556Actor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIssue556Actor_PlayerViewChanged, "PlayerViewChanged" }, // 860125808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Issue556Test.h" },
		{ "ModuleRelativePath", "Private/Tests/Issue556Test.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIssue556Actor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(AIssue556Actor, IUnLuaInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIssue556Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIssue556Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIssue556Actor_Statics::ClassParams = {
		&AIssue556Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIssue556Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIssue556Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIssue556Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIssue556Actor, 3882093905);
	template<> UNLUATESTSUITE_API UClass* StaticClass<AIssue556Actor>()
	{
		return AIssue556Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIssue556Actor(Z_Construct_UClass_AIssue556Actor, &AIssue556Actor::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("AIssue556Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIssue556Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
