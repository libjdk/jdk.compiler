#ifndef _com_sun_tools_javac_api_JavacTaskImpl$2_h_
#define _com_sun_tools_javac_api_JavacTaskImpl$2_h_
//$ class com.sun.tools.javac.api.JavacTaskImpl$2
//$ extends com.sun.tools.javac.api.JavacTaskImpl$Filter

#include <com/sun/tools/javac/api/JavacTaskImpl$Filter.h>

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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ListBuffer;
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

class JavacTaskImpl$2 : public ::com::sun::tools::javac::api::JavacTaskImpl$Filter {
	$class(JavacTaskImpl$2, $NO_CLASS_INIT, ::com::sun::tools::javac::api::JavacTaskImpl$Filter)
public:
	JavacTaskImpl$2();
	void init$(::com::sun::tools::javac::api::JavacTaskImpl* this$0, ::com::sun::tools::javac::util::ListBuffer* val$results);
	virtual void process(::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::api::JavacTaskImpl* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$results = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTaskImpl$2_h_