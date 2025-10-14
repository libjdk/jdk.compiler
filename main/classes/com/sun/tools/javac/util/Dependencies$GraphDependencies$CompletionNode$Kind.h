#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies$CompletionNode$Kind_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies$CompletionNode$Kind_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("SOURCE")
#undef SOURCE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Dependencies$GraphDependencies$CompletionNode$Kind : public ::java::lang::Enum {
	$class(Dependencies$GraphDependencies$CompletionNode$Kind, 0, ::java::lang::Enum)
public:
	Dependencies$GraphDependencies$CompletionNode$Kind();
	static $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* dotStyle);
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind>* values();
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind* SOURCE;
	static ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind* CLASS;
	static $Array<::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind>* $VALUES;
	$String* dotStyle = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS")
#pragma pop_macro("SOURCE")

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies$CompletionNode$Kind_h_