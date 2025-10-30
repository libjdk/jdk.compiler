#include <com/sun/tools/javac/code/Source$Feature.h>

#include <com/sun/tools/javac/code/Source$Feature$DiagKind.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ANNOTATIONS_AFTER_TYPE_PARAMS
#undef CASE_NULL
#undef DEFAULT_METHODS
#undef DEPRECATION_ON_IMPORT
#undef DIAMOND
#undef DIAMOND_WITH_ANONYMOUS_CLASS_CREATION
#undef EFFECTIVELY_FINAL_IN_INNER_CLASSES
#undef EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES
#undef FUNCTIONAL_INTERFACE_MOST_SPECIFIC
#undef GRAPH_INFERENCE
#undef IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES
#undef INTERSECTION_TYPES_IN_CAST
#undef JDK10
#undef JDK11
#undef JDK14
#undef JDK15
#undef JDK16
#undef JDK17
#undef JDK1_2
#undef JDK7
#undef JDK8
#undef JDK9
#undef LAMBDA
#undef LOCAL_VARIABLE_TYPE_INFERENCE
#undef MAP_CAPTURES_TO_BOUNDS
#undef MAX
#undef METHOD_REFERENCES
#undef MIN
#undef MODULES
#undef NORMAL
#undef PATTERN_MATCHING_IN_INSTANCEOF
#undef PATTERN_SWITCH
#undef PLURAL
#undef POLY
#undef POST_APPLICABILITY_VARARGS_ACCESS_CHECK
#undef PRIVATE_INTERFACE_METHODS
#undef PRIVATE_SAFE_VARARGS
#undef RECORDS
#undef REDUNDANT_STRICTFP
#undef REIFIABLE_TYPES_INSTANCEOF
#undef REPEATED_ANNOTATIONS
#undef SEALED_CLASSES
#undef STATIC_INTERFACE_METHODS
#undef STATIC_INTERFACE_METHODS_INVOKE
#undef STRICT_METHOD_CLASH_CHECK
#undef SWITCH_EXPRESSION
#undef SWITCH_MULTIPLE_CASE_LABELS
#undef SWITCH_RULE
#undef TEXT_BLOCKS
#undef TYPE_ANNOTATIONS
#undef UNDERSCORE_IDENTIFIER
#undef VAR_SYNTAX_IMPLICIT_LAMBDAS

using $Source$FeatureArray = $Array<::com::sun::tools::javac::code::Source$Feature>;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature$DiagKind = ::com::sun::tools::javac::code::Source$Feature$DiagKind;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Source$Feature_FieldInfo_[] = {
	{"DIAMOND", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, DIAMOND)},
	{"MODULES", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, MODULES)},
	{"EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES)},
	{"DEPRECATION_ON_IMPORT", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, DEPRECATION_ON_IMPORT)},
	{"POLY", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, POLY)},
	{"LAMBDA", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, LAMBDA)},
	{"METHOD_REFERENCES", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, METHOD_REFERENCES)},
	{"DEFAULT_METHODS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, DEFAULT_METHODS)},
	{"STATIC_INTERFACE_METHODS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, STATIC_INTERFACE_METHODS)},
	{"STATIC_INTERFACE_METHODS_INVOKE", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, STATIC_INTERFACE_METHODS_INVOKE)},
	{"STRICT_METHOD_CLASH_CHECK", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, STRICT_METHOD_CLASH_CHECK)},
	{"EFFECTIVELY_FINAL_IN_INNER_CLASSES", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, EFFECTIVELY_FINAL_IN_INNER_CLASSES)},
	{"TYPE_ANNOTATIONS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, TYPE_ANNOTATIONS)},
	{"ANNOTATIONS_AFTER_TYPE_PARAMS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, ANNOTATIONS_AFTER_TYPE_PARAMS)},
	{"REPEATED_ANNOTATIONS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, REPEATED_ANNOTATIONS)},
	{"INTERSECTION_TYPES_IN_CAST", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, INTERSECTION_TYPES_IN_CAST)},
	{"GRAPH_INFERENCE", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, GRAPH_INFERENCE)},
	{"FUNCTIONAL_INTERFACE_MOST_SPECIFIC", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, FUNCTIONAL_INTERFACE_MOST_SPECIFIC)},
	{"POST_APPLICABILITY_VARARGS_ACCESS_CHECK", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, POST_APPLICABILITY_VARARGS_ACCESS_CHECK)},
	{"MAP_CAPTURES_TO_BOUNDS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, MAP_CAPTURES_TO_BOUNDS)},
	{"PRIVATE_SAFE_VARARGS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, PRIVATE_SAFE_VARARGS)},
	{"DIAMOND_WITH_ANONYMOUS_CLASS_CREATION", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, DIAMOND_WITH_ANONYMOUS_CLASS_CREATION)},
	{"UNDERSCORE_IDENTIFIER", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, UNDERSCORE_IDENTIFIER)},
	{"PRIVATE_INTERFACE_METHODS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, PRIVATE_INTERFACE_METHODS)},
	{"LOCAL_VARIABLE_TYPE_INFERENCE", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, LOCAL_VARIABLE_TYPE_INFERENCE)},
	{"VAR_SYNTAX_IMPLICIT_LAMBDAS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, VAR_SYNTAX_IMPLICIT_LAMBDAS)},
	{"IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES)},
	{"SWITCH_MULTIPLE_CASE_LABELS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, SWITCH_MULTIPLE_CASE_LABELS)},
	{"SWITCH_RULE", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, SWITCH_RULE)},
	{"SWITCH_EXPRESSION", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, SWITCH_EXPRESSION)},
	{"TEXT_BLOCKS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, TEXT_BLOCKS)},
	{"PATTERN_MATCHING_IN_INSTANCEOF", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, PATTERN_MATCHING_IN_INSTANCEOF)},
	{"REIFIABLE_TYPES_INSTANCEOF", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, REIFIABLE_TYPES_INSTANCEOF)},
	{"RECORDS", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, RECORDS)},
	{"SEALED_CLASSES", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, SEALED_CLASSES)},
	{"CASE_NULL", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, CASE_NULL)},
	{"PATTERN_SWITCH", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, PATTERN_SWITCH)},
	{"REDUNDANT_STRICTFP", "Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature, REDUNDANT_STRICTFP)},
	{"$VALUES", "[Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Source$Feature, $VALUES)},
	{"minLevel", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(Source$Feature, minLevel)},
	{"maxLevel", "Lcom/sun/tools/javac/code/Source;", nullptr, $PRIVATE | $FINAL, $field(Source$Feature, maxLevel)},
	{"optFragment", "Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PRIVATE | $FINAL, $field(Source$Feature, optFragment)},
	{"optKind", "Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PRIVATE | $FINAL, $field(Source$Feature, optKind)},
	{}
};

$MethodInfo _Source$Feature_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Source$FeatureArray*(*)()>(&Source$Feature::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Source;)V", "(Lcom/sun/tools/javac/code/Source;)V", $PRIVATE, $method(static_cast<void(Source$Feature::*)($String*,int32_t,$Source*)>(&Source$Feature::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Source$Feature$DiagKind;)V", "(Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Source$Feature$DiagKind;)V", $PRIVATE, $method(static_cast<void(Source$Feature::*)($String*,int32_t,$Source*,$JCDiagnostic$Fragment*,$Source$Feature$DiagKind*)>(&Source$Feature::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/code/Source;)V", "(Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/code/Source;)V", $PRIVATE, $method(static_cast<void(Source$Feature::*)($String*,int32_t,$Source*,$Source*)>(&Source$Feature::init$))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Source$Feature$DiagKind;)V", "(Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/code/Source;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Source$Feature$DiagKind;)V", $PRIVATE, $method(static_cast<void(Source$Feature::*)($String*,int32_t,$Source*,$Source*,$JCDiagnostic$Fragment*,$Source$Feature$DiagKind*)>(&Source$Feature::init$))},
	{"allowedInSource", "(Lcom/sun/tools/javac/code/Source;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Source$Feature::*)($Source*)>(&Source$Feature::allowedInSource))},
	{"error", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC, $method(static_cast<$JCDiagnostic$Error*(Source$Feature::*)($String*)>(&Source$Feature::error))},
	{"fragment", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC, $method(static_cast<$JCDiagnostic$Fragment*(Source$Feature::*)($String*)>(&Source$Feature::fragment))},
	{"isPlural", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Source$Feature::*)()>(&Source$Feature::isPlural))},
	{"nameFragment", "()Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, $PUBLIC, $method(static_cast<$JCDiagnostic$Fragment*(Source$Feature::*)()>(&Source$Feature::nameFragment))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Source$Feature*(*)($String*)>(&Source$Feature::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/code/Source$Feature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Source$FeatureArray*(*)()>(&Source$Feature::values))},
	{}
};

$InnerClassInfo _Source$Feature_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Source$Feature", "com.sun.tools.javac.code.Source", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.code.Source$Feature$DiagKind", "com.sun.tools.javac.code.Source$Feature", "DiagKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Source$Feature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.code.Source$Feature",
	"java.lang.Enum",
	nullptr,
	_Source$Feature_FieldInfo_,
	_Source$Feature_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Source$Feature;>;",
	nullptr,
	_Source$Feature_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Source"
};

$Object* allocate$Source$Feature($Class* clazz) {
	return $of($alloc(Source$Feature));
}

Source$Feature* Source$Feature::DIAMOND = nullptr;
Source$Feature* Source$Feature::MODULES = nullptr;
Source$Feature* Source$Feature::EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES = nullptr;
Source$Feature* Source$Feature::DEPRECATION_ON_IMPORT = nullptr;
Source$Feature* Source$Feature::POLY = nullptr;
Source$Feature* Source$Feature::LAMBDA = nullptr;
Source$Feature* Source$Feature::METHOD_REFERENCES = nullptr;
Source$Feature* Source$Feature::DEFAULT_METHODS = nullptr;
Source$Feature* Source$Feature::STATIC_INTERFACE_METHODS = nullptr;
Source$Feature* Source$Feature::STATIC_INTERFACE_METHODS_INVOKE = nullptr;
Source$Feature* Source$Feature::STRICT_METHOD_CLASH_CHECK = nullptr;
Source$Feature* Source$Feature::EFFECTIVELY_FINAL_IN_INNER_CLASSES = nullptr;
Source$Feature* Source$Feature::TYPE_ANNOTATIONS = nullptr;
Source$Feature* Source$Feature::ANNOTATIONS_AFTER_TYPE_PARAMS = nullptr;
Source$Feature* Source$Feature::REPEATED_ANNOTATIONS = nullptr;
Source$Feature* Source$Feature::INTERSECTION_TYPES_IN_CAST = nullptr;
Source$Feature* Source$Feature::GRAPH_INFERENCE = nullptr;
Source$Feature* Source$Feature::FUNCTIONAL_INTERFACE_MOST_SPECIFIC = nullptr;
Source$Feature* Source$Feature::POST_APPLICABILITY_VARARGS_ACCESS_CHECK = nullptr;
Source$Feature* Source$Feature::MAP_CAPTURES_TO_BOUNDS = nullptr;
Source$Feature* Source$Feature::PRIVATE_SAFE_VARARGS = nullptr;
Source$Feature* Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION = nullptr;
Source$Feature* Source$Feature::UNDERSCORE_IDENTIFIER = nullptr;
Source$Feature* Source$Feature::PRIVATE_INTERFACE_METHODS = nullptr;
Source$Feature* Source$Feature::LOCAL_VARIABLE_TYPE_INFERENCE = nullptr;
Source$Feature* Source$Feature::VAR_SYNTAX_IMPLICIT_LAMBDAS = nullptr;
Source$Feature* Source$Feature::IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES = nullptr;
Source$Feature* Source$Feature::SWITCH_MULTIPLE_CASE_LABELS = nullptr;
Source$Feature* Source$Feature::SWITCH_RULE = nullptr;
Source$Feature* Source$Feature::SWITCH_EXPRESSION = nullptr;
Source$Feature* Source$Feature::TEXT_BLOCKS = nullptr;
Source$Feature* Source$Feature::PATTERN_MATCHING_IN_INSTANCEOF = nullptr;
Source$Feature* Source$Feature::REIFIABLE_TYPES_INSTANCEOF = nullptr;
Source$Feature* Source$Feature::RECORDS = nullptr;
Source$Feature* Source$Feature::SEALED_CLASSES = nullptr;
Source$Feature* Source$Feature::CASE_NULL = nullptr;
Source$Feature* Source$Feature::PATTERN_SWITCH = nullptr;
Source$Feature* Source$Feature::REDUNDANT_STRICTFP = nullptr;
$Source$FeatureArray* Source$Feature::$VALUES = nullptr;

$Source$FeatureArray* Source$Feature::$values() {
	$init(Source$Feature);
	return $new($Source$FeatureArray, {
		Source$Feature::DIAMOND,
		Source$Feature::MODULES,
		Source$Feature::EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES,
		Source$Feature::DEPRECATION_ON_IMPORT,
		Source$Feature::POLY,
		Source$Feature::LAMBDA,
		Source$Feature::METHOD_REFERENCES,
		Source$Feature::DEFAULT_METHODS,
		Source$Feature::STATIC_INTERFACE_METHODS,
		Source$Feature::STATIC_INTERFACE_METHODS_INVOKE,
		Source$Feature::STRICT_METHOD_CLASH_CHECK,
		Source$Feature::EFFECTIVELY_FINAL_IN_INNER_CLASSES,
		Source$Feature::TYPE_ANNOTATIONS,
		Source$Feature::ANNOTATIONS_AFTER_TYPE_PARAMS,
		Source$Feature::REPEATED_ANNOTATIONS,
		Source$Feature::INTERSECTION_TYPES_IN_CAST,
		Source$Feature::GRAPH_INFERENCE,
		Source$Feature::FUNCTIONAL_INTERFACE_MOST_SPECIFIC,
		Source$Feature::POST_APPLICABILITY_VARARGS_ACCESS_CHECK,
		Source$Feature::MAP_CAPTURES_TO_BOUNDS,
		Source$Feature::PRIVATE_SAFE_VARARGS,
		Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION,
		Source$Feature::UNDERSCORE_IDENTIFIER,
		Source$Feature::PRIVATE_INTERFACE_METHODS,
		Source$Feature::LOCAL_VARIABLE_TYPE_INFERENCE,
		Source$Feature::VAR_SYNTAX_IMPLICIT_LAMBDAS,
		Source$Feature::IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES,
		Source$Feature::SWITCH_MULTIPLE_CASE_LABELS,
		Source$Feature::SWITCH_RULE,
		Source$Feature::SWITCH_EXPRESSION,
		Source$Feature::TEXT_BLOCKS,
		Source$Feature::PATTERN_MATCHING_IN_INSTANCEOF,
		Source$Feature::REIFIABLE_TYPES_INSTANCEOF,
		Source$Feature::RECORDS,
		Source$Feature::SEALED_CLASSES,
		Source$Feature::CASE_NULL,
		Source$Feature::PATTERN_SWITCH,
		Source$Feature::REDUNDANT_STRICTFP
	});
}

$Source$FeatureArray* Source$Feature::values() {
	$init(Source$Feature);
	return $cast($Source$FeatureArray, Source$Feature::$VALUES->clone());
}

Source$Feature* Source$Feature::valueOf($String* name) {
	$init(Source$Feature);
	return $cast(Source$Feature, $Enum::valueOf(Source$Feature::class$, name));
}

void Source$Feature::init$($String* $enum$name, int32_t $enum$ordinal, $Source* minLevel) {
	Source$Feature::init$($enum$name, $enum$ordinal, minLevel, nullptr, nullptr);
}

void Source$Feature::init$($String* $enum$name, int32_t $enum$ordinal, $Source* minLevel, $JCDiagnostic$Fragment* optFragment, $Source$Feature$DiagKind* optKind) {
	$init($Source);
	Source$Feature::init$($enum$name, $enum$ordinal, minLevel, $Source::MAX, optFragment, optKind);
}

void Source$Feature::init$($String* $enum$name, int32_t $enum$ordinal, $Source* minLevel, $Source* maxLevel) {
	Source$Feature::init$($enum$name, $enum$ordinal, minLevel, maxLevel, nullptr, nullptr);
}

void Source$Feature::init$($String* $enum$name, int32_t $enum$ordinal, $Source* minLevel, $Source* maxLevel, $JCDiagnostic$Fragment* optFragment, $Source$Feature$DiagKind* optKind) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, minLevel, minLevel);
	$set(this, maxLevel, maxLevel);
	$set(this, optFragment, optFragment);
	$set(this, optKind, optKind);
}

bool Source$Feature::allowedInSource($Source* source) {
	bool var$0 = $nc(source)->compareTo(static_cast<$Enum*>(this->minLevel)) >= 0;
	return var$0 && source->compareTo(static_cast<$Enum*>(this->maxLevel)) <= 0;
}

bool Source$Feature::isPlural() {
	$Assert::checkNonNull(this->optKind);
	$init($Source$Feature$DiagKind);
	return this->optKind == $Source$Feature$DiagKind::PLURAL;
}

$JCDiagnostic$Fragment* Source$Feature::nameFragment() {
	$Assert::checkNonNull(this->optFragment);
	return this->optFragment;
}

$JCDiagnostic$Fragment* Source$Feature::fragment($String* sourceName) {
	$Assert::checkNonNull(this->optFragment);
	$init($Source$Feature$DiagKind);
	return this->optKind == $Source$Feature$DiagKind::NORMAL ? $CompilerProperties$Fragments::FeatureNotSupportedInSource(this->optFragment, sourceName, this->minLevel->name$) : $CompilerProperties$Fragments::FeatureNotSupportedInSourcePlural(this->optFragment, sourceName, this->minLevel->name$);
}

$JCDiagnostic$Error* Source$Feature::error($String* sourceName) {
	$Assert::checkNonNull(this->optFragment);
	$init($Source$Feature$DiagKind);
	return this->optKind == $Source$Feature$DiagKind::NORMAL ? $CompilerProperties$Errors::FeatureNotSupportedInSource(this->optFragment, sourceName, this->minLevel->name$) : $CompilerProperties$Errors::FeatureNotSupportedInSourcePlural(this->optFragment, sourceName, this->minLevel->name$);
}

void clinit$Source$Feature($Class* class$) {
	$init($Source);
	$init($CompilerProperties$Fragments);
	$init($Source$Feature$DiagKind);
	$assignStatic(Source$Feature::DIAMOND, $new(Source$Feature, "DIAMOND"_s, 0, $Source::JDK7, $CompilerProperties$Fragments::FeatureDiamond, $Source$Feature$DiagKind::NORMAL));
	$assignStatic(Source$Feature::MODULES, $new(Source$Feature, "MODULES"_s, 1, $Source::JDK9, $CompilerProperties$Fragments::FeatureModules, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES, $new(Source$Feature, "EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES"_s, 2, $Source::JDK9, $CompilerProperties$Fragments::FeatureVarInTryWithResources, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::DEPRECATION_ON_IMPORT, $new(Source$Feature, "DEPRECATION_ON_IMPORT"_s, 3, $Source::MIN, $Source::JDK8));
	$assignStatic(Source$Feature::POLY, $new(Source$Feature, "POLY"_s, 4, $Source::JDK8));
	$assignStatic(Source$Feature::LAMBDA, $new(Source$Feature, "LAMBDA"_s, 5, $Source::JDK8, $CompilerProperties$Fragments::FeatureLambda, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::METHOD_REFERENCES, $new(Source$Feature, "METHOD_REFERENCES"_s, 6, $Source::JDK8, $CompilerProperties$Fragments::FeatureMethodReferences, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::DEFAULT_METHODS, $new(Source$Feature, "DEFAULT_METHODS"_s, 7, $Source::JDK8, $CompilerProperties$Fragments::FeatureDefaultMethods, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::STATIC_INTERFACE_METHODS, $new(Source$Feature, "STATIC_INTERFACE_METHODS"_s, 8, $Source::JDK8, $CompilerProperties$Fragments::FeatureStaticIntfMethods, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::STATIC_INTERFACE_METHODS_INVOKE, $new(Source$Feature, "STATIC_INTERFACE_METHODS_INVOKE"_s, 9, $Source::JDK8, $CompilerProperties$Fragments::FeatureStaticIntfMethodInvoke, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::STRICT_METHOD_CLASH_CHECK, $new(Source$Feature, "STRICT_METHOD_CLASH_CHECK"_s, 10, $Source::JDK8));
	$assignStatic(Source$Feature::EFFECTIVELY_FINAL_IN_INNER_CLASSES, $new(Source$Feature, "EFFECTIVELY_FINAL_IN_INNER_CLASSES"_s, 11, $Source::JDK8));
	$assignStatic(Source$Feature::TYPE_ANNOTATIONS, $new(Source$Feature, "TYPE_ANNOTATIONS"_s, 12, $Source::JDK8, $CompilerProperties$Fragments::FeatureTypeAnnotations, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::ANNOTATIONS_AFTER_TYPE_PARAMS, $new(Source$Feature, "ANNOTATIONS_AFTER_TYPE_PARAMS"_s, 13, $Source::JDK8, $CompilerProperties$Fragments::FeatureAnnotationsAfterTypeParams, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::REPEATED_ANNOTATIONS, $new(Source$Feature, "REPEATED_ANNOTATIONS"_s, 14, $Source::JDK8, $CompilerProperties$Fragments::FeatureRepeatableAnnotations, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::INTERSECTION_TYPES_IN_CAST, $new(Source$Feature, "INTERSECTION_TYPES_IN_CAST"_s, 15, $Source::JDK8, $CompilerProperties$Fragments::FeatureIntersectionTypesInCast, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::GRAPH_INFERENCE, $new(Source$Feature, "GRAPH_INFERENCE"_s, 16, $Source::JDK8));
	$assignStatic(Source$Feature::FUNCTIONAL_INTERFACE_MOST_SPECIFIC, $new(Source$Feature, "FUNCTIONAL_INTERFACE_MOST_SPECIFIC"_s, 17, $Source::JDK8));
	$assignStatic(Source$Feature::POST_APPLICABILITY_VARARGS_ACCESS_CHECK, $new(Source$Feature, "POST_APPLICABILITY_VARARGS_ACCESS_CHECK"_s, 18, $Source::JDK8));
	$assignStatic(Source$Feature::MAP_CAPTURES_TO_BOUNDS, $new(Source$Feature, "MAP_CAPTURES_TO_BOUNDS"_s, 19, $Source::MIN, $Source::JDK7));
	$assignStatic(Source$Feature::PRIVATE_SAFE_VARARGS, $new(Source$Feature, "PRIVATE_SAFE_VARARGS"_s, 20, $Source::JDK9));
	$assignStatic(Source$Feature::DIAMOND_WITH_ANONYMOUS_CLASS_CREATION, $new(Source$Feature, "DIAMOND_WITH_ANONYMOUS_CLASS_CREATION"_s, 21, $Source::JDK9, $CompilerProperties$Fragments::FeatureDiamondAndAnonClass, $Source$Feature$DiagKind::NORMAL));
	$assignStatic(Source$Feature::UNDERSCORE_IDENTIFIER, $new(Source$Feature, "UNDERSCORE_IDENTIFIER"_s, 22, $Source::MIN, $Source::JDK8));
	$assignStatic(Source$Feature::PRIVATE_INTERFACE_METHODS, $new(Source$Feature, "PRIVATE_INTERFACE_METHODS"_s, 23, $Source::JDK9, $CompilerProperties$Fragments::FeaturePrivateIntfMethods, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::LOCAL_VARIABLE_TYPE_INFERENCE, $new(Source$Feature, "LOCAL_VARIABLE_TYPE_INFERENCE"_s, 24, $Source::JDK10));
	$assignStatic(Source$Feature::VAR_SYNTAX_IMPLICIT_LAMBDAS, $new(Source$Feature, "VAR_SYNTAX_IMPLICIT_LAMBDAS"_s, 25, $Source::JDK11, $CompilerProperties$Fragments::FeatureVarSyntaxInImplicitLambda, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES, $new(Source$Feature, "IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES"_s, 26, $Source::JDK1_2, $Source::JDK8));
	$assignStatic(Source$Feature::SWITCH_MULTIPLE_CASE_LABELS, $new(Source$Feature, "SWITCH_MULTIPLE_CASE_LABELS"_s, 27, $Source::JDK14, $CompilerProperties$Fragments::FeatureMultipleCaseLabels, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::SWITCH_RULE, $new(Source$Feature, "SWITCH_RULE"_s, 28, $Source::JDK14, $CompilerProperties$Fragments::FeatureSwitchRules, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::SWITCH_EXPRESSION, $new(Source$Feature, "SWITCH_EXPRESSION"_s, 29, $Source::JDK14, $CompilerProperties$Fragments::FeatureSwitchExpressions, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::TEXT_BLOCKS, $new(Source$Feature, "TEXT_BLOCKS"_s, 30, $Source::JDK15, $CompilerProperties$Fragments::FeatureTextBlocks, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::PATTERN_MATCHING_IN_INSTANCEOF, $new(Source$Feature, "PATTERN_MATCHING_IN_INSTANCEOF"_s, 31, $Source::JDK16, $CompilerProperties$Fragments::FeaturePatternMatchingInstanceof, $Source$Feature$DiagKind::NORMAL));
	$assignStatic(Source$Feature::REIFIABLE_TYPES_INSTANCEOF, $new(Source$Feature, "REIFIABLE_TYPES_INSTANCEOF"_s, 32, $Source::JDK16, $CompilerProperties$Fragments::FeatureReifiableTypesInstanceof, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::RECORDS, $new(Source$Feature, "RECORDS"_s, 33, $Source::JDK16, $CompilerProperties$Fragments::FeatureRecords, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::SEALED_CLASSES, $new(Source$Feature, "SEALED_CLASSES"_s, 34, $Source::JDK17, $CompilerProperties$Fragments::FeatureSealedClasses, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::CASE_NULL, $new(Source$Feature, "CASE_NULL"_s, 35, $Source::JDK17, $CompilerProperties$Fragments::FeatureCaseNull, $Source$Feature$DiagKind::NORMAL));
	$assignStatic(Source$Feature::PATTERN_SWITCH, $new(Source$Feature, "PATTERN_SWITCH"_s, 36, $Source::JDK17, $CompilerProperties$Fragments::FeaturePatternSwitch, $Source$Feature$DiagKind::PLURAL));
	$assignStatic(Source$Feature::REDUNDANT_STRICTFP, $new(Source$Feature, "REDUNDANT_STRICTFP"_s, 37, $Source::JDK17));
	$assignStatic(Source$Feature::$VALUES, Source$Feature::$values());
}

Source$Feature::Source$Feature() {
}

$Class* Source$Feature::load$($String* name, bool initialize) {
	$loadClass(Source$Feature, name, initialize, &_Source$Feature_ClassInfo_, clinit$Source$Feature, allocate$Source$Feature);
	return class$;
}

$Class* Source$Feature::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com