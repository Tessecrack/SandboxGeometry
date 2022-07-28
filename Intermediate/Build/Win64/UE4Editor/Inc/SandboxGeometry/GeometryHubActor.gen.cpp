// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandboxGeometry/Public/GeometryHubActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryHubActor() {}
// Cross Module References
	SANDBOXGEOMETRY_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayload();
	UPackage* Z_Construct_UPackage__Script_SandboxGeometry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	SANDBOXGEOMETRY_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_AGeometryHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FGeometryPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SANDBOXGEOMETRY_API uint32 Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryPayload, Z_Construct_UPackage__Script_SandboxGeometry(), TEXT("GeometryPayload"), sizeof(FGeometryPayload), Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash());
	}
	return Singleton;
}
template<> SANDBOXGEOMETRY_API UScriptStruct* StaticStruct<FGeometryPayload>()
{
	return FGeometryPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryPayload(FGeometryPayload::StaticStruct, TEXT("/Script/SandboxGeometry"), TEXT("GeometryPayload"), false, nullptr, nullptr);
static struct FScriptStruct_SandboxGeometry_StaticRegisterNativesFGeometryPayload
{
	FScriptStruct_SandboxGeometry_StaticRegisterNativesFGeometryPayload()
	{
		UScriptStruct::DeferCppStructOps<FGeometryPayload>(FName(TEXT("GeometryPayload")));
	}
} ScriptStruct_SandboxGeometry_StaticRegisterNativesFGeometryPayload;
	struct Z_Construct_UScriptStruct_FGeometryPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseGeometryActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_baseGeometryActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_geometryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_geometryData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_baseGeometryActor_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_baseGeometryActor = { "baseGeometryActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, baseGeometryActor), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_baseGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_baseGeometryActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_geometryData_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_geometryData = { "geometryData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, geometryData), Z_Construct_UScriptStruct_FGeometryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_geometryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_geometryData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "GeometryPayload" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryPayload, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_baseGeometryActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_geometryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryPayload_Statics::NewProp_InitialTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SandboxGeometry,
		nullptr,
		&NewStructOps,
		"GeometryPayload",
		sizeof(FGeometryPayload),
		alignof(FGeometryPayload),
		Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SandboxGeometry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryPayload"), sizeof(FGeometryPayload), Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryPayload_Hash() { return 3928022657U; }
	DEFINE_FUNCTION(AGeometryHubActor::execOnColorChanged)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_color);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorChanged(Z_Param_Out_color,Z_Param_name);
		P_NATIVE_END;
	}
	void AGeometryHubActor::StaticRegisterNativesAGeometryHubActor()
	{
		UClass* Class = AGeometryHubActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnColorChanged", &AGeometryHubActor::execOnColorChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics
	{
		struct GeometryHubActor_eventOnColorChanged_Parms
		{
			FLinearColor color;
			FString name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryHubActor_eventOnColorChanged_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryHubActor_eventOnColorChanged_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryHubActor, nullptr, "OnColorChanged", nullptr, nullptr, sizeof(GeometryHubActor_eventOnColorChanged_Parms), Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryHubActor_OnColorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryHubActor_OnColorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister()
	{
		return AGeometryHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseGeometryActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_baseGeometryActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryPayloads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryPayloads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeometryPayloads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SandboxGeometry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryHubActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryHubActor_OnColorChanged, "OnColorChanged" }, // 3631477893
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryHubActor.h" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor = { "baseGeometryActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, baseGeometryActor), Z_Construct_UClass_ABaseGeometryActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_Inner = { "GeometryPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeometryPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_MetaData[] = {
		{ "Category", "GeometryHubActor" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads = { "GeometryPayloads", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, GeometryPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_PropertyActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_PropertyActor = { "PropertyActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryHubActor, PropertyActor), Z_Construct_UClass_ABaseGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_PropertyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_PropertyActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_baseGeometryActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_GeometryPayloads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryHubActor_Statics::NewProp_PropertyActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryHubActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams = {
		&AGeometryHubActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryHubActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryHubActor, 1591031173);
	template<> SANDBOXGEOMETRY_API UClass* StaticClass<AGeometryHubActor>()
	{
		return AGeometryHubActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryHubActor(Z_Construct_UClass_AGeometryHubActor, &AGeometryHubActor::StaticClass, TEXT("/Script/SandboxGeometry"), TEXT("AGeometryHubActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryHubActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
