#ifndef _com_sun_tools_javac_jvm_Gen$2_h_
#define _com_sun_tools_javac_jvm_Gen$2_h_
//$ class com.sun.tools.javac.jvm.Gen$2
//$ extends com.sun.tools.javac.jvm.Gen$GenFinalizer

#include <com/sun/tools/javac/jvm/Gen$GenFinalizer.h>

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
				namespace jvm {
					class Gen;
					class Items$LocalItem;
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

class Gen$2 : public ::com::sun::tools::javac::jvm::Gen$GenFinalizer {
	$class(Gen$2, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Gen$GenFinalizer)
public:
	Gen$2();
	void init$(::com::sun::tools::javac::jvm::Gen* this$0, ::com::sun::tools::javac::comp::Env* val$syncEnv, ::com::sun::tools::javac::jvm::Items$LocalItem* val$lockVar);
	virtual void gen() override;
	virtual void genLast() override;
	::com::sun::tools::javac::jvm::Gen* this$0 = nullptr;
	::com::sun::tools::javac::jvm::Items$LocalItem* val$lockVar = nullptr;
	::com::sun::tools::javac::comp::Env* val$syncEnv = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$2_h_