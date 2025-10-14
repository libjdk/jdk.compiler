#ifndef _com_sun_tools_javac_util_Log$PrefixKind_h_
#define _com_sun_tools_javac_util_Log$PrefixKind_h_
//$ class com.sun.tools.javac.util.Log$PrefixKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("COMPILER_MISC")
#undef COMPILER_MISC
#pragma push_macro("JAVAC")
#undef JAVAC

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Log$PrefixKind : public ::java::lang::Enum {
	$class(Log$PrefixKind, 0, ::java::lang::Enum)
public:
	Log$PrefixKind();
	static $Array<::com::sun::tools::javac::util::Log$PrefixKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* v);
	virtual $String* key($String* k);
	static ::com::sun::tools::javac::util::Log$PrefixKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::Log$PrefixKind>* values();
	static ::com::sun::tools::javac::util::Log$PrefixKind* JAVAC;
	static ::com::sun::tools::javac::util::Log$PrefixKind* COMPILER_MISC;
	static $Array<::com::sun::tools::javac::util::Log$PrefixKind>* $VALUES;
	$String* value = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("COMPILER_MISC")
#pragma pop_macro("JAVAC")

#endif // _com_sun_tools_javac_util_Log$PrefixKind_h_