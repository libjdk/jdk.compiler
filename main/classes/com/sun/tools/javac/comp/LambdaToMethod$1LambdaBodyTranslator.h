#ifndef _com_sun_tools_javac_comp_LambdaToMethod$1LambdaBodyTranslator_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$1LambdaBodyTranslator_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$1LambdaBodyTranslator
//$ extends com.sun.tools.javac.tree.TreeTranslator

#include <com/sun/tools/javac/tree/TreeTranslator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class LambdaToMethod;
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
					class JCTree$JCMethodDecl;
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

class LambdaToMethod$1LambdaBodyTranslator : public ::com::sun::tools::javac::tree::TreeTranslator {
	$class(LambdaToMethod$1LambdaBodyTranslator, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeTranslator)
public:
	LambdaToMethod$1LambdaBodyTranslator();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod* this$0, bool val$isTarget_void, ::com::sun::tools::javac::tree::JCTree$JCMethodDecl* val$lambdaMethodDecl);
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitReturn(::com::sun::tools::javac::tree::JCTree$JCReturn* tree) override;
	::com::sun::tools::javac::comp::LambdaToMethod* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* val$lambdaMethodDecl = nullptr;
	bool val$isTarget_void = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$1LambdaBodyTranslator_h_