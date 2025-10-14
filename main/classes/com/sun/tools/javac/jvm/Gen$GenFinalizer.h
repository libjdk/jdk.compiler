#ifndef _com_sun_tools_javac_jvm_Gen$GenFinalizer_h_
#define _com_sun_tools_javac_jvm_Gen$GenFinalizer_h_
//$ class com.sun.tools.javac.jvm.Gen$GenFinalizer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Gen;
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

class $export Gen$GenFinalizer : public ::java::lang::Object {
	$class(Gen$GenFinalizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Gen$GenFinalizer();
	void init$(::com::sun::tools::javac::jvm::Gen* this$0);
	virtual void afterBody();
	virtual void gen() {}
	virtual void genLast() {}
	virtual bool hasFinalizer();
	::com::sun::tools::javac::jvm::Gen* this$0 = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$GenFinalizer_h_