#ifndef _com_sun_tools_javac_util_Name$NameMapper_h_
#define _com_sun_tools_javac_util_Name$NameMapper_h_
//$ interface com.sun.tools.javac.util.Name$NameMapper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Name$NameMapper : public ::java::lang::Object {
	$interface(Name$NameMapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* map($bytes* bytes, int32_t offset, int32_t len) {return nullptr;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Name$NameMapper_h_