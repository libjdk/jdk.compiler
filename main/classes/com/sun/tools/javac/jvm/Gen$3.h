#ifndef _com_sun_tools_javac_jvm_Gen$3_h_
#define _com_sun_tools_javac_jvm_Gen$3_h_
//$ class com.sun.tools.javac.jvm.Gen$3
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
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCTry;
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

class Gen$3 : public ::com::sun::tools::javac::jvm::Gen$GenFinalizer {
	$class(Gen$3, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::Gen$GenFinalizer)
public:
	Gen$3();
	void init$(::com::sun::tools::javac::jvm::Gen* this$0, ::com::sun::tools::javac::comp::Env* val$tryEnv, ::com::sun::tools::javac::tree::JCTree$JCTry* val$tree, ::com::sun::tools::javac::comp::Env* val$oldEnv);
	virtual void afterBody() override;
	virtual void gen() override;
	virtual void genLast() override;
	virtual bool hasFinalizer() override;
	::com::sun::tools::javac::jvm::Gen* this$0 = nullptr;
	::com::sun::tools::javac::comp::Env* val$oldEnv = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCTry* val$tree = nullptr;
	::com::sun::tools::javac::comp::Env* val$tryEnv = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$3_h_