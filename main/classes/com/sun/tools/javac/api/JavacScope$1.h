#ifndef _com_sun_tools_javac_api_JavacScope$1_h_
#define _com_sun_tools_javac_api_JavacScope$1_h_
//$ class com.sun.tools.javac.api.JavacScope$1
//$ extends com.sun.tools.javac.api.JavacScope

#include <com/sun/tools/javac/api/JavacScope.h>

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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacScope$1 : public ::com::sun::tools::javac::api::JavacScope {
	$class(JavacScope$1, $NO_CLASS_INIT, ::com::sun::tools::javac::api::JavacScope)
public:
	JavacScope$1();
	void init$(::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::api::JavacScope* getEnclosingScope() override;
	virtual ::java::lang::Iterable* getLocalElements() override;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacScope$1_h_