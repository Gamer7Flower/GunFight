// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue500Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue500Test() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue500_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UObjectForIssue500();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
// End Cross Module References
	static FName NAME_UObjectForIssue500_Test = FName(TEXT("Test"));
	FString UObjectForIssue500::Test()
	{
		ObjectForIssue500_eventTest_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UObjectForIssue500_Test),&Parms);
		return Parms.ReturnValue;
	}
	void UObjectForIssue500::StaticRegisterNativesUObjectForIssue500()
	{
	}
	struct Z_Construct_UFunction_UObjectForIssue500_Test_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UObjectForIssue500_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectForIssue500_eventTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectForIssue500_Test_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue500Test.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectForIssue500_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectForIssue500, nullptr, "Test", nullptr, nullptr, sizeof(ObjectForIssue500_eventTest_Parms), Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectForIssue500_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectForIssue500_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectForIssue500_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectForIssue500_NoRegister()
	{
		return UObjectForIssue500::StaticClass();
	}
	struct Z_Construct_UClass_UObjectForIssue500_Statics
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
	UObject* (*const Z_Construct_UClass_UObjectForIssue500_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectForIssue500_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectForIssue500_Test, "Test" }, // 4033277687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/Issue500Test.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue500Test.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectForIssue500_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUnLuaInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectForIssue500, IUnLuaInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectForIssue500_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectForIssue500>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectForIssue500_Statics::ClassParams = {
		&UObjectForIssue500::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectForIssue500_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectForIssue500()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectForIssue500_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectForIssue500, 919823961);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UObjectForIssue500>()
	{
		return UObjectForIssue500::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectForIssue500(Z_Construct_UClass_UObjectForIssue500, &UObjectForIssue500::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UObjectForIssue500"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectForIssue500);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
