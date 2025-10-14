#ifndef _com_sun_tools_javac_api_JavacScope$2_h_
#define _com_sun_tools_javac_api_JavacScope$2_h_
//$ class com.sun.tools.javac.api.JavacScope$2
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

class JavacScope$2 : public ::com::sun::tools::javac::api::JavacScope {
	$class(JavacScope$2, $NO_CLASS_INIT, ::com::sun::tools::javac::api::JavacScope)
public:
	JavacScope$2();
	void init$(::com::sun::tools::javac::api::JavacScope* this$0, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::api::JavacScope* getEnclosingScope() override;
	virtual ::java::lang::Iterable* getLocalElements() override;
	virtual bool isStarImportScope() override;
	::com::sun::tools::javac::api::JavacScope* this$0 = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacScope$2_h_