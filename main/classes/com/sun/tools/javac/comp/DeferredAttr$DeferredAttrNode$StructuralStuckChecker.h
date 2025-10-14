#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Attr$ResultInfo;
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$DeferredAttrNode;
					class DeferredAttr$DeferredType;
					class Env;
					class InferenceContext;
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
					class JCTree$JCConditional;
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCMethodInvocation;
					class JCTree$JCNewClass;
					class JCTree$JCSwitchExpression;
					class JCTree$JCVariableDecl;
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

class $export DeferredAttr$DeferredAttrNode$StructuralStuckChecker : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	DeferredAttr$DeferredAttrNode$StructuralStuckChecker();
	void init$(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* this$1);
	virtual bool canLambdaBodyCompleteNormally(::com::sun::tools::javac::tree::JCTree$JCLambda* tree);
	virtual void check(::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext);
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* lambda$canLambdaBodyCompleteNormally$0(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* vd);
	virtual void visitApply(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree) override;
	virtual void visitConditional(::com::sun::tools::javac::tree::JCTree$JCConditional* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree) override;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode* this$1 = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo = nullptr;
	::com::sun::tools::javac::comp::InferenceContext* inferenceContext = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredAttrNode$StructuralStuckChecker_h_