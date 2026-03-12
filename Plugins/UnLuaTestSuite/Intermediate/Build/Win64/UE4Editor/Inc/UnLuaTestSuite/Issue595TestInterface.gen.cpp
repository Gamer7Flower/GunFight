// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaTestSuite/Private/Tests/Issue595TestInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIssue595TestInterface() {}
// Cross Module References
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface_NoRegister();
	UNLUATESTSUITE_API UClass* Z_Construct_UClass_UIssue595Interface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnLuaTestSuite();
// End Cross Module References
	DEFINE_FUNCTION(IIssue595Interface::execTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Test_Implementation();
		P_NATIVE_END;
	}
	int32 IIssue595Interface::Test() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Test instead.");
		Issue595Interface_eventTest_Parms Parms;
		return Parms.ReturnValue;
	}
	void UIssue595Interface::StaticRegisterNativesUIssue595Interface()
	{
		UClass* Class = UIssue595Interface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Test", &IIssue595Interface::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIssue595Interface_Test_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIssue595Interface_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Issue595Interface_eventTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIssue595Interface_Test_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIssue595Interface_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Issue595TestInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIssue595Interface_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIssue595Interface, nullptr, "Test", nullptr, nullptr, sizeof(Issue595Interface_eventTest_Parms), Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue595Interface_Test_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIssue595Interface_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIssue595Interface_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIssue595Interface_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIssue595Interface_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIssue595Interface_NoRegister()
	{
		return UIssue595Interface::StaticClass();
	}
	struct Z_Construct_UClass_UIssue595Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIssue595Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaTestSuite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIssue595Interface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIssue595Interface_Test, "Test" }, // 211745976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIssue595Interface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Tests/Issue595TestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIssue595Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIssue595Interface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIssue595Interface_Statics::ClassParams = {
		&UIssue595Interface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIssue595Interface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIssue595Interface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIssue595Interface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIssue595Interface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIssue595Interface, 2268597782);
	template<> UNLUATESTSUITE_API UClass* StaticClass<UIssue595Interface>()
	{
		return UIssue595Interface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIssue595Interface(Z_Construct_UClass_UIssue595Interface, &UIssue595Interface::StaticClass, TEXT("/Script/UnLuaTestSuite"), TEXT("UIssue595Interface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIssue595Interface);
	static FName NAME_UIssue595Interface_Test = FName(TEXT("Test"));
	int32 IIssue595Interface::Execute_Test(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIssue595Interface::StaticClass()));
		Issue595Interface_eventTest_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIssue595Interface_Test);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IIssue595Interface*)(O->GetNativeInterfaceAddress(UIssue595Interface::StaticClass())))
		{
			Parms.ReturnValue = I->Test_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
