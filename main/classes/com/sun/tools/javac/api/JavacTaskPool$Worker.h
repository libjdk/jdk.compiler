#ifndef _com_sun_tools_javac_api_JavacTaskPool$Worker_h_
#define _com_sun_tools_javac_api_JavacTaskPool$Worker_h_
//$ interface com.sun.tools.javac.api.JavacTaskPool$Worker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export JavacTaskPool$Worker : public ::java::lang::Object {
	$interface(JavacTaskPool$Worker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* withTask(::com::sun::source::util::JavacTask* task) {return nullptr;}
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskPool$Worker_h_