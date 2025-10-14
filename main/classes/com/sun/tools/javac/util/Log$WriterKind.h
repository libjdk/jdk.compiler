#ifndef _com_sun_tools_javac_util_Log$WriterKind_h_
#define _com_sun_tools_javac_util_Log$WriterKind_h_
//$ class com.sun.tools.javac.util.Log$WriterKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("NOTICE")
#undef NOTICE
#pragma push_macro("STDERR")
#undef STDERR
#pragma push_macro("STDOUT")
#undef STDOUT
#pragma push_macro("WARNING")
#undef WARNING

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Log$WriterKind : public ::java::lang::Enum {
	$class(Log$WriterKind, 0, ::java::lang::Enum)
public:
	Log$WriterKind();
	static $Array<::com::sun::tools::javac::util::Log$WriterKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::tools::javac::util::Log$WriterKind* valueOf($String* name);
	static $Array<::com::sun::tools::javac::util::Log$WriterKind>* values();
	static ::com::sun::tools::javac::util::Log$WriterKind* NOTICE;
	static ::com::sun::tools::javac::util::Log$WriterKind* WARNING;
	static ::com::sun::tools::javac::util::Log$WriterKind* ERROR;
	static ::com::sun::tools::javac::util::Log$WriterKind* STDOUT;
	static ::com::sun::tools::javac::util::Log$WriterKind* STDERR;
	static $Array<::com::sun::tools::javac::util::Log$WriterKind>* $VALUES;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ERROR")
#pragma pop_macro("NOTICE")
#pragma pop_macro("STDERR")
#pragma pop_macro("STDOUT")
#pragma pop_macro("WARNING")

#endif // _com_sun_tools_javac_util_Log$WriterKind_h_