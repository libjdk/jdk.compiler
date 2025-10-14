#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class DeferredAttr$DeferredAttrNode;
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
					class JCTree$JCNewClass;
					class JCTree$JCReturn;
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

class $import DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* this$1);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* this$1 = nullptr;
	bool isVoidCompatible = false;
	bool isPotentiallyValueCompatible = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker_h_