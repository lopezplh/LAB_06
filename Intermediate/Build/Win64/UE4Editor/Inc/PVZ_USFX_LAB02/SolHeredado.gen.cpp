// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/SolHeredado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolHeredado() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USolHeredado_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USolHeredado();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UMovimientoAleatorio();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void USolHeredado::StaticRegisterNativesUSolHeredado()
	{
	}
	UClass* Z_Construct_UClass_USolHeredado_NoRegister()
	{
		return USolHeredado::StaticClass();
	}
	struct Z_Construct_UClass_USolHeredado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USolHeredado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovimientoAleatorio,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolHeredado_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SolHeredado.h" },
		{ "ModuleRelativePath", "SolHeredado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USolHeredado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USolHeredado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USolHeredado_Statics::ClassParams = {
		&USolHeredado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USolHeredado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USolHeredado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USolHeredado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USolHeredado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USolHeredado, 1857487461);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<USolHeredado>()
	{
		return USolHeredado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USolHeredado(Z_Construct_UClass_USolHeredado, &USolHeredado::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("USolHeredado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USolHeredado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
