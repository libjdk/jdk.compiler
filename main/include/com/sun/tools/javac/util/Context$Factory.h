#ifndef _com_sun_tools_javac_util_Context$Factory_h_
#define _com_sun_tools_javac_util_Context$Factory_h_
//$ interface com.sun.tools.javac.util.Context$Factory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
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

class $import Context$Factory : public ::java::lang::Object {
	$interface(Context$Factory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* make(::com::sun::tools::javac::util::Context* c) {return nullptr;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Context$Factory_h_