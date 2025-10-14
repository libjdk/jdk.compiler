#ifndef _com_sun_tools_javac_code_Flags$Flag_h_
#define _com_sun_tools_javac_code_Flags$Flag_h_
//$ class com.sun.tools.javac.code.Flags$Flag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABSTRACT")
#undef ABSTRACT
#pragma push_macro("ACYCLIC")
#undef ACYCLIC
#pragma push_macro("ACYCLIC_ANN")
#undef ACYCLIC_ANN
#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("ANONCONSTR")
#undef ANONCONSTR
#pragma push_macro("ANONCONSTR_BASED")
#undef ANONCONSTR_BASED
#pragma push_macro("AUTOMATIC_MODULE")
#undef AUTOMATIC_MODULE
#pragma push_macro("AUXILIARY")
#undef AUXILIARY
#pragma push_macro("BAD_OVERRIDE")
#undef BAD_OVERRIDE
#pragma push_macro("BLOCK")
#undef BLOCK
#pragma push_macro("BRIDGE")
#undef BRIDGE
#pragma push_macro("CLASH")
#undef CLASH
#pragma push_macro("CLASS_SEEN")
#undef CLASS_SEEN
#pragma push_macro("COMPOUND")
#undef COMPOUND
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("DEPRECATED")
#undef DEPRECATED
#pragma push_macro("DEPRECATED_ANNOTATION")
#undef DEPRECATED_ANNOTATION
#pragma push_macro("DEPRECATED_REMOVAL")
#undef DEPRECATED_REMOVAL
#pragma push_macro("EFFECTIVELY_FINAL")
#undef EFFECTIVELY_FINAL
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("EXISTS")
#undef EXISTS
#pragma push_macro("FINAL")
#undef FINAL
#pragma push_macro("GENERATEDCONSTR")
#undef GENERATEDCONSTR
#pragma push_macro("HASINIT")
#undef HASINIT
#pragma push_macro("HAS_RESOURCE")
#undef HAS_RESOURCE
#pragma push_macro("HYPOTHETICAL")
#undef HYPOTHETICAL
#pragma push_macro("INTERFACE")
#undef INTERFACE
#pragma push_macro("LAMBDA_METHOD")
#undef LAMBDA_METHOD
#pragma push_macro("LOCKED")
#undef LOCKED
#pragma push_macro("MANDATED")
#undef MANDATED
#pragma push_macro("MATCH_BINDING")
#undef MATCH_BINDING
#pragma push_macro("MATCH_BINDING_TO_OUTER")
#undef MATCH_BINDING_TO_OUTER
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("NAME_FILLED")
#undef NAME_FILLED
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("NON_SEALED")
#undef NON_SEALED
#pragma push_macro("NOOUTERTHIS")
#undef NOOUTERTHIS
#pragma push_macro("NOT_IN_PROFILE")
#undef NOT_IN_PROFILE
#pragma push_macro("PARAMETER")
#undef PARAMETER
#pragma push_macro("POTENTIALLY_AMBIGUOUS")
#undef POTENTIALLY_AMBIGUOUS
#pragma push_macro("PREVIEW_API")
#undef PREVIEW_API
#pragma push_macro("PREVIEW_REFLECTIVE")
#undef PREVIEW_REFLECTIVE
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROPRIETARY")
#undef PROPRIETARY
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("RECORD")
#undef RECORD
#pragma push_macro("RECOVERABLE")
#undef RECOVERABLE
#pragma push_macro("SEALED")
#undef SEALED
#pragma push_macro("SIGNATURE_POLYMORPHIC")
#undef SIGNATURE_POLYMORPHIC
#pragma push_macro("SOURCE_SEEN")
#undef SOURCE_SEEN
#pragma push_macro("STATIC")
#undef STATIC
#pragma push_macro("STRICTFP")
#undef STRICTFP
#pragma push_macro("SYNCHRONIZED")
#undef SYNCHRONIZED
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("SYSTEM_MODULE")
#undef SYSTEM_MODULE
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("TRANSIENT")
#undef TRANSIENT
#pragma push_macro("TYPE_TRANSLATED")
#undef TYPE_TRANSLATED
#pragma push_macro("UNATTRIBUTED")
#undef UNATTRIBUTED
#pragma push_macro("UNION")
#undef UNION
#pragma push_macro("VARARGS")
#undef VARARGS
#pragma push_macro("VOLATILE")
#undef VOLATILE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Flags$Flag : public ::java::lang::Enum {
	$class(Flags$Flag, 0, ::java::lang::Enum)
public:
	Flags$Flag();
	static $Array<::com::sun::tools::javac::code::Flags$Flag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int64_t flag);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::code::Flags$Flag* valueOf($String* name);
	static $Array<::com::sun::tools::javac::code::Flags$Flag>* values();
	static ::com::sun::tools::javac::code::Flags$Flag* PUBLIC;
	static ::com::sun::tools::javac::code::Flags$Flag* PRIVATE;
	static ::com::sun::tools::javac::code::Flags$Flag* PROTECTED;
	static ::com::sun::tools::javac::code::Flags$Flag* STATIC;
	static ::com::sun::tools::javac::code::Flags$Flag* FINAL;
	static ::com::sun::tools::javac::code::Flags$Flag* SYNCHRONIZED;
	static ::com::sun::tools::javac::code::Flags$Flag* VOLATILE;
	static ::com::sun::tools::javac::code::Flags$Flag* TRANSIENT;
	static ::com::sun::tools::javac::code::Flags$Flag* NATIVE;
	static ::com::sun::tools::javac::code::Flags$Flag* INTERFACE;
	static ::com::sun::tools::javac::code::Flags$Flag* ABSTRACT;
	static ::com::sun::tools::javac::code::Flags$Flag* DEFAULT;
	static ::com::sun::tools::javac::code::Flags$Flag* STRICTFP;
	static ::com::sun::tools::javac::code::Flags$Flag* BRIDGE;
	static ::com::sun::tools::javac::code::Flags$Flag* SYNTHETIC;
	static ::com::sun::tools::javac::code::Flags$Flag* ANNOTATION;
	static ::com::sun::tools::javac::code::Flags$Flag* DEPRECATED;
	static ::com::sun::tools::javac::code::Flags$Flag* HASINIT;
	static ::com::sun::tools::javac::code::Flags$Flag* BLOCK;
	static ::com::sun::tools::javac::code::Flags$Flag* ENUM;
	static ::com::sun::tools::javac::code::Flags$Flag* MANDATED;
	static ::com::sun::tools::javac::code::Flags$Flag* NOOUTERTHIS;
	static ::com::sun::tools::javac::code::Flags$Flag* EXISTS;
	static ::com::sun::tools::javac::code::Flags$Flag* COMPOUND;
	static ::com::sun::tools::javac::code::Flags$Flag* CLASS_SEEN;
	static ::com::sun::tools::javac::code::Flags$Flag* SOURCE_SEEN;
	static ::com::sun::tools::javac::code::Flags$Flag* LOCKED;
	static ::com::sun::tools::javac::code::Flags$Flag* UNATTRIBUTED;
	static ::com::sun::tools::javac::code::Flags$Flag* ANONCONSTR;
	static ::com::sun::tools::javac::code::Flags$Flag* ACYCLIC;
	static ::com::sun::tools::javac::code::Flags$Flag* PARAMETER;
	static ::com::sun::tools::javac::code::Flags$Flag* VARARGS;
	static ::com::sun::tools::javac::code::Flags$Flag* ACYCLIC_ANN;
	static ::com::sun::tools::javac::code::Flags$Flag* GENERATEDCONSTR;
	static ::com::sun::tools::javac::code::Flags$Flag* HYPOTHETICAL;
	static ::com::sun::tools::javac::code::Flags$Flag* PROPRIETARY;
	static ::com::sun::tools::javac::code::Flags$Flag* UNION;
	static ::com::sun::tools::javac::code::Flags$Flag* EFFECTIVELY_FINAL;
	static ::com::sun::tools::javac::code::Flags$Flag* CLASH;
	static ::com::sun::tools::javac::code::Flags$Flag* AUXILIARY;
	static ::com::sun::tools::javac::code::Flags$Flag* NOT_IN_PROFILE;
	static ::com::sun::tools::javac::code::Flags$Flag* BAD_OVERRIDE;
	static ::com::sun::tools::javac::code::Flags$Flag* SIGNATURE_POLYMORPHIC;
	static ::com::sun::tools::javac::code::Flags$Flag* THROWS;
	static ::com::sun::tools::javac::code::Flags$Flag* LAMBDA_METHOD;
	static ::com::sun::tools::javac::code::Flags$Flag* TYPE_TRANSLATED;
	static ::com::sun::tools::javac::code::Flags$Flag* MODULE;
	static ::com::sun::tools::javac::code::Flags$Flag* AUTOMATIC_MODULE;
	static ::com::sun::tools::javac::code::Flags$Flag* SYSTEM_MODULE;
	static ::com::sun::tools::javac::code::Flags$Flag* DEPRECATED_ANNOTATION;
	static ::com::sun::tools::javac::code::Flags$Flag* DEPRECATED_REMOVAL;
	static ::com::sun::tools::javac::code::Flags$Flag* HAS_RESOURCE;
	static ::com::sun::tools::javac::code::Flags$Flag* POTENTIALLY_AMBIGUOUS;
	static ::com::sun::tools::javac::code::Flags$Flag* ANONCONSTR_BASED;
	static ::com::sun::tools::javac::code::Flags$Flag* NAME_FILLED;
	static ::com::sun::tools::javac::code::Flags$Flag* PREVIEW_API;
	static ::com::sun::tools::javac::code::Flags$Flag* PREVIEW_REFLECTIVE;
	static ::com::sun::tools::javac::code::Flags$Flag* MATCH_BINDING;
	static ::com::sun::tools::javac::code::Flags$Flag* MATCH_BINDING_TO_OUTER;
	static ::com::sun::tools::javac::code::Flags$Flag* RECORD;
	static ::com::sun::tools::javac::code::Flags$Flag* RECOVERABLE;
	static ::com::sun::tools::javac::code::Flags$Flag* SEALED;
	static ::com::sun::tools::javac::code::Flags$Flag* NON_SEALED;
	static $Array<::com::sun::tools::javac::code::Flags$Flag>* $VALUES;
	int64_t value = 0;
	$String* lowercaseName = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ABSTRACT")
#pragma pop_macro("ACYCLIC")
#pragma pop_macro("ACYCLIC_ANN")
#pragma pop_macro("ANNOTATION")
#pragma pop_macro("ANONCONSTR")
#pragma pop_macro("ANONCONSTR_BASED")
#pragma pop_macro("AUTOMATIC_MODULE")
#pragma pop_macro("AUXILIARY")
#pragma pop_macro("BAD_OVERRIDE")
#pragma pop_macro("BLOCK")
#pragma pop_macro("BRIDGE")
#pragma pop_macro("CLASH")
#pragma pop_macro("CLASS_SEEN")
#pragma pop_macro("COMPOUND")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("DEPRECATED")
#pragma pop_macro("DEPRECATED_ANNOTATION")
#pragma pop_macro("DEPRECATED_REMOVAL")
#pragma pop_macro("EFFECTIVELY_FINAL")
#pragma pop_macro("ENUM")
#pragma pop_macro("EXISTS")
#pragma pop_macro("FINAL")
#pragma pop_macro("GENERATEDCONSTR")
#pragma pop_macro("HASINIT")
#pragma pop_macro("HAS_RESOURCE")
#pragma pop_macro("HYPOTHETICAL")
#pragma pop_macro("INTERFACE")
#pragma pop_macro("LAMBDA_METHOD")
#pragma pop_macro("LOCKED")
#pragma pop_macro("MANDATED")
#pragma pop_macro("MATCH_BINDING")
#pragma pop_macro("MATCH_BINDING_TO_OUTER")
#pragma pop_macro("MODULE")
#pragma pop_macro("NAME_FILLED")
#pragma pop_macro("NATIVE")
#pragma pop_macro("NON_SEALED")
#pragma pop_macro("NOOUTERTHIS")
#pragma pop_macro("NOT_IN_PROFILE")
#pragma pop_macro("PARAMETER")
#pragma pop_macro("POTENTIALLY_AMBIGUOUS")
#pragma pop_macro("PREVIEW_API")
#pragma pop_macro("PREVIEW_REFLECTIVE")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROPRIETARY")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("RECORD")
#pragma pop_macro("RECOVERABLE")
#pragma pop_macro("SEALED")
#pragma pop_macro("SIGNATURE_POLYMORPHIC")
#pragma pop_macro("SOURCE_SEEN")
#pragma pop_macro("STATIC")
#pragma pop_macro("STRICTFP")
#pragma pop_macro("SYNCHRONIZED")
#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("SYSTEM_MODULE")
#pragma pop_macro("THROWS")
#pragma pop_macro("TRANSIENT")
#pragma pop_macro("TYPE_TRANSLATED")
#pragma pop_macro("UNATTRIBUTED")
#pragma pop_macro("UNION")
#pragma pop_macro("VARARGS")
#pragma pop_macro("VOLATILE")

#endif // _com_sun_tools_javac_code_Flags$Flag_h_