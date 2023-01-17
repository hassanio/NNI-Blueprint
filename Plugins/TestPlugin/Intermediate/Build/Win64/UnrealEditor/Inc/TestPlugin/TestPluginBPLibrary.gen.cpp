// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/TestPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPluginBPLibrary() {}
// Cross Module References
	TESTPLUGIN_API UClass* Z_Construct_UClass_UTestPluginBPLibrary_NoRegister();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UTestPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UTestPluginBPLibrary::execReadONNXfile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UTestPluginBPLibrary::ReadONNXfile(Z_Param_SaveDirectory,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestPluginBPLibrary::execLoadFromBytes)
	{
		P_GET_TARRAY(uint8,Z_Param_InModelReadFromFileInBytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Report);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTestPluginBPLibrary::LoadFromBytes(Z_Param_InModelReadFromFileInBytes,Z_Param_Out_Report);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestPluginBPLibrary::execLoadFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Report);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTestPluginBPLibrary::LoadFromFile(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_Out_Report);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestPluginBPLibrary::execTestPluginSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTestPluginBPLibrary::TestPluginSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UTestPluginBPLibrary::StaticRegisterNativesUTestPluginBPLibrary()
	{
		UClass* Class = UTestPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFromBytes", &UTestPluginBPLibrary::execLoadFromBytes },
			{ "LoadFromFile", &UTestPluginBPLibrary::execLoadFromFile },
			{ "ReadONNXfile", &UTestPluginBPLibrary::execReadONNXfile },
			{ "TestPluginSampleFunction", &UTestPluginBPLibrary::execTestPluginSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics
	{
		struct TestPluginBPLibrary_eventLoadFromBytes_Parms
		{
			TArray<uint8> InModelReadFromFileInBytes;
			FString Report;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InModelReadFromFileInBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InModelReadFromFileInBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Report;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::NewProp_InModelReadFromFileInBytes_Inner = { "InModelReadFromFileInBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::NewProp_InModelReadFromFileInBytes = { "InModelReadFromFileInBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventLoadFromBytes_Parms, InModelReadFromFileInBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventLoadFromBytes_Parms, Report), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::NewProp_InModelReadFromFileInBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::NewProp_InModelReadFromFileInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::NewProp_Report,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestPluginTesting" },
		{ "DisplayName", "Execute Load function Bytes" },
		{ "Keywords", "load from bytes" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestPluginBPLibrary, nullptr, "LoadFromBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::TestPluginBPLibrary_eventLoadFromBytes_Parms), Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics
	{
		struct TestPluginBPLibrary_eventLoadFromFile_Parms
		{
			FString SaveDirectory;
			FString FileName;
			FString Report;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Report;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventLoadFromFile_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventLoadFromFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::NewProp_Report = { "Report", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventLoadFromFile_Parms, Report), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::NewProp_SaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::NewProp_Report,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestPluginTesting" },
		{ "DisplayName", "Execute Load function InModelFilePath" },
		{ "Keywords", "load from file" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestPluginBPLibrary, nullptr, "LoadFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::TestPluginBPLibrary_eventLoadFromFile_Parms), Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics
	{
		struct TestPluginBPLibrary_eventReadONNXfile_Parms
		{
			FString SaveDirectory;
			FString FileName;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventReadONNXfile_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventReadONNXfile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventReadONNXfile_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_SaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestPluginTesting" },
		{ "DisplayName", "Execute Read ONNX File" },
		{ "Keywords", "read bytes" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestPluginBPLibrary, nullptr, "ReadONNXfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::TestPluginBPLibrary_eventReadONNXfile_Parms), Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics
	{
		struct TestPluginBPLibrary_eventTestPluginSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventTestPluginSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventTestPluginSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestPluginTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "TestPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestPluginBPLibrary, nullptr, "TestPluginSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::TestPluginBPLibrary_eventTestPluginSampleFunction_Parms), Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestPluginBPLibrary);
	UClass* Z_Construct_UClass_UTestPluginBPLibrary_NoRegister()
	{
		return UTestPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTestPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromBytes, "LoadFromBytes" }, // 1076296880
		{ &Z_Construct_UFunction_UTestPluginBPLibrary_LoadFromFile, "LoadFromFile" }, // 2766706214
		{ &Z_Construct_UFunction_UTestPluginBPLibrary_ReadONNXfile, "ReadONNXfile" }, // 3039025023
		{ &Z_Construct_UFunction_UTestPluginBPLibrary_TestPluginSampleFunction, "TestPluginSampleFunction" }, // 3376310176
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "TestPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestPluginBPLibrary_Statics::ClassParams = {
		&UTestPluginBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UTestPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UTestPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestPluginBPLibrary.OuterSingleton;
	}
	template<> TESTPLUGIN_API UClass* StaticClass<UTestPluginBPLibrary>()
	{
		return UTestPluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestPluginBPLibrary);
	struct Z_CompiledInDeferFile_FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestPluginBPLibrary, UTestPluginBPLibrary::StaticClass, TEXT("UTestPluginBPLibrary"), &Z_Registration_Info_UClass_UTestPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestPluginBPLibrary), 1285878909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_3556107349(TEXT("/Script/TestPlugin"),
		Z_CompiledInDeferFile_FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NNI_Blueprint_Plugins_TestPlugin_Source_TestPlugin_Public_TestPluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
