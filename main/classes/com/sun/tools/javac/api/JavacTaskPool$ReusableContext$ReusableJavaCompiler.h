#ifndef _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableJavaCompiler_h_
#define _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableJavaCompiler_h_
//$ class com.sun.tools.javac.api.JavacTaskPool$ReusableContext$ReusableJavaCompiler
//$ extends com.sun.tools.javac.main.JavaCompiler

#include <com/sun/tools/javac/main/JavaCompiler.h>

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

class $export JavacTaskPool$ReusableContext$ReusableJavaCompiler : public ::com::sun::tools::javac::main::JavaCompiler {
	$class(JavacTaskPool$ReusableContext$ReusableJavaCompiler, 0, ::com::sun::tools::javac::main::JavaCompiler)
public:
	JavacTaskPool$ReusableContext$ReusableJavaCompiler();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void checkReusable() override;
	virtual void clear();
	virtual void close() override;
	static ::com::sun::tools::javac::util::Context$Factory* factory;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskPool$ReusableContext$ReusableJavaCompiler_h_