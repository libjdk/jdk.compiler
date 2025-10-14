#ifndef _com_sun_tools_javac_jvm_Gen$1_h_
#define _com_sun_tools_javac_jvm_Gen$1_h_
//$ class com.sun.tools.javac.jvm.Gen$1
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <java/lang/Array.h>

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
					class JCTree$JCClassDecl;
					class JCTree$JCLambda;
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

class Gen$1 : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Gen$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Gen$1();
	void init$(::com::sun::tools::javac::jvm::Gen* this$0, $booleans* val$hasTry);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	::com::sun::tools::javac::jvm::Gen* this$0 = nullptr;
	$booleans* val$hasTry = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_Gen$1_h_