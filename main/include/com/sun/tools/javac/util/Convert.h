#ifndef _com_sun_tools_javac_util_Convert_h_
#define _com_sun_tools_javac_util_Convert_h_
//$ class com.sun.tools.javac.util.Convert
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
					class Name;
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

class $import Convert : public ::java::lang::Object {
	$class(Convert, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Convert();
	void init$();
	static int32_t chars2utf($chars* src, int32_t sindex, $bytes* dst, int32_t dindex, int32_t len);
	static $bytes* chars2utf($chars* src, int32_t sindex, int32_t len);
	static $bytes* chars2utf($chars* src);
	static ::com::sun::tools::javac::util::List* classCandidates(::com::sun::tools::javac::util::Name* name);
	static ::com::sun::tools::javac::util::List* enclosingCandidates(::com::sun::tools::javac::util::Name* name);
	static $String* escapeUnicode($String* s);
	static bool isPrintableAscii(char16_t ch);
	static ::com::sun::tools::javac::util::Name* packagePart(::com::sun::tools::javac::util::Name* classname);
	static $String* packagePart($String* classname);
	static $String* quote($String* s);
	static $String* quote(char16_t ch);
	static ::com::sun::tools::javac::util::Name* shortName(::com::sun::tools::javac::util::Name* name);
	static $String* shortName($String* name);
	static int32_t string2int($String* s, int32_t radix);
	static int64_t string2long($String* s, int32_t radix);
	static $bytes* string2utf($String* s);
	static int32_t utf2chars($bytes* src, int32_t sindex, $chars* dst, int32_t dindex, int32_t len);
	static $chars* utf2chars($bytes* src, int32_t sindex, int32_t len);
	static $chars* utf2chars($bytes* src);
	static $String* utf2string($bytes* src, int32_t sindex, int32_t len);
	static $String* utf2string($bytes* src);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Convert_h_