#ifndef _com_sun_tools_javac_util_Name$Table_h_
#define _com_sun_tools_javac_util_Name$Table_h_
//$ class com.sun.tools.javac.util.Name$Table
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
					class Names;
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

class $import Name$Table : public ::java::lang::Object {
	$class(Name$Table, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Name$Table();
	using ::java::lang::Object::equals;
	void init$(::com::sun::tools::javac::util::Names* names);
	virtual void dispose() {}
	static bool equals($bytes* bytes1, int32_t offset1, $bytes* bytes2, int32_t offset2, int32_t length);
	virtual ::com::sun::tools::javac::util::Name* fromChars($chars* cs, int32_t start, int32_t len) {return nullptr;}
	virtual ::com::sun::tools::javac::util::Name* fromString($String* s);
	virtual ::com::sun::tools::javac::util::Name* fromUtf($bytes* cs);
	virtual ::com::sun::tools::javac::util::Name* fromUtf($bytes* cs, int32_t start, int32_t len) {return nullptr;}
	static int32_t hashValue($bytes* bytes, int32_t offset, int32_t length);
	::com::sun::tools::javac::util::Names* names = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Name$Table_h_