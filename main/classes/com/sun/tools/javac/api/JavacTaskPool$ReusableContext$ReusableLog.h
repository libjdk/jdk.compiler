#ifndef _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableLog_h_
#define _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableLog_h_
//$ class com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableLog
//$ extends com.sun.tools.javac.util.Log

#include <com/sun/tools/javac/util/Log.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Factory;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $export JavacTaskPool$ReusableContext$ReusableLog : public ::com::sun::tools::javac::util::Log {
	$class(JavacTaskPool$ReusableContext$ReusableLog, 0, ::com::sun::tools::javac::util::Log)
public:
	JavacTaskPool$ReusableContext$ReusableLog();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void clear();
	static ::com::sun::tools::javac::util::Context$Factory* factory;
	::com::sun::tools::javac::util::Context* context = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableLog_h_