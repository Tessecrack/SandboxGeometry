// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SandboxGeometry/Public/BaseGeometryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGeometryActor() {}
// Cross Module References
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	SANDBOXGEOMETRY_API UClass* Z_Construct_UClass_ABaseGeometryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SandboxGeometry();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABaseGeometryActor::StaticRegisterNativesABaseGeometryActor()
	{
	}
	UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister()
	{
		return ABaseGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SandboxGeometry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGeometryActor.h" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "BaseGeometryActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGeometryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams = {
		&ABaseGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGeometryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseGeometryActor, 1021709899);
	template<> SANDBOXGEOMETRY_API UClass* StaticClass<ABaseGeometryActor>()
	{
		return ABaseGeometryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseGeometryActor(Z_Construct_UClass_ABaseGeometryActor, &ABaseGeometryActor::StaticClass, TEXT("/Script/SandboxGeometry"), TEXT("ABaseGeometryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGeometryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
