#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/resources/CompilerProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $CompilerProperties = ::com::sun::tools::javac::resources::CompilerProperties;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $Name = ::com::sun::tools::javac::util::Name;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Path = ::java::nio::file::Path;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$FieldInfo _CompilerProperties$Fragments_FieldInfo_[] = {
	{"AccessorMethodCantThrowException", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, AccessorMethodCantThrowException)},
	{"AccessorMethodMustNotBeGeneric", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, AccessorMethodMustNotBeGeneric)},
	{"AccessorMethodMustNotBeStatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, AccessorMethodMustNotBeStatic)},
	{"Anonymous", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Anonymous)},
	{"ArgLengthMismatch", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ArgLengthMismatch)},
	{"BadClassSignature", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadClassSignature)},
	{"BadConstPoolTag", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadConstPoolTag)},
	{"BadConstPoolTagAt", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadConstPoolTagAt)},
	{"BadEnclosingClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadEnclosingClass)},
	{"BadModuleInfoName", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadModuleInfoName)},
	{"BadRequiresFlag", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadRequiresFlag)},
	{"BadRuntimeInvisibleParamAnnotations", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadRuntimeInvisibleParamAnnotations)},
	{"BadSignature", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadSignature)},
	{"BadTypeAnnotationValue", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BadTypeAnnotationValue)},
	{"BaseMembership", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, BaseMembership)},
	{"Bound", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Bound)},
	{"Canonical", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Canonical)},
	{"CanonicalCantHaveReturnStatement", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, CanonicalCantHaveReturnStatement)},
	{"CanonicalMustNotContainExplicitConstructorInvocation", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, CanonicalMustNotContainExplicitConstructorInvocation)},
	{"CanonicalMustNotDeclareTypeVariables", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, CanonicalMustNotDeclareTypeVariables)},
	{"CanonicalWithNameMismatch", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, CanonicalWithNameMismatch)},
	{"CantResolveModules", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, CantResolveModules)},
	{"ClassFileWrongClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ClassFileWrongClass)},
	{"Compact", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Compact)},
	{"ConditionalTargetCantBeVoid", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ConditionalTargetCantBeVoid)},
	{"DiamondAnonymousMethodsImplicitlyOverride", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, DiamondAnonymousMethodsImplicitlyOverride)},
	{"FatalErrCantClose", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FatalErrCantClose)},
	{"FatalErrNoJavaLang", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FatalErrNoJavaLang)},
	{"FeatureAnnotationsAfterTypeParams", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureAnnotationsAfterTypeParams)},
	{"FeatureCaseNull", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureCaseNull)},
	{"FeatureDefaultMethods", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureDefaultMethods)},
	{"FeatureDiamond", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureDiamond)},
	{"FeatureDiamondAndAnonClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureDiamondAndAnonClass)},
	{"FeatureIntersectionTypesInCast", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureIntersectionTypesInCast)},
	{"FeatureLambda", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureLambda)},
	{"FeatureMethodReferences", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureMethodReferences)},
	{"FeatureModules", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureModules)},
	{"FeatureMultipleCaseLabels", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureMultipleCaseLabels)},
	{"FeaturePatternMatchingInstanceof", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeaturePatternMatchingInstanceof)},
	{"FeaturePatternSwitch", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeaturePatternSwitch)},
	{"FeaturePrivateIntfMethods", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeaturePrivateIntfMethods)},
	{"FeatureRecords", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureRecords)},
	{"FeatureReifiableTypesInstanceof", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureReifiableTypesInstanceof)},
	{"FeatureRepeatableAnnotations", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureRepeatableAnnotations)},
	{"FeatureSealedClasses", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureSealedClasses)},
	{"FeatureStaticIntfMethodInvoke", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureStaticIntfMethodInvoke)},
	{"FeatureStaticIntfMethods", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureStaticIntfMethods)},
	{"FeatureSwitchExpressions", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureSwitchExpressions)},
	{"FeatureSwitchRules", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureSwitchRules)},
	{"FeatureTextBlocks", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureTextBlocks)},
	{"FeatureTypeAnnotations", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureTypeAnnotations)},
	{"FeatureVarInTryWithResources", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureVarInTryWithResources)},
	{"FeatureVarSyntaxInImplicitLambda", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FeatureVarSyntaxInImplicitLambda)},
	{"FileDoesNotContainModule", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, FileDoesNotContainModule)},
	{"Guard", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Guard)},
	{"IllegalStartOfClassFile", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, IllegalStartOfClassFile)},
	{"ImplicitAndExplicitNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ImplicitAndExplicitNotAllowed)},
	{"IncompatibleArgTypesInLambda", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, IncompatibleArgTypesInLambda)},
	{"IncompatibleArgTypesInMref", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, IncompatibleArgTypesInMref)},
	{"InnerCls", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, InnerCls)},
	{"KindnameAnnotation", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameAnnotation)},
	{"KindnameClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameClass)},
	{"KindnameConstructor", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameConstructor)},
	{"KindnameEnum", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameEnum)},
	{"KindnameInstanceInit", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameInstanceInit)},
	{"KindnameInterface", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameInterface)},
	{"KindnameMethod", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameMethod)},
	{"KindnameModule", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameModule)},
	{"KindnamePackage", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnamePackage)},
	{"KindnameRecord", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameRecord)},
	{"KindnameRecordComponent", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameRecordComponent)},
	{"KindnameStatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameStatic)},
	{"KindnameStaticInit", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameStaticInit)},
	{"KindnameTypeVariable", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameTypeVariable)},
	{"KindnameTypeVariableBound", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameTypeVariableBound)},
	{"KindnameValue", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameValue)},
	{"KindnameVariable", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, KindnameVariable)},
	{"Lambda", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Lambda)},
	{"Local", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Local)},
	{"LocalArrayMissingTarget", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalArrayMissingTarget)},
	{"LocalCantInferNull", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalCantInferNull)},
	{"LocalCantInferVoid", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalCantInferVoid)},
	{"LocalLambdaMissingTarget", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalLambdaMissingTarget)},
	{"LocalMissingInit", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalMissingInit)},
	{"LocalMrefMissingTarget", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalMrefMissingTarget)},
	{"LocalSelfRef", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocalSelfRef)},
	{"LocnModule_path", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocnModule_path)},
	{"LocnModule_source_path", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocnModule_source_path)},
	{"LocnSystem_modules", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocnSystem_modules)},
	{"LocnUpgrade_module_path", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, LocnUpgrade_module_path)},
	{"MalformedVarargMethod", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, MalformedVarargMethod)},
	{"MethodMustBePublic", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, MethodMustBePublic)},
	{"ModuleInfoDefinitionExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ModuleInfoDefinitionExpected)},
	{"ModuleInfoInvalidSuperClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ModuleInfoInvalidSuperClass)},
	{"MrefInferAndExplicitParams", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, MrefInferAndExplicitParams)},
	{"MustNotBeSameClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, MustNotBeSameClass)},
	{"NoArgs", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, NoArgs)},
	{"NonStatic", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, NonStatic)},
	{"ResumeAbort", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, ResumeAbort)},
	{"SourceUnavailable", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, SourceUnavailable)},
	{"StatExprExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, StatExprExpected)},
	{"Static", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Static)},
	{"StaticMrefWithTargs", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, StaticMrefWithTargs)},
	{"SwitchExpressionTargetCantBeVoid", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, SwitchExpressionTargetCantBeVoid)},
	{"TokenBadSymbol", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenBadSymbol)},
	{"TokenCharacter", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenCharacter)},
	{"TokenDouble", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenDouble)},
	{"TokenEndOfInput", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenEndOfInput)},
	{"TokenFloat", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenFloat)},
	{"TokenIdentifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenIdentifier)},
	{"TokenInteger", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenInteger)},
	{"TokenLongInteger", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenLongInteger)},
	{"TokenString", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TokenString)},
	{"TypeCaptureof1", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeCaptureof1)},
	{"TypeMustBeIdenticalToCorrespondingRecordComponentType", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeMustBeIdenticalToCorrespondingRecordComponentType)},
	{"TypeNone", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeNone)},
	{"TypeNull", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeNull)},
	{"TypeReqArrayOrIterable", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeReqArrayOrIterable)},
	{"TypeReqClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeReqClass)},
	{"TypeReqClassArray", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeReqClassArray)},
	{"TypeReqExact", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeReqExact)},
	{"TypeReqRef", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, TypeReqRef)},
	{"UnableToAccessFile", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UnableToAccessFile)},
	{"Unbound", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, Unbound)},
	{"UncheckedAssign", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UncheckedAssign)},
	{"UncheckedCastToType", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UncheckedCastToType)},
	{"UndeclTypeVar", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UndeclTypeVar)},
	{"UnexpectedConstPoolTagAt", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UnexpectedConstPoolTagAt)},
	{"UnexpectedRetVal", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UnexpectedRetVal)},
	{"UnicodeStrNotSupported", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UnicodeStrNotSupported)},
	{"UnnamedModule", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UnnamedModule)},
	{"UnnamedPackage", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UnnamedPackage)},
	{"UserSelectedCompletionFailure", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, UserSelectedCompletionFailure)},
	{"VarAndExplicitNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, VarAndExplicitNotAllowed)},
	{"VarAndImplicitNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, VarAndImplicitNotAllowed)},
	{"VersionNotAvailable", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, VersionNotAvailable)},
	{"WhereDescriptionCaptured", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, WhereDescriptionCaptured)},
	{"WrongVersion", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Fragments, WrongVersion)},
	{}
};

$MethodInfo _CompilerProperties$Fragments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompilerProperties$Fragments::*)()>(&CompilerProperties$Fragments::init$))},
	{"AccessorReturnTypeDoesntMatch", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::AccessorReturnTypeDoesntMatch))},
	{"AnachronisticModuleInfo", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*,$String*)>(&CompilerProperties$Fragments::AnachronisticModuleInfo))},
	{"AnonymousClass", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::AnonymousClass))},
	{"ApplicableMethodFound", "(ILcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$Symbol*,$Void*)>(&CompilerProperties$Fragments::ApplicableMethodFound))},
	{"ApplicableMethodFound1", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::ApplicableMethodFound1))},
	{"ApplicableMethodFound1", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::ApplicableMethodFound1))},
	{"ApplicableMethodFound2", "(ILcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$JCDiagnostic$Fragment*,$Symbol*)>(&CompilerProperties$Fragments::ApplicableMethodFound2))},
	{"ApplicableMethodFound3", "(ILcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$JCDiagnostic$Fragment*,$Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::ApplicableMethodFound3))},
	{"ApplicableMethodFound3", "(ILcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$JCDiagnostic$Fragment*,$Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::ApplicableMethodFound3))},
	{"BadClassFile", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::BadClassFile))},
	{"BadClassFileHeader", "(Ljava/io/File;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*,$JCDiagnostic*)>(&CompilerProperties$Fragments::BadClassFileHeader))},
	{"BadClassFileHeader", "(Ljava/io/File;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadClassFileHeader))},
	{"BadClassFileHeader", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*,$JCDiagnostic*)>(&CompilerProperties$Fragments::BadClassFileHeader))},
	{"BadClassFileHeader", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadClassFileHeader))},
	{"BadClassFileHeader", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*,$JCDiagnostic*)>(&CompilerProperties$Fragments::BadClassFileHeader))},
	{"BadClassFileHeader", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadClassFileHeader))},
	{"BadConstPoolEntry", "(Ljava/io/File;Ljava/lang/String;I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*,$String*,int32_t)>(&CompilerProperties$Fragments::BadConstPoolEntry))},
	{"BadConstPoolEntry", "(Ljavax/tools/JavaFileObject;Ljava/lang/String;I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*,$String*,int32_t)>(&CompilerProperties$Fragments::BadConstPoolEntry))},
	{"BadConstPoolEntry", "(Ljava/nio/file/Path;Ljava/lang/String;I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*,$String*,int32_t)>(&CompilerProperties$Fragments::BadConstPoolEntry))},
	{"BadConstPoolIndex", "(Ljava/io/File;II)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*,int32_t,int32_t)>(&CompilerProperties$Fragments::BadConstPoolIndex))},
	{"BadConstPoolIndex", "(Ljavax/tools/JavaFileObject;II)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*,int32_t,int32_t)>(&CompilerProperties$Fragments::BadConstPoolIndex))},
	{"BadConstPoolIndex", "(Ljava/nio/file/Path;II)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*,int32_t,int32_t)>(&CompilerProperties$Fragments::BadConstPoolIndex))},
	{"BadConstantRange", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*,$Symbol*,$Type*)>(&CompilerProperties$Fragments::BadConstantRange))},
	{"BadConstantValue", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*,$Symbol*,$String*)>(&CompilerProperties$Fragments::BadConstantValue))},
	{"BadConstantValueType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::BadConstantValueType))},
	{"BadEnclosingMethod", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::BadEnclosingMethod))},
	{"BadInstanceMethodInUnboundLookup", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Symbol*)>(&CompilerProperties$Fragments::BadInstanceMethodInUnboundLookup))},
	{"BadIntersectionTargetForFunctionalExpr", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::BadIntersectionTargetForFunctionalExpr))},
	{"BadIntersectionTargetForFunctionalExpr", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadIntersectionTargetForFunctionalExpr))},
	{"BadSourceFileHeader", "(Ljava/io/File;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*,$JCDiagnostic*)>(&CompilerProperties$Fragments::BadSourceFileHeader))},
	{"BadSourceFileHeader", "(Ljava/io/File;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadSourceFileHeader))},
	{"BadSourceFileHeader", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*,$JCDiagnostic*)>(&CompilerProperties$Fragments::BadSourceFileHeader))},
	{"BadSourceFileHeader", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadSourceFileHeader))},
	{"BadSourceFileHeader", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*,$JCDiagnostic*)>(&CompilerProperties$Fragments::BadSourceFileHeader))},
	{"BadSourceFileHeader", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::BadSourceFileHeader))},
	{"BadStaticMethodInBoundLookup", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Symbol*)>(&CompilerProperties$Fragments::BadStaticMethodInBoundLookup))},
	{"BadStaticMethodInUnboundLookup", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Symbol*)>(&CompilerProperties$Fragments::BadStaticMethodInUnboundLookup))},
	{"CanonicalMustNotHaveStrongerAccess", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Set*)>(&CompilerProperties$Fragments::CanonicalMustNotHaveStrongerAccess))},
	{"CanonicalMustNotHaveStrongerAccess", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::CanonicalMustNotHaveStrongerAccess))},
	{"CantAccessInnerClsConstr", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/List;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$List*,$Type*)>(&CompilerProperties$Fragments::CantAccessInnerClsConstr))},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplyDiamond1))},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplyDiamond1))},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplyDiamond1))},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplyDiamond1))},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplyDiamond1))},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplyDiamond1))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*,$List*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*,$List*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*,$JCDiagnostic*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*,$JCDiagnostic*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*,$JCDiagnostic$Fragment*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*,$JCDiagnostic$Fragment*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic*,$List*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic*,$List*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic*,$JCDiagnostic*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic*,$JCDiagnostic*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic*,$JCDiagnostic$Fragment*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic*,$JCDiagnostic$Fragment*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic$Fragment*,$List*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic$Fragment*,$List*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic$Fragment*,$JCDiagnostic*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic$Fragment*,$JCDiagnostic*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic$Fragment*,$JCDiagnostic$Fragment*,$Kinds$Kind*,$Type*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$JCDiagnostic$Fragment*,$JCDiagnostic$Fragment*,$Kinds$Kind*,$Type*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantApplySymbol))},
	{"CantApplySymbols", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$Kind*,$Name*,$List*)>(&CompilerProperties$Fragments::CantApplySymbols))},
	{"CantHide", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::CantHide))},
	{"CantImplement", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::CantImplement))},
	{"CantOverride", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::CantOverride))},
	{"CantResolveArgs", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Name*,$Void*,$List*)>(&CompilerProperties$Fragments::CantResolveArgs))},
	{"CantResolveLocationArgs", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Name*,$Void*,$List*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantResolveLocationArgs))},
	{"CantResolveLocationArgs", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Name*,$Void*,$List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantResolveLocationArgs))},
	{"CantResolveLocationArgsParams", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Name*,$List*,$List*,$JCDiagnostic*)>(&CompilerProperties$Fragments::CantResolveLocationArgsParams))},
	{"CantResolveLocationArgsParams", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Name*,$List*,$List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::CantResolveLocationArgsParams))},
	{"CapturedType", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t)>(&CompilerProperties$Fragments::CapturedType))},
	{"ClashesWith", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::ClashesWith))},
	{"ClassFileNotFound", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::ClassFileNotFound))},
	{"ClassIsNotSealed", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::ClassIsNotSealed))},
	{"CountError", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t)>(&CompilerProperties$Fragments::CountError))},
	{"CountErrorPlural", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t)>(&CompilerProperties$Fragments::CountErrorPlural))},
	{"CountErrorRecompile", "(II)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,int32_t)>(&CompilerProperties$Fragments::CountErrorRecompile))},
	{"CountWarn", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t)>(&CompilerProperties$Fragments::CountWarn))},
	{"CountWarnPlural", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t)>(&CompilerProperties$Fragments::CountWarnPlural))},
	{"CountWarnRecompile", "(II)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,int32_t)>(&CompilerProperties$Fragments::CountWarnRecompile))},
	{"Descriptor", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,$List*,$Type*,$List*)>(&CompilerProperties$Fragments::Descriptor))},
	{"DescriptorThrows", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,$List*,$Type*,$List*)>(&CompilerProperties$Fragments::DescriptorThrows))},
	{"Diamond", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::Diamond))},
	{"DiamondAndExplicitParams", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::DiamondAndExplicitParams))},
	{"DiamondInvalidArg", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic*)>(&CompilerProperties$Fragments::DiamondInvalidArg))},
	{"DiamondInvalidArg", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::DiamondInvalidArg))},
	{"DiamondInvalidArgs", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic*)>(&CompilerProperties$Fragments::DiamondInvalidArgs))},
	{"DiamondInvalidArgs", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::DiamondInvalidArgs))},
	{"DiamondNonGeneric", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::DiamondNonGeneric))},
	{"DoesntExtendSealed", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::DoesntExtendSealed))},
	{"EqBounds", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*)>(&CompilerProperties$Fragments::EqBounds))},
	{"ExceptionMessage", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::ExceptionMessage))},
	{"ExplicitParamDoNotConformToBounds", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::ExplicitParamDoNotConformToBounds))},
	{"FatalErrCantLocateCtor", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::FatalErrCantLocateCtor))},
	{"FatalErrCantLocateField", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::FatalErrCantLocateField))},
	{"FatalErrCantLocateMeth", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::FatalErrCantLocateMeth))},
	{"FeatureNotSupportedInSource", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*,$String*,$String*)>(&CompilerProperties$Fragments::FeatureNotSupportedInSource))},
	{"FeatureNotSupportedInSource", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*,$String*,$String*)>(&CompilerProperties$Fragments::FeatureNotSupportedInSource))},
	{"FeatureNotSupportedInSourcePlural", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*,$String*,$String*)>(&CompilerProperties$Fragments::FeatureNotSupportedInSourcePlural))},
	{"FeatureNotSupportedInSourcePlural", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*,$String*,$String*)>(&CompilerProperties$Fragments::FeatureNotSupportedInSourcePlural))},
	{"FileDoesNotContainPackage", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::FileDoesNotContainPackage))},
	{"FileDoesntContainClass", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::FileDoesntContainClass))},
	{"IllegalSignature", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Type*)>(&CompilerProperties$Fragments::IllegalSignature))},
	{"InaccessibleVarargsType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$Kinds$Kind*,$Symbol*)>(&CompilerProperties$Fragments::InaccessibleVarargsType))},
	{"InapplicableMethod", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*,$Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::InapplicableMethod))},
	{"InapplicableMethod", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*,$Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::InapplicableMethod))},
	{"IncompatibleAbstractDefault", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Type*,$Name*,$List*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::IncompatibleAbstractDefault))},
	{"IncompatibleAbstracts", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*)>(&CompilerProperties$Fragments::IncompatibleAbstracts))},
	{"IncompatibleBounds", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$JCDiagnostic$Fragment*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::IncompatibleBounds))},
	{"IncompatibleDescsInFunctionalIntf", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*)>(&CompilerProperties$Fragments::IncompatibleDescsInFunctionalIntf))},
	{"IncompatibleDiffRet", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,$List*)>(&CompilerProperties$Fragments::IncompatibleDiffRet))},
	{"IncompatibleEqBounds", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::IncompatibleEqBounds))},
	{"IncompatibleRetTypeInLambda", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::IncompatibleRetTypeInLambda))},
	{"IncompatibleRetTypeInLambda", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::IncompatibleRetTypeInLambda))},
	{"IncompatibleRetTypeInMref", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::IncompatibleRetTypeInMref))},
	{"IncompatibleRetTypeInMref", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::IncompatibleRetTypeInMref))},
	{"IncompatibleTypeInConditional", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::IncompatibleTypeInConditional))},
	{"IncompatibleTypeInConditional", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::IncompatibleTypeInConditional))},
	{"IncompatibleTypeInSwitchExpression", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::IncompatibleTypeInSwitchExpression))},
	{"IncompatibleTypeInSwitchExpression", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::IncompatibleTypeInSwitchExpression))},
	{"IncompatibleUnrelatedDefaults", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Type*,$Name*,$List*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::IncompatibleUnrelatedDefaults))},
	{"IncompatibleUpperBounds", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::IncompatibleUpperBounds))},
	{"InconvertibleTypes", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$Type*)>(&CompilerProperties$Fragments::InconvertibleTypes))},
	{"InferArgLengthMismatch", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*)>(&CompilerProperties$Fragments::InferArgLengthMismatch))},
	{"InferNoConformingAssignmentExists", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic*)>(&CompilerProperties$Fragments::InferNoConformingAssignmentExists))},
	{"InferNoConformingAssignmentExists", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::InferNoConformingAssignmentExists))},
	{"InferNoConformingInstanceExists", "(Ljava/util/List;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$Type*,$Type*)>(&CompilerProperties$Fragments::InferNoConformingInstanceExists))},
	{"InferVarargsArgumentMismatch", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic*)>(&CompilerProperties$Fragments::InferVarargsArgumentMismatch))},
	{"InferVarargsArgumentMismatch", "(Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::InferVarargsArgumentMismatch))},
	{"InferredDoNotConformToEqBounds", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::InferredDoNotConformToEqBounds))},
	{"InferredDoNotConformToLowerBounds", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::InferredDoNotConformToLowerBounds))},
	{"InferredDoNotConformToUpperBounds", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::InferredDoNotConformToUpperBounds))},
	{"IntersectionType", "(I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t)>(&CompilerProperties$Fragments::IntersectionType))},
	{"InvalidDefaultInterface", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*,$String*)>(&CompilerProperties$Fragments::InvalidDefaultInterface))},
	{"InvalidGenericLambdaTarget", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$Kinds$KindName*,$Symbol*)>(&CompilerProperties$Fragments::InvalidGenericLambdaTarget))},
	{"InvalidMref", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$JCDiagnostic*)>(&CompilerProperties$Fragments::InvalidMref))},
	{"InvalidMref", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::InvalidMref))},
	{"InvalidStaticInterface", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*,$String*)>(&CompilerProperties$Fragments::InvalidStaticInterface))},
	{"IsATypeVariable", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::IsATypeVariable))},
	{"IsDuplicated", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::IsDuplicated))},
	{"Location", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Type*,$Void*)>(&CompilerProperties$Fragments::Location))},
	{"Location", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*,$Void*)>(&CompilerProperties$Fragments::Location))},
	{"Location1", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*,$Type*)>(&CompilerProperties$Fragments::Location1))},
	{"LowerBounds", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*)>(&CompilerProperties$Fragments::LowerBounds))},
	{"MethodDescriptorInvalid", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::MethodDescriptorInvalid))},
	{"MissingRetVal", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::MissingRetVal))},
	{"ModuleNameMismatch", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,$Name*)>(&CompilerProperties$Fragments::ModuleNameMismatch))},
	{"ModuleNonZeroOpens", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*)>(&CompilerProperties$Fragments::ModuleNonZeroOpens))},
	{"MustNotBeSupertype", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::MustNotBeSupertype))},
	{"NoAbstracts", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Kinds$KindName*,$Symbol*)>(&CompilerProperties$Fragments::NoAbstracts))},
	{"NoConformingAssignmentExists", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::NoConformingAssignmentExists))},
	{"NoConformingAssignmentExists", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::NoConformingAssignmentExists))},
	{"NoSuitableFunctionalIntfInst", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::NoSuitableFunctionalIntfInst))},
	{"NoUniqueMaximalInstanceExists", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::NoUniqueMaximalInstanceExists))},
	{"NoUniqueMinimalInstanceExists", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::NoUniqueMinimalInstanceExists))},
	{"NotAFunctionalIntf", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::NotAFunctionalIntf))},
	{"NotAFunctionalIntf1", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::NotAFunctionalIntf1))},
	{"NotAFunctionalIntf1", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::NotAFunctionalIntf1))},
	{"NotAnIntfComponent", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::NotAnIntfComponent))},
	{"NotAnIntfComponent", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::NotAnIntfComponent))},
	{"NotApplicableMethodFound", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::NotApplicableMethodFound))},
	{"NotApplicableMethodFound", "(ILcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::NotApplicableMethodFound))},
	{"NotDefAccessClassIntfCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessClassIntfCantAccess))},
	{"NotDefAccessClassIntfCantAccessReason", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::NotDefAccessClassIntfCantAccessReason))},
	{"NotDefAccessClassIntfCantAccessReason", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::NotDefAccessClassIntfCantAccessReason))},
	{"NotDefAccessDoesNotRead", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessDoesNotRead))},
	{"NotDefAccessDoesNotReadFromUnnamed", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessDoesNotReadFromUnnamed))},
	{"NotDefAccessDoesNotReadUnnamed", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessDoesNotReadUnnamed))},
	{"NotDefAccessNotExported", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessNotExported))},
	{"NotDefAccessNotExportedFromUnnamed", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessNotExportedFromUnnamed))},
	{"NotDefAccessNotExportedToModule", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessNotExportedToModule))},
	{"NotDefAccessNotExportedToModuleFromUnnamed", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefAccessNotExportedToModuleFromUnnamed))},
	{"NotDefAccessPackageCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::NotDefAccessPackageCantAccess))},
	{"NotDefAccessPackageCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::NotDefAccessPackageCantAccess))},
	{"NotDefPublicCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::NotDefPublicCantAccess))},
	{"OverriddenDefault", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Type*)>(&CompilerProperties$Fragments::OverriddenDefault))},
	{"PackageNotVisible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$JCDiagnostic*)>(&CompilerProperties$Fragments::PackageNotVisible))},
	{"PackageNotVisible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::PackageNotVisible))},
	{"PartialInstSig", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::PartialInstSig))},
	{"PossibleLossOfPrecision", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$Type*)>(&CompilerProperties$Fragments::PossibleLossOfPrecision))},
	{"ProbFoundReq", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::ProbFoundReq))},
	{"ProbFoundReq", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::ProbFoundReq))},
	{"RedundantSupertype", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Type*)>(&CompilerProperties$Fragments::RedundantSupertype))},
	{"RedundantSupertype", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::RedundantSupertype))},
	{"RefAmbiguous", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,$Kinds$Kind*,$Symbol*,$Symbol*,$Kinds$Kind*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::RefAmbiguous))},
	{"ReportAccess", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Set;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Set<+Ljavax/lang/model/element/Modifier;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Set*,$Symbol*)>(&CompilerProperties$Fragments::ReportAccess))},
	{"SyntheticNameConflict", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*)>(&CompilerProperties$Fragments::SyntheticNameConflict))},
	{"ThrowsClauseNotAllowedForCanonicalConstructor", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::ThrowsClauseNotAllowedForCanonicalConstructor))},
	{"TryNotApplicableToType", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::TryNotApplicableToType))},
	{"TryNotApplicableToType", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::TryNotApplicableToType))},
	{"TypeCaptureof", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,$Type*)>(&CompilerProperties$Fragments::TypeCaptureof))},
	{"TypeParameter", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::TypeParameter))},
	{"TypeVar", "(Lcom/sun/tools/javac/util/Name;I)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Name*,int32_t)>(&CompilerProperties$Fragments::TypeVar))},
	{"UncheckedClashWith", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::UncheckedClashWith))},
	{"UncheckedImplement", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::UncheckedImplement))},
	{"UncheckedOverride", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::UncheckedOverride))},
	{"UpperBounds", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($List*)>(&CompilerProperties$Fragments::UpperBounds))},
	{"VarargsArgumentMismatch", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic*)>(&CompilerProperties$Fragments::VarargsArgumentMismatch))},
	{"VarargsArgumentMismatch", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JCDiagnostic$Fragment*)>(&CompilerProperties$Fragments::VarargsArgumentMismatch))},
	{"VarargsClashWith", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::VarargsClashWith))},
	{"VarargsImplement", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::VarargsImplement))},
	{"VarargsOverride", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*,$Symbol*,$Symbol*,$Symbol*)>(&CompilerProperties$Fragments::VarargsOverride))},
	{"VarargsTrustmeOnNonVarargsAccessor", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsAccessor))},
	{"VarargsTrustmeOnNonVarargsMeth", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsMeth))},
	{"VarargsTrustmeOnReifiableVarargs", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*)>(&CompilerProperties$Fragments::VarargsTrustmeOnReifiableVarargs))},
	{"VarargsTrustmeOnVirtualVarargs", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargs))},
	{"VarargsTrustmeOnVirtualVarargsFinalOnly", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargsFinalOnly))},
	{"VerboseCheckingAttribution", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Symbol*)>(&CompilerProperties$Fragments::VerboseCheckingAttribution))},
	{"VerboseClasspath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::VerboseClasspath))},
	{"VerboseLoading", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::VerboseLoading))},
	{"VerboseParsingDone", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::VerboseParsingDone))},
	{"VerboseParsingStarted", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*)>(&CompilerProperties$Fragments::VerboseParsingStarted))},
	{"VerboseParsingStarted", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*)>(&CompilerProperties$Fragments::VerboseParsingStarted))},
	{"VerboseParsingStarted", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*)>(&CompilerProperties$Fragments::VerboseParsingStarted))},
	{"VerboseSourcepath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::VerboseSourcepath))},
	{"VerboseTotal", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::VerboseTotal))},
	{"VerboseWroteFile", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($File*)>(&CompilerProperties$Fragments::VerboseWroteFile))},
	{"VerboseWroteFile", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($JavaFileObject*)>(&CompilerProperties$Fragments::VerboseWroteFile))},
	{"VerboseWroteFile", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Path*)>(&CompilerProperties$Fragments::VerboseWroteFile))},
	{"WhereCaptured", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$Type*,$Type*,$Type*)>(&CompilerProperties$Fragments::WhereCaptured))},
	{"WhereCaptured1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$Type*,$Void*,$Type*)>(&CompilerProperties$Fragments::WhereCaptured1))},
	{"WhereDescriptionCaptured1", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Set*)>(&CompilerProperties$Fragments::WhereDescriptionCaptured1))},
	{"WhereDescriptionIntersection", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Set*)>(&CompilerProperties$Fragments::WhereDescriptionIntersection))},
	{"WhereDescriptionIntersection1", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Set*)>(&CompilerProperties$Fragments::WhereDescriptionIntersection1))},
	{"WhereDescriptionTypevar", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Set*)>(&CompilerProperties$Fragments::WhereDescriptionTypevar))},
	{"WhereDescriptionTypevar1", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Set*)>(&CompilerProperties$Fragments::WhereDescriptionTypevar1))},
	{"WhereFreshTypevar", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::WhereFreshTypevar))},
	{"WhereIntersection", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*)>(&CompilerProperties$Fragments::WhereIntersection))},
	{"WhereTypevar", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*,$Kinds$Kind*,$Symbol*)>(&CompilerProperties$Fragments::WhereTypevar))},
	{"WhereTypevar1", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($Type*,$List*,$Kinds$Kind*,$Symbol*)>(&CompilerProperties$Fragments::WhereTypevar1))},
	{"WrongNumberTypeArgs", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*)>(&CompilerProperties$Fragments::WrongNumberTypeArgs))},
	{"XPrintProcessorInfo", "(Ljava/lang/String;Ljava/lang/String;Z)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)($String*,$String*,bool)>(&CompilerProperties$Fragments::XPrintProcessorInfo))},
	{"XPrintRounds", "(ILjava/lang/String;Ljava/util/Set;Z)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", "(ILjava/lang/String;Ljava/util/Set<+Lcom/sun/tools/javac/code/Symbol;>;Z)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Fragment*(*)(int32_t,$String*,$Set*,bool)>(&CompilerProperties$Fragments::XPrintRounds))},
	{}
};

$InnerClassInfo _CompilerProperties$Fragments_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.CompilerProperties$Fragments", "com.sun.tools.javac.resources.CompilerProperties", "Fragments", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompilerProperties$Fragments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.CompilerProperties$Fragments",
	"java.lang.Object",
	nullptr,
	_CompilerProperties$Fragments_FieldInfo_,
	_CompilerProperties$Fragments_MethodInfo_,
	nullptr,
	nullptr,
	_CompilerProperties$Fragments_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.CompilerProperties"
};

$Object* allocate$CompilerProperties$Fragments($Class* clazz) {
	return $of($alloc(CompilerProperties$Fragments));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::AccessorMethodCantThrowException = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::AccessorMethodMustNotBeGeneric = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::AccessorMethodMustNotBeStatic = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Anonymous = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ArgLengthMismatch = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassSignature = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolTag = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolTagAt = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadEnclosingClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadModuleInfoName = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadRequiresFlag = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadRuntimeInvisibleParamAnnotations = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSignature = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadTypeAnnotationValue = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::BaseMembership = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Bound = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Canonical = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::CanonicalCantHaveReturnStatement = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::CanonicalMustNotContainExplicitConstructorInvocation = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::CanonicalMustNotDeclareTypeVariables = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::CanonicalWithNameMismatch = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantResolveModules = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ClassFileWrongClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Compact = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ConditionalTargetCantBeVoid = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondAnonymousMethodsImplicitlyOverride = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FatalErrCantClose = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FatalErrNoJavaLang = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureAnnotationsAfterTypeParams = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureCaseNull = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureDefaultMethods = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureDiamond = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureDiamondAndAnonClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureIntersectionTypesInCast = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureLambda = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureMethodReferences = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureModules = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureMultipleCaseLabels = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeaturePatternMatchingInstanceof = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeaturePatternSwitch = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeaturePrivateIntfMethods = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureRecords = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureReifiableTypesInstanceof = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureRepeatableAnnotations = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureSealedClasses = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureStaticIntfMethodInvoke = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureStaticIntfMethods = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureSwitchExpressions = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureSwitchRules = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureTextBlocks = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureTypeAnnotations = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureVarInTryWithResources = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureVarSyntaxInImplicitLambda = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::FileDoesNotContainModule = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Guard = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::IllegalStartOfClassFile = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ImplicitAndExplicitNotAllowed = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleArgTypesInLambda = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleArgTypesInMref = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::InnerCls = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameAnnotation = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameConstructor = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameEnum = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameInstanceInit = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameInterface = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameMethod = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameModule = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnamePackage = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameRecord = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameRecordComponent = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameStatic = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameStaticInit = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameTypeVariable = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameTypeVariableBound = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameValue = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::KindnameVariable = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Lambda = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Local = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalArrayMissingTarget = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalCantInferNull = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalCantInferVoid = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalLambdaMissingTarget = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalMissingInit = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalMrefMissingTarget = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocalSelfRef = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocnModule_path = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocnModule_source_path = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocnSystem_modules = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::LocnUpgrade_module_path = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::MalformedVarargMethod = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::MethodMustBePublic = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ModuleInfoDefinitionExpected = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ModuleInfoInvalidSuperClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::MrefInferAndExplicitParams = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::MustNotBeSameClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoArgs = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::NonStatic = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::ResumeAbort = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::SourceUnavailable = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::StatExprExpected = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Static = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::StaticMrefWithTargs = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::SwitchExpressionTargetCantBeVoid = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenBadSymbol = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenCharacter = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenDouble = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenEndOfInput = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenFloat = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenIdentifier = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenInteger = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenLongInteger = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TokenString = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeCaptureof1 = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeMustBeIdenticalToCorrespondingRecordComponentType = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeNone = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeNull = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeReqArrayOrIterable = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeReqClass = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeReqClassArray = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeReqExact = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeReqRef = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UnableToAccessFile = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::Unbound = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UncheckedAssign = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UncheckedCastToType = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UndeclTypeVar = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UnexpectedConstPoolTagAt = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UnexpectedRetVal = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UnicodeStrNotSupported = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UnnamedModule = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UnnamedPackage = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::UserSelectedCompletionFailure = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarAndExplicitNotAllowed = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarAndImplicitNotAllowed = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::VersionNotAvailable = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereDescriptionCaptured = nullptr;
$JCDiagnostic$Fragment* CompilerProperties$Fragments::WrongVersion = nullptr;

void CompilerProperties$Fragments::init$() {
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::AccessorReturnTypeDoesntMatch($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "accessor.return.type.doesnt.match"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::AnachronisticModuleInfo($String* arg0, $String* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "anachronistic.module.info"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::AnonymousClass($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "anonymous.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ApplicableMethodFound(int32_t arg0, $Symbol* arg1, $Void* arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "applicable.method.found"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ApplicableMethodFound1(int32_t arg0, $Symbol* arg1, $JCDiagnostic* arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "applicable.method.found.1"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ApplicableMethodFound1(int32_t arg0, $Symbol* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "applicable.method.found.1"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ApplicableMethodFound2(int32_t arg0, $JCDiagnostic$Fragment* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "applicable.method.found.2"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ApplicableMethodFound3(int32_t arg0, $JCDiagnostic$Fragment* arg1, $Symbol* arg2, $JCDiagnostic* arg3) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "applicable.method.found.3"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ApplicableMethodFound3(int32_t arg0, $JCDiagnostic$Fragment* arg1, $Symbol* arg2, $JCDiagnostic$Fragment* arg3) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "applicable.method.found.3"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFile($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFileHeader($File* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFileHeader($File* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFileHeader($JavaFileObject* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFileHeader($JavaFileObject* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFileHeader($Path* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadClassFileHeader($Path* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolEntry($File* arg0, $String* arg1, int32_t arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.entry"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolEntry($JavaFileObject* arg0, $String* arg1, int32_t arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.entry"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolEntry($Path* arg0, $String* arg1, int32_t arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.entry"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolIndex($File* arg0, int32_t arg1, int32_t arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.index"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolIndex($JavaFileObject* arg0, int32_t arg1, int32_t arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.index"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstPoolIndex($Path* arg0, int32_t arg1, int32_t arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.index"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1))),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstantRange($String* arg0, $Symbol* arg1, $Type* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.constant.range"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstantValue($String* arg0, $Symbol* arg1, $String* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.constant.value"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadConstantValueType($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.constant.value.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadEnclosingMethod($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.enclosing.method"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadInstanceMethodInUnboundLookup($Kinds$Kind* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.instance.method.in.unbound.lookup"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadIntersectionTargetForFunctionalExpr($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.intersection.target.for.functional.expr"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadIntersectionTargetForFunctionalExpr($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.intersection.target.for.functional.expr"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSourceFileHeader($File* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.source.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSourceFileHeader($File* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.source.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSourceFileHeader($JavaFileObject* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.source.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSourceFileHeader($JavaFileObject* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.source.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSourceFileHeader($Path* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.source.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadSourceFileHeader($Path* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.source.file.header"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadStaticMethodInBoundLookup($Kinds$Kind* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.static.method.in.bound.lookup"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::BadStaticMethodInUnboundLookup($Kinds$Kind* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "bad.static.method.in.unbound.lookup"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CanonicalMustNotHaveStrongerAccess($Set* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "canonical.must.not.have.stronger.access"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CanonicalMustNotHaveStrongerAccess($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "canonical.must.not.have.stronger.access"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantAccessInnerClsConstr($Symbol* arg0, $List* arg1, $Type* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.access.inner.cls.constr"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplyDiamond1($JCDiagnostic* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplyDiamond1($JCDiagnostic* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplyDiamond1($JCDiagnostic$Fragment* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplyDiamond1($JCDiagnostic$Fragment* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplyDiamond1($Type* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplyDiamond1($Type* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantApplySymbols($Kinds$Kind* arg0, $Name* arg1, $List* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.apply.symbols"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantHide($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.hide"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantImplement($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.implement"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantOverride($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.override"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantResolveArgs($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $List* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.resolve.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantResolveLocationArgs($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $List* arg3, $JCDiagnostic* arg4) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.resolve.location.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantResolveLocationArgs($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $List* arg3, $JCDiagnostic$Fragment* arg4) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.resolve.location.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantResolveLocationArgsParams($Kinds$KindName* arg0, $Name* arg1, $List* arg2, $List* arg3, $JCDiagnostic* arg4) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.resolve.location.args.params"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CantResolveLocationArgsParams($Kinds$KindName* arg0, $Name* arg1, $List* arg2, $List* arg3, $JCDiagnostic$Fragment* arg4) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "cant.resolve.location.args.params"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CapturedType(int32_t arg0) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "captured.type"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ClashesWith($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "clashes.with"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ClassFileNotFound($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "class.file.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ClassIsNotSealed($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "class.is.not.sealed"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CountError(int32_t arg0) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "count.error"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CountErrorPlural(int32_t arg0) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "count.error.plural"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CountErrorRecompile(int32_t arg0, int32_t arg1) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "count.error.recompile"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$($of($Integer::valueOf(arg1)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CountWarn(int32_t arg0) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "count.warn"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CountWarnPlural(int32_t arg0) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "count.warn.plural"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::CountWarnRecompile(int32_t arg0, int32_t arg1) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "count.warn.recompile"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$($of($Integer::valueOf(arg1)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::Descriptor($Name* arg0, $List* arg1, $Type* arg2, $List* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "descriptor"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DescriptorThrows($Name* arg0, $List* arg1, $Type* arg2, $List* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "descriptor.throws"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::Diamond($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondAndExplicitParams($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.and.explicit.params"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondInvalidArg($List* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.invalid.arg"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondInvalidArg($List* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.invalid.arg"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondInvalidArgs($List* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.invalid.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondInvalidArgs($List* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.invalid.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DiamondNonGeneric($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.non.generic"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::DoesntExtendSealed($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "doesnt.extend.sealed"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::EqBounds($List* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "eq.bounds"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ExceptionMessage($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "exception.message"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ExplicitParamDoNotConformToBounds($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "explicit.param.do.not.conform.to.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FatalErrCantLocateCtor($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "fatal.err.cant.locate.ctor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FatalErrCantLocateField($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "fatal.err.cant.locate.field"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FatalErrCantLocateMeth($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "fatal.err.cant.locate.meth"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureNotSupportedInSource($JCDiagnostic* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "feature.not.supported.in.source"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureNotSupportedInSource($JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "feature.not.supported.in.source"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureNotSupportedInSourcePlural($JCDiagnostic* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "feature.not.supported.in.source.plural"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FeatureNotSupportedInSourcePlural($JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "feature.not.supported.in.source.plural"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FileDoesNotContainPackage($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "file.does.not.contain.package"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::FileDoesntContainClass($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "file.doesnt.contain.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IllegalSignature($Symbol* arg0, $Type* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "illegal.signature"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InaccessibleVarargsType($Type* arg0, $Kinds$Kind* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inaccessible.varargs.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InapplicableMethod($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2, $JCDiagnostic* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inapplicable.method"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InapplicableMethod($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2, $JCDiagnostic$Fragment* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inapplicable.method"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleAbstractDefault($Kinds$KindName* arg0, $Type* arg1, $Name* arg2, $List* arg3, $Symbol* arg4, $Symbol* arg5) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.abstract.default"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleAbstracts($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.abstracts"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleBounds($Type* arg0, $JCDiagnostic$Fragment* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleDescsInFunctionalIntf($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.descs.in.functional.intf"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleDiffRet($Name* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.diff.ret"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleEqBounds($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.eq.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleRetTypeInLambda($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.ret.type.in.lambda"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleRetTypeInLambda($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.ret.type.in.lambda"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleRetTypeInMref($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.ret.type.in.mref"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleRetTypeInMref($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.ret.type.in.mref"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleTypeInConditional($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.type.in.conditional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleTypeInConditional($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.type.in.conditional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleTypeInSwitchExpression($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.type.in.switch.expression"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleTypeInSwitchExpression($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.type.in.switch.expression"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleUnrelatedDefaults($Kinds$KindName* arg0, $Type* arg1, $Name* arg2, $List* arg3, $Symbol* arg4, $Symbol* arg5) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.unrelated.defaults"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IncompatibleUpperBounds($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.upper.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InconvertibleTypes($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inconvertible.types"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferArgLengthMismatch($List* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "infer.arg.length.mismatch"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferNoConformingAssignmentExists($List* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "infer.no.conforming.assignment.exists"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferNoConformingAssignmentExists($List* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "infer.no.conforming.assignment.exists"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferNoConformingInstanceExists($List* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "infer.no.conforming.instance.exists"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferVarargsArgumentMismatch($List* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "infer.varargs.argument.mismatch"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferVarargsArgumentMismatch($List* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "infer.varargs.argument.mismatch"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferredDoNotConformToEqBounds($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inferred.do.not.conform.to.eq.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferredDoNotConformToLowerBounds($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inferred.do.not.conform.to.lower.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InferredDoNotConformToUpperBounds($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "inferred.do.not.conform.to.upper.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IntersectionType(int32_t arg0) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "intersection.type"_s, $$new($ObjectArray, {$($of($Integer::valueOf(arg0)))}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InvalidDefaultInterface($String* arg0, $String* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "invalid.default.interface"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InvalidGenericLambdaTarget($Type* arg0, $Kinds$KindName* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "invalid.generic.lambda.target"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InvalidMref($Kinds$KindName* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "invalid.mref"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InvalidMref($Kinds$KindName* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "invalid.mref"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::InvalidStaticInterface($String* arg0, $String* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "invalid.static.interface"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IsATypeVariable($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "is.a.type.variable"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::IsDuplicated($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "is.duplicated"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::Location($Kinds$KindName* arg0, $Type* arg1, $Void* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "location"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::Location($Kinds$KindName* arg0, $Symbol* arg1, $Void* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "location"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::Location1($Kinds$KindName* arg0, $Symbol* arg1, $Type* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "location.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::LowerBounds($List* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "lower.bounds"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::MethodDescriptorInvalid($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "method.descriptor.invalid"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::MissingRetVal($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "missing.ret.val"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ModuleNameMismatch($Name* arg0, $Name* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "module.name.mismatch"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ModuleNonZeroOpens($Name* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "module.non.zero.opens"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::MustNotBeSupertype($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "must.not.be.supertype"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoAbstracts($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "no.abstracts"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoConformingAssignmentExists($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "no.conforming.assignment.exists"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoConformingAssignmentExists($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "no.conforming.assignment.exists"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoSuitableFunctionalIntfInst($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "no.suitable.functional.intf.inst"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoUniqueMaximalInstanceExists($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "no.unique.maximal.instance.exists"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NoUniqueMinimalInstanceExists($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "no.unique.minimal.instance.exists"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotAFunctionalIntf($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.a.functional.intf"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotAFunctionalIntf1($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.a.functional.intf.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotAFunctionalIntf1($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.a.functional.intf.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotAnIntfComponent($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.an.intf.component"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotAnIntfComponent($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.an.intf.component"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotApplicableMethodFound(int32_t arg0, $Symbol* arg1, $JCDiagnostic* arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.applicable.method.found"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotApplicableMethodFound(int32_t arg0, $Symbol* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.applicable.method.found"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessClassIntfCantAccess($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.class.intf.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessClassIntfCantAccessReason($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $JCDiagnostic* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.class.intf.cant.access.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessClassIntfCantAccessReason($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $JCDiagnostic$Fragment* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.class.intf.cant.access.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessDoesNotRead($Symbol* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.does.not.read"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessDoesNotReadFromUnnamed($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.does.not.read.from.unnamed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessDoesNotReadUnnamed($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.does.not.read.unnamed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessNotExported($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.not.exported"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessNotExportedFromUnnamed($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.not.exported.from.unnamed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessNotExportedToModule($Symbol* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.not.exported.to.module"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessNotExportedToModuleFromUnnamed($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.not.exported.to.module.from.unnamed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessPackageCantAccess($Symbol* arg0, $Symbol* arg1, $JCDiagnostic* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.package.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefAccessPackageCantAccess($Symbol* arg0, $Symbol* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.access.package.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::NotDefPublicCantAccess($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "not.def.public.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::OverriddenDefault($Symbol* arg0, $Type* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "overridden.default"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::PackageNotVisible($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "package.not.visible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::PackageNotVisible($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "package.not.visible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::PartialInstSig($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "partial.inst.sig"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::PossibleLossOfPrecision($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "possible.loss.of.precision"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ProbFoundReq($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "prob.found.req"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ProbFoundReq($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "prob.found.req"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::RedundantSupertype($Symbol* arg0, $Type* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "redundant.supertype"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::RedundantSupertype($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "redundant.supertype"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::RefAmbiguous($Name* arg0, $Kinds$Kind* arg1, $Symbol* arg2, $Symbol* arg3, $Kinds$Kind* arg4, $Symbol* arg5, $Symbol* arg6) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "ref.ambiguous"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ReportAccess($Symbol* arg0, $Set* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "report.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::SyntheticNameConflict($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "synthetic.name.conflict"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::ThrowsClauseNotAllowedForCanonicalConstructor($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "throws.clause.not.allowed.for.canonical.constructor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::TryNotApplicableToType($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "try.not.applicable.to.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::TryNotApplicableToType($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "try.not.applicable.to.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeCaptureof($Name* arg0, $Type* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "type.captureof"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeParameter($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "type.parameter"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::TypeVar($Name* arg0, int32_t arg1) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "type.var"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::UncheckedClashWith($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "unchecked.clash.with"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::UncheckedImplement($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "unchecked.implement"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::UncheckedOverride($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "unchecked.override"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::UpperBounds($List* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "upper.bounds"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsArgumentMismatch($JCDiagnostic* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.argument.mismatch"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsArgumentMismatch($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.argument.mismatch"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsClashWith($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.clash.with"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsImplement($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.implement"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsOverride($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.override"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsAccessor($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.trustme.on.non.varargs.accessor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsTrustmeOnNonVarargsMeth($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.trustme.on.non.varargs.meth"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsTrustmeOnReifiableVarargs($Type* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.trustme.on.reifiable.varargs"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargs($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.trustme.on.virtual.varargs"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VarargsTrustmeOnVirtualVarargsFinalOnly($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "varargs.trustme.on.virtual.varargs.final.only"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseCheckingAttribution($Symbol* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.checking.attribution"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseClasspath($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.classpath"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseLoading($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.loading"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseParsingDone($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.parsing.done"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseParsingStarted($File* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.parsing.started"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseParsingStarted($JavaFileObject* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.parsing.started"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseParsingStarted($Path* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.parsing.started"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseSourcepath($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.sourcepath"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseTotal($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.total"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseWroteFile($File* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.wrote.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseWroteFile($JavaFileObject* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.wrote.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::VerboseWroteFile($Path* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "verbose.wrote.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereCaptured($Type* arg0, $Type* arg1, $Type* arg2, $Type* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.captured"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereCaptured1($Type* arg0, $Type* arg1, $Void* arg2, $Type* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.captured.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereDescriptionCaptured1($Set* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.description.captured.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereDescriptionIntersection($Set* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.description.intersection"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereDescriptionIntersection1($Set* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.description.intersection.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereDescriptionTypevar($Set* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.description.typevar"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereDescriptionTypevar1($Set* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.description.typevar.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereFreshTypevar($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.fresh.typevar"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereIntersection($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.intersection"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereTypevar($Type* arg0, $List* arg1, $Kinds$Kind* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.typevar"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WhereTypevar1($Type* arg0, $List* arg1, $Kinds$Kind* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "where.typevar.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::WrongNumberTypeArgs($String* arg0) {
	$init(CompilerProperties$Fragments);
	return $new($JCDiagnostic$Fragment, "compiler"_s, "wrong.number.type.args"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::XPrintProcessorInfo($String* arg0, $String* arg1, bool arg2) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "x.print.processor.info"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Boolean::valueOf(arg2)))
	}));
}

$JCDiagnostic$Fragment* CompilerProperties$Fragments::XPrintRounds(int32_t arg0, $String* arg1, $Set* arg2, bool arg3) {
	$init(CompilerProperties$Fragments);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Fragment, "compiler"_s, "x.print.rounds"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(arg0))),
		$of(arg1),
		$of(arg2),
		$($of($Boolean::valueOf(arg3)))
	}));
}

void clinit$CompilerProperties$Fragments($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CompilerProperties$Fragments::AccessorMethodCantThrowException, $new($JCDiagnostic$Fragment, "compiler"_s, "accessor.method.cant.throw.exception"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::AccessorMethodMustNotBeGeneric, $new($JCDiagnostic$Fragment, "compiler"_s, "accessor.method.must.not.be.generic"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::AccessorMethodMustNotBeStatic, $new($JCDiagnostic$Fragment, "compiler"_s, "accessor.method.must.not.be.static"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Anonymous, $new($JCDiagnostic$Fragment, "compiler"_s, "anonymous"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ArgLengthMismatch, $new($JCDiagnostic$Fragment, "compiler"_s, "arg.length.mismatch"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadClassSignature, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.class.signature"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadConstPoolTag, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.tag"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadConstPoolTagAt, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.const.pool.tag.at"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadEnclosingClass, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.enclosing.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadModuleInfoName, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.module-info.name"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadRequiresFlag, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.requires.flag"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadRuntimeInvisibleParamAnnotations, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.runtime.invisible.param.annotations"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadSignature, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.signature"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BadTypeAnnotationValue, $new($JCDiagnostic$Fragment, "compiler"_s, "bad.type.annotation.value"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::BaseMembership, $new($JCDiagnostic$Fragment, "compiler"_s, "base.membership"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Bound, $new($JCDiagnostic$Fragment, "compiler"_s, "bound"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Canonical, $new($JCDiagnostic$Fragment, "compiler"_s, "canonical"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::CanonicalCantHaveReturnStatement, $new($JCDiagnostic$Fragment, "compiler"_s, "canonical.cant.have.return.statement"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::CanonicalMustNotContainExplicitConstructorInvocation, $new($JCDiagnostic$Fragment, "compiler"_s, "canonical.must.not.contain.explicit.constructor.invocation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::CanonicalMustNotDeclareTypeVariables, $new($JCDiagnostic$Fragment, "compiler"_s, "canonical.must.not.declare.type.variables"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::CanonicalWithNameMismatch, $new($JCDiagnostic$Fragment, "compiler"_s, "canonical.with.name.mismatch"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::CantResolveModules, $new($JCDiagnostic$Fragment, "compiler"_s, "cant.resolve.modules"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ClassFileWrongClass, $new($JCDiagnostic$Fragment, "compiler"_s, "class.file.wrong.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Compact, $new($JCDiagnostic$Fragment, "compiler"_s, "compact"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ConditionalTargetCantBeVoid, $new($JCDiagnostic$Fragment, "compiler"_s, "conditional.target.cant.be.void"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::DiamondAnonymousMethodsImplicitlyOverride, $new($JCDiagnostic$Fragment, "compiler"_s, "diamond.anonymous.methods.implicitly.override"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FatalErrCantClose, $new($JCDiagnostic$Fragment, "compiler"_s, "fatal.err.cant.close"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FatalErrNoJavaLang, $new($JCDiagnostic$Fragment, "compiler"_s, "fatal.err.no.java.lang"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureAnnotationsAfterTypeParams, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.annotations.after.type.params"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureCaseNull, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.case.null"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureDefaultMethods, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.default.methods"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureDiamond, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.diamond"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureDiamondAndAnonClass, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.diamond.and.anon.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureIntersectionTypesInCast, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.intersection.types.in.cast"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureLambda, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.lambda"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureMethodReferences, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.method.references"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureModules, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.modules"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureMultipleCaseLabels, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.multiple.case.labels"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeaturePatternMatchingInstanceof, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.pattern.matching.instanceof"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeaturePatternSwitch, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.pattern.switch"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeaturePrivateIntfMethods, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.private.intf.methods"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureRecords, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.records"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureReifiableTypesInstanceof, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.reifiable.types.instanceof"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureRepeatableAnnotations, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.repeatable.annotations"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureSealedClasses, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.sealed.classes"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureStaticIntfMethodInvoke, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.static.intf.method.invoke"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureStaticIntfMethods, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.static.intf.methods"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureSwitchExpressions, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.switch.expressions"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureSwitchRules, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.switch.rules"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureTextBlocks, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.text.blocks"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureTypeAnnotations, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.type.annotations"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureVarInTryWithResources, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.var.in.try.with.resources"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FeatureVarSyntaxInImplicitLambda, $new($JCDiagnostic$Fragment, "compiler"_s, "feature.var.syntax.in.implicit.lambda"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::FileDoesNotContainModule, $new($JCDiagnostic$Fragment, "compiler"_s, "file.does.not.contain.module"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Guard, $new($JCDiagnostic$Fragment, "compiler"_s, "guard"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::IllegalStartOfClassFile, $new($JCDiagnostic$Fragment, "compiler"_s, "illegal.start.of.class.file"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ImplicitAndExplicitNotAllowed, $new($JCDiagnostic$Fragment, "compiler"_s, "implicit.and.explicit.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::IncompatibleArgTypesInLambda, $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.arg.types.in.lambda"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::IncompatibleArgTypesInMref, $new($JCDiagnostic$Fragment, "compiler"_s, "incompatible.arg.types.in.mref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::InnerCls, $new($JCDiagnostic$Fragment, "compiler"_s, "inner.cls"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameAnnotation, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.annotation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameClass, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameConstructor, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.constructor"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameEnum, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.enum"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameInstanceInit, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.instance.init"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameInterface, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.interface"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameMethod, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.method"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameModule, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.module"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnamePackage, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.package"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameRecord, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.record"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameRecordComponent, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.record.component"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameStatic, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.static"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameStaticInit, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.static.init"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameTypeVariable, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.type.variable"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameTypeVariableBound, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.type.variable.bound"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameValue, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.value"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::KindnameVariable, $new($JCDiagnostic$Fragment, "compiler"_s, "kindname.variable"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Lambda, $new($JCDiagnostic$Fragment, "compiler"_s, "lambda"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Local, $new($JCDiagnostic$Fragment, "compiler"_s, "local"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalArrayMissingTarget, $new($JCDiagnostic$Fragment, "compiler"_s, "local.array.missing.target"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalCantInferNull, $new($JCDiagnostic$Fragment, "compiler"_s, "local.cant.infer.null"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalCantInferVoid, $new($JCDiagnostic$Fragment, "compiler"_s, "local.cant.infer.void"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalLambdaMissingTarget, $new($JCDiagnostic$Fragment, "compiler"_s, "local.lambda.missing.target"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalMissingInit, $new($JCDiagnostic$Fragment, "compiler"_s, "local.missing.init"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalMrefMissingTarget, $new($JCDiagnostic$Fragment, "compiler"_s, "local.mref.missing.target"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocalSelfRef, $new($JCDiagnostic$Fragment, "compiler"_s, "local.self.ref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocnModule_path, $new($JCDiagnostic$Fragment, "compiler"_s, "locn.module_path"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocnModule_source_path, $new($JCDiagnostic$Fragment, "compiler"_s, "locn.module_source_path"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocnSystem_modules, $new($JCDiagnostic$Fragment, "compiler"_s, "locn.system_modules"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::LocnUpgrade_module_path, $new($JCDiagnostic$Fragment, "compiler"_s, "locn.upgrade_module_path"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::MalformedVarargMethod, $new($JCDiagnostic$Fragment, "compiler"_s, "malformed.vararg.method"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::MethodMustBePublic, $new($JCDiagnostic$Fragment, "compiler"_s, "method.must.be.public"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ModuleInfoDefinitionExpected, $new($JCDiagnostic$Fragment, "compiler"_s, "module.info.definition.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ModuleInfoInvalidSuperClass, $new($JCDiagnostic$Fragment, "compiler"_s, "module.info.invalid.super.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::MrefInferAndExplicitParams, $new($JCDiagnostic$Fragment, "compiler"_s, "mref.infer.and.explicit.params"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::MustNotBeSameClass, $new($JCDiagnostic$Fragment, "compiler"_s, "must.not.be.same.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::NoArgs, $new($JCDiagnostic$Fragment, "compiler"_s, "no.args"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::NonStatic, $new($JCDiagnostic$Fragment, "compiler"_s, "non.static"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::ResumeAbort, $new($JCDiagnostic$Fragment, "compiler"_s, "resume.abort"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::SourceUnavailable, $new($JCDiagnostic$Fragment, "compiler"_s, "source.unavailable"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::StatExprExpected, $new($JCDiagnostic$Fragment, "compiler"_s, "stat.expr.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Static, $new($JCDiagnostic$Fragment, "compiler"_s, "static"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::StaticMrefWithTargs, $new($JCDiagnostic$Fragment, "compiler"_s, "static.mref.with.targs"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::SwitchExpressionTargetCantBeVoid, $new($JCDiagnostic$Fragment, "compiler"_s, "switch.expression.target.cant.be.void"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenBadSymbol, $new($JCDiagnostic$Fragment, "compiler"_s, "token.bad-symbol"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenCharacter, $new($JCDiagnostic$Fragment, "compiler"_s, "token.character"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenDouble, $new($JCDiagnostic$Fragment, "compiler"_s, "token.double"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenEndOfInput, $new($JCDiagnostic$Fragment, "compiler"_s, "token.end-of-input"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenFloat, $new($JCDiagnostic$Fragment, "compiler"_s, "token.float"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenIdentifier, $new($JCDiagnostic$Fragment, "compiler"_s, "token.identifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenInteger, $new($JCDiagnostic$Fragment, "compiler"_s, "token.integer"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenLongInteger, $new($JCDiagnostic$Fragment, "compiler"_s, "token.long-integer"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TokenString, $new($JCDiagnostic$Fragment, "compiler"_s, "token.string"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeCaptureof1, $new($JCDiagnostic$Fragment, "compiler"_s, "type.captureof.1"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeMustBeIdenticalToCorrespondingRecordComponentType, $new($JCDiagnostic$Fragment, "compiler"_s, "type.must.be.identical.to.corresponding.record.component.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeNone, $new($JCDiagnostic$Fragment, "compiler"_s, "type.none"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeNull, $new($JCDiagnostic$Fragment, "compiler"_s, "type.null"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeReqArrayOrIterable, $new($JCDiagnostic$Fragment, "compiler"_s, "type.req.array.or.iterable"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeReqClass, $new($JCDiagnostic$Fragment, "compiler"_s, "type.req.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeReqClassArray, $new($JCDiagnostic$Fragment, "compiler"_s, "type.req.class.array"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeReqExact, $new($JCDiagnostic$Fragment, "compiler"_s, "type.req.exact"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::TypeReqRef, $new($JCDiagnostic$Fragment, "compiler"_s, "type.req.ref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UnableToAccessFile, $new($JCDiagnostic$Fragment, "compiler"_s, "unable.to.access.file"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::Unbound, $new($JCDiagnostic$Fragment, "compiler"_s, "unbound"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UncheckedAssign, $new($JCDiagnostic$Fragment, "compiler"_s, "unchecked.assign"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UncheckedCastToType, $new($JCDiagnostic$Fragment, "compiler"_s, "unchecked.cast.to.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UndeclTypeVar, $new($JCDiagnostic$Fragment, "compiler"_s, "undecl.type.var"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UnexpectedConstPoolTagAt, $new($JCDiagnostic$Fragment, "compiler"_s, "unexpected.const.pool.tag.at"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UnexpectedRetVal, $new($JCDiagnostic$Fragment, "compiler"_s, "unexpected.ret.val"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UnicodeStrNotSupported, $new($JCDiagnostic$Fragment, "compiler"_s, "unicode.str.not.supported"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UnnamedModule, $new($JCDiagnostic$Fragment, "compiler"_s, "unnamed.module"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UnnamedPackage, $new($JCDiagnostic$Fragment, "compiler"_s, "unnamed.package"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::UserSelectedCompletionFailure, $new($JCDiagnostic$Fragment, "compiler"_s, "user.selected.completion.failure"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::VarAndExplicitNotAllowed, $new($JCDiagnostic$Fragment, "compiler"_s, "var.and.explicit.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::VarAndImplicitNotAllowed, $new($JCDiagnostic$Fragment, "compiler"_s, "var.and.implicit.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::VersionNotAvailable, $new($JCDiagnostic$Fragment, "compiler"_s, "version.not.available"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::WhereDescriptionCaptured, $new($JCDiagnostic$Fragment, "compiler"_s, "where.description.captured"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Fragments::WrongVersion, $new($JCDiagnostic$Fragment, "compiler"_s, "wrong.version"_s, $$new($ObjectArray, 0)));
}

CompilerProperties$Fragments::CompilerProperties$Fragments() {
}

$Class* CompilerProperties$Fragments::load$($String* name, bool initialize) {
	$loadClass(CompilerProperties$Fragments, name, initialize, &_CompilerProperties$Fragments_ClassInfo_, clinit$CompilerProperties$Fragments, allocate$CompilerProperties$Fragments);
	return class$;
}

$Class* CompilerProperties$Fragments::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com