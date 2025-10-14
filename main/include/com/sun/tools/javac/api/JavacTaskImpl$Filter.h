#ifndef _com_sun_tools_javac_api_JavacTaskImpl$Filter_h_
#define _com_sun_tools_javac_api_JavacTaskImpl$Filter_h_
//$ class com.sun.tools.javac.api.JavacTaskImpl$Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class JavacTaskImpl;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Env;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Queue;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacTaskImpl$Filter : public ::java::lang::Object {
	$class(JavacTaskImpl$Filter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavacTaskImpl$Filter();
	void init$(::com::sun::tools::javac::api::JavacTaskImpl* this$0);
	virtual void process(::com::sun::tools::javac::comp::Env* env) {}
	virtual void run(::java::util::Queue* list, ::java::lang::Iterable* elements);
	::com::sun::tools::javac::api::JavacTaskImpl* this$0 = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskImpl$Filter_h_