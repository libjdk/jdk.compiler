#ifndef _com_sun_tools_javac_jvm_Gen$GenContext_h_
#define _com_sun_tools_javac_jvm_Gen$GenContext_h_
//$ class com.sun.tools.javac.jvm.Gen$GenContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Code$Chain;
					class Gen$GenFinalizer;
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
				namespace jvm {

class $export Gen$GenContext : public ::java::lang::Object {
	$class(Gen$GenContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Gen$GenContext();
	void init$();
	virtual void addCont(::com::sun::tools::javac::jvm::Code$Chain* c);
	virtual void addExit(::com::sun::tools::javac::jvm::Code$Chain* c);
	::com::sun::tools::javac::jvm::Code$Chain* exit = nullptr;
	::com::sun::tools::javac::jvm::Code$Chain* cont = nullptr;
	::com::sun::tools::javac::jvm::Gen$GenFinalizer* finalize$ = nullptr;
	bool isSwitch = false;
	::com::sun::tools::javac::util::ListBuffer* gaps = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$GenContext_h_