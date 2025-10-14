#ifndef _com_sun_tools_javac_util_DefinedBy$Api_h_
#define _com_sun_tools_javac_util_DefinedBy$Api_h_
//$ class com.sun.tools.javac.util.DefinedBy$Api
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANNOTATION_PROCESSING")
#undef ANNOTATION_PROCESSING
#pragma push_macro("COMPILER")
#undef COMPILER
#pragma push_macro("COMPILER_TREE")
#undef COMPILER_TREE
#pragma push_macro("LANGUAGE_MODEL")
#undef LANGUAGE_MODEL

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import DefinedBy$Api : public ::java::lang::Enum {
	$class(DefinedBy$Api, 0, ::java::lang::Enum)
public:
	DefinedBy$Api();
	static $Array<::com::sun::tools::javac::util::DefinedBy$Api>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* packageRoot);
	static ::com::sun::tools::javac::util::DefinedBy$Api* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::DefinedBy$Api>* values();
	static ::com::sun::tools::javac::util::DefinedBy$Api* ANNOTATION_PROCESSING;
	static ::com::sun::tools::javac::util::DefinedBy$Api* COMPILER;
	static ::com::sun::tools::javac::util::DefinedBy$Api* COMPILER_TREE;
	static ::com::sun::tools::javac::util::DefinedBy$Api* LANGUAGE_MODEL;
	static $Array<::com::sun::tools::javac::util::DefinedBy$Api>* $VALUES;
	$String* packageRoot = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANNOTATION_PROCESSING")
#pragma pop_macro("COMPILER")
#pragma pop_macro("COMPILER_TREE")
#pragma pop_macro("LANGUAGE_MODEL")

#endif // _com_sun_tools_javac_util_DefinedBy$Api_h_