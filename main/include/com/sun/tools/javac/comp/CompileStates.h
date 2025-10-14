#ifndef _com_sun_tools_javac_comp_CompileStates_h_
#define _com_sun_tools_javac_comp_CompileStates_h_
//$ class com.sun.tools.javac.comp.CompileStates
//$ extends java.util.HashMap

#include <java/util/HashMap.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class CompileStates$CompileState;
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
					class Context;
					class Context$Key;
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

class $import CompileStates : public ::java::util::HashMap {
	$class(CompileStates, 0, ::java::util::HashMap)
public:
	CompileStates();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::comp::CompileStates* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isDone(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::comp::CompileStates$CompileState* cs);
	static ::com::sun::tools::javac::util::Context$Key* compileStatesKey;
	static const int64_t serialVersionUID = (int64_t)0x192677B61E5DDCF1;
	::com::sun::tools::javac::util::Context* context = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_CompileStates_h_