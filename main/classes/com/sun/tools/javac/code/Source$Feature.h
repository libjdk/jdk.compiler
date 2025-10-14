#ifndef _com_sun_tools_javac_code_Source$Feature_h_
#define _com_sun_tools_javac_code_Source$Feature_h_
//$ class com.sun.tools.javac.code.Source$Feature
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANNOTATIONS_AFTER_TYPE_PARAMS")
#undef ANNOTATIONS_AFTER_TYPE_PARAMS
#pragma push_macro("CASE_NULL")
#undef CASE_NULL
#pragma push_macro("DEFAULT_METHODS")
#undef DEFAULT_METHODS
#pragma push_macro("DEPRECATION_ON_IMPORT")
#undef DEPRECATION_ON_IMPORT
#pragma push_macro("DIAMOND")
#undef DIAMOND
#pragma push_macro("DIAMOND_WITH_ANONYMOUS_CLASS_CREATION")
#undef DIAMOND_WITH_ANONYMOUS_CLASS_CREATION
#pragma push_macro("EFFECTIVELY_FINAL_IN_INNER_CLASSES")
#undef EFFECTIVELY_FINAL_IN_INNER_CLASSES
#pragma push_macro("EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES")
#undef EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES
#pragma push_macro("FUNCTIONAL_INTERFACE_MOST_SPECIFIC")
#undef FUNCTIONAL_INTERFACE_MOST_SPECIFIC
#pragma push_macro("GRAPH_INFERENCE")
#undef GRAPH_INFERENCE
#pragma push_macro("IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES")
#undef IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES
#pragma push_macro("INTERSECTION_TYPES_IN_CAST")
#undef INTERSECTION_TYPES_IN_CAST
#pragma push_macro("LAMBDA")
#undef LAMBDA
#pragma push_macro("LOCAL_VARIABLE_TYPE_INFERENCE")
#undef LOCAL_VARIABLE_TYPE_INFERENCE
#pragma push_macro("MAP_CAPTURES_TO_BOUNDS")
#undef MAP_CAPTURES_TO_BOUNDS
#pragma push_macro("METHOD_REFERENCES")
#undef METHOD_REFERENCES
#pragma push_macro("MODULES")
#undef MODULES
#pragma push_macro("PATTERN_MATCHING_IN_INSTANCEOF")
#undef PATTERN_MATCHING_IN_INSTANCEOF
#pragma push_macro("PATTERN_SWITCH")
#undef PATTERN_SWITCH
#pragma push_macro("POLY")
#undef POLY
#pragma push_macro("POST_APPLICABILITY_VARARGS_ACCESS_CHECK")
#undef POST_APPLICABILITY_VARARGS_ACCESS_CHECK
#pragma push_macro("PRIVATE_INTERFACE_METHODS")
#undef PRIVATE_INTERFACE_METHODS
#pragma push_macro("PRIVATE_SAFE_VARARGS")
#undef PRIVATE_SAFE_VARARGS
#pragma push_macro("RECORDS")
#undef RECORDS
#pragma push_macro("REDUNDANT_STRICTFP")
#undef REDUNDANT_STRICTFP
#pragma push_macro("REIFIABLE_TYPES_INSTANCEOF")
#undef REIFIABLE_TYPES_INSTANCEOF
#pragma push_macro("REPEATED_ANNOTATIONS")
#undef REPEATED_ANNOTATIONS
#pragma push_macro("SEALED_CLASSES")
#undef SEALED_CLASSES
#pragma push_macro("STATIC_INTERFACE_METHODS")
#undef STATIC_INTERFACE_METHODS
#pragma push_macro("STATIC_INTERFACE_METHODS_INVOKE")
#undef STATIC_INTERFACE_METHODS_INVOKE
#pragma push_macro("STRICT_METHOD_CLASH_CHECK")
#undef STRICT_METHOD_CLASH_CHECK
#pragma push_macro("SWITCH_EXPRESSION")
#undef SWITCH_EXPRESSION
#pragma push_macro("SWITCH_MULTIPLE_CASE_LABELS")
#undef SWITCH_MULTIPLE_CASE_LABELS
#pragma push_macro("SWITCH_RULE")
#undef SWITCH_RULE
#pragma push_macro("TEXT_BLOCKS")
#undef TEXT_BLOCKS
#pragma push_macro("TYPE_ANNOTATIONS")
#undef TYPE_ANNOTATIONS
#pragma push_macro("UNDERSCORE_IDENTIFIER")
#undef UNDERSCORE_IDENTIFIER
#pragma push_macro("VAR_SYNTAX_IMPLICIT_LAMBDAS")
#undef VAR_SYNTAX_IMPLICIT_LAMBDAS

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Source;
					class Source$Feature$DiagKind;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class JCDiagnostic$Error;
					class JCDiagnostic$Fragment;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Source$Feature : public ::java::lang::Enum {
	$class(Source$Feature, 0, ::java::lang::Enum)
public:
	Source$Feature();
	static $Array<::com::sun::tools::javac::code::Source$Feature>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Source* minLevel);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Source* minLevel, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* optFragment, ::com::sun::tools::javac::code::Source$Feature$DiagKind* optKind);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Source* minLevel, ::com::sun::tools::javac::code::Source* maxLevel);
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::tools::javac::code::Source* minLevel, ::com::sun::tools::javac::code::Source* maxLevel, ::com::sun::tools::javac::util::JCDiagnostic$Fragment* optFragment, ::com::sun::tools::javac::code::Source$Feature$DiagKind* optKind);
	virtual bool allowedInSource(::com::sun::tools::javac::code::Source* source);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Error* error($String* sourceName);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* fragment($String* sourceName);
	virtual bool isPlural();
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Fragment* nameFragment();
	static ::com::sun::tools::javac::code::Source$Feature* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Source$Feature>* values();
	static ::com::sun::tools::javac::code::Source$Feature* DIAMOND;
	static ::com::sun::tools::javac::code::Source$Feature* MODULES;
	static ::com::sun::tools::javac::code::Source$Feature* EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES;
	static ::com::sun::tools::javac::code::Source$Feature* DEPRECATION_ON_IMPORT;
	static ::com::sun::tools::javac::code::Source$Feature* POLY;
	static ::com::sun::tools::javac::code::Source$Feature* LAMBDA;
	static ::com::sun::tools::javac::code::Source$Feature* METHOD_REFERENCES;
	static ::com::sun::tools::javac::code::Source$Feature* DEFAULT_METHODS;
	static ::com::sun::tools::javac::code::Source$Feature* STATIC_INTERFACE_METHODS;
	static ::com::sun::tools::javac::code::Source$Feature* STATIC_INTERFACE_METHODS_INVOKE;
	static ::com::sun::tools::javac::code::Source$Feature* STRICT_METHOD_CLASH_CHECK;
	static ::com::sun::tools::javac::code::Source$Feature* EFFECTIVELY_FINAL_IN_INNER_CLASSES;
	static ::com::sun::tools::javac::code::Source$Feature* TYPE_ANNOTATIONS;
	static ::com::sun::tools::javac::code::Source$Feature* ANNOTATIONS_AFTER_TYPE_PARAMS;
	static ::com::sun::tools::javac::code::Source$Feature* REPEATED_ANNOTATIONS;
	static ::com::sun::tools::javac::code::Source$Feature* INTERSECTION_TYPES_IN_CAST;
	static ::com::sun::tools::javac::code::Source$Feature* GRAPH_INFERENCE;
	static ::com::sun::tools::javac::code::Source$Feature* FUNCTIONAL_INTERFACE_MOST_SPECIFIC;
	static ::com::sun::tools::javac::code::Source$Feature* POST_APPLICABILITY_VARARGS_ACCESS_CHECK;
	static ::com::sun::tools::javac::code::Source$Feature* MAP_CAPTURES_TO_BOUNDS;
	static ::com::sun::tools::javac::code::Source$Feature* PRIVATE_SAFE_VARARGS;
	static ::com::sun::tools::javac::code::Source$Feature* DIAMOND_WITH_ANONYMOUS_CLASS_CREATION;
	static ::com::sun::tools::javac::code::Source$Feature* UNDERSCORE_IDENTIFIER;
	static ::com::sun::tools::javac::code::Source$Feature* PRIVATE_INTERFACE_METHODS;
	static ::com::sun::tools::javac::code::Source$Feature* LOCAL_VARIABLE_TYPE_INFERENCE;
	static ::com::sun::tools::javac::code::Source$Feature* VAR_SYNTAX_IMPLICIT_LAMBDAS;
	static ::com::sun::tools::javac::code::Source$Feature* IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES;
	static ::com::sun::tools::javac::code::Source$Feature* SWITCH_MULTIPLE_CASE_LABELS;
	static ::com::sun::tools::javac::code::Source$Feature* SWITCH_RULE;
	static ::com::sun::tools::javac::code::Source$Feature* SWITCH_EXPRESSION;
	static ::com::sun::tools::javac::code::Source$Feature* TEXT_BLOCKS;
	static ::com::sun::tools::javac::code::Source$Feature* PATTERN_MATCHING_IN_INSTANCEOF;
	static ::com::sun::tools::javac::code::Source$Feature* REIFIABLE_TYPES_INSTANCEOF;
	static ::com::sun::tools::javac::code::Source$Feature* RECORDS;
	static ::com::sun::tools::javac::code::Source$Feature* SEALED_CLASSES;
	static ::com::sun::tools::javac::code::Source$Feature* CASE_NULL;
	static ::com::sun::tools::javac::code::Source$Feature* PATTERN_SWITCH;
	static ::com::sun::tools::javac::code::Source$Feature* REDUNDANT_STRICTFP;
	static $Array<::com::sun::tools::javac::code::Source$Feature>* $VALUES;
	::com::sun::tools::javac::code::Source* minLevel = nullptr;
	::com::sun::tools::javac::code::Source* maxLevel = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Fragment* optFragment = nullptr;
	::com::sun::tools::javac::code::Source$Feature$DiagKind* optKind = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANNOTATIONS_AFTER_TYPE_PARAMS")
#pragma pop_macro("CASE_NULL")
#pragma pop_macro("DEFAULT_METHODS")
#pragma pop_macro("DEPRECATION_ON_IMPORT")
#pragma pop_macro("DIAMOND")
#pragma pop_macro("DIAMOND_WITH_ANONYMOUS_CLASS_CREATION")
#pragma pop_macro("EFFECTIVELY_FINAL_IN_INNER_CLASSES")
#pragma pop_macro("EFFECTIVELY_FINAL_VARIABLES_IN_TRY_WITH_RESOURCES")
#pragma pop_macro("FUNCTIONAL_INTERFACE_MOST_SPECIFIC")
#pragma pop_macro("GRAPH_INFERENCE")
#pragma pop_macro("IMPORT_ON_DEMAND_OBSERVABLE_PACKAGES")
#pragma pop_macro("INTERSECTION_TYPES_IN_CAST")
#pragma pop_macro("LAMBDA")
#pragma pop_macro("LOCAL_VARIABLE_TYPE_INFERENCE")
#pragma pop_macro("MAP_CAPTURES_TO_BOUNDS")
#pragma pop_macro("METHOD_REFERENCES")
#pragma pop_macro("MODULES")
#pragma pop_macro("PATTERN_MATCHING_IN_INSTANCEOF")
#pragma pop_macro("PATTERN_SWITCH")
#pragma pop_macro("POLY")
#pragma pop_macro("POST_APPLICABILITY_VARARGS_ACCESS_CHECK")
#pragma pop_macro("PRIVATE_INTERFACE_METHODS")
#pragma pop_macro("PRIVATE_SAFE_VARARGS")
#pragma pop_macro("RECORDS")
#pragma pop_macro("REDUNDANT_STRICTFP")
#pragma pop_macro("REIFIABLE_TYPES_INSTANCEOF")
#pragma pop_macro("REPEATED_ANNOTATIONS")
#pragma pop_macro("SEALED_CLASSES")
#pragma pop_macro("STATIC_INTERFACE_METHODS")
#pragma pop_macro("STATIC_INTERFACE_METHODS_INVOKE")
#pragma pop_macro("STRICT_METHOD_CLASH_CHECK")
#pragma pop_macro("SWITCH_EXPRESSION")
#pragma pop_macro("SWITCH_MULTIPLE_CASE_LABELS")
#pragma pop_macro("SWITCH_RULE")
#pragma pop_macro("TEXT_BLOCKS")
#pragma pop_macro("TYPE_ANNOTATIONS")
#pragma pop_macro("UNDERSCORE_IDENTIFIER")
#pragma pop_macro("VAR_SYNTAX_IMPLICIT_LAMBDAS")

#endif // _com_sun_tools_javac_code_Source$Feature_h_