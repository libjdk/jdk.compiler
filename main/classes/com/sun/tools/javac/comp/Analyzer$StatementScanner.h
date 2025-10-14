#ifndef _com_sun_tools_javac_comp_Analyzer$StatementScanner_h_
#define _com_sun_tools_javac_comp_Analyzer$StatementScanner_h_
//$ class com.sun.tools.javac.comp.Analyzer$StatementScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Analyzer;
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
				namespace tree {
					class JCTree;
					class JCTree$JCBlock;
					class JCTree$JCClassDecl;
					class JCTree$JCDoWhileLoop;
					class JCTree$JCEnhancedForLoop;
					class JCTree$JCForLoop;
					class JCTree$JCIf;
					class JCTree$JCLambda;
					class JCTree$JCMethodDecl;
					class JCTree$JCSwitch;
					class JCTree$JCTry;
					class JCTree$JCWhileLoop;
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
				namespace comp {

class $export Analyzer$StatementScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Analyzer$StatementScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Analyzer$StatementScanner();
	void init$(::com::sun::tools::javac::comp::Analyzer* this$0, ::com::sun::tools::javac::tree::JCTree* originalTree, ::com::sun::tools::javac::comp::Env* env);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan();
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitDoLoop(::com::sun::tools::javac::tree::JCTree$JCDoWhileLoop* tree) override;
	virtual void visitForLoop(::com::sun::tools::javac::tree::JCTree$JCForLoop* tree) override;
	virtual void visitForeachLoop(::com::sun::tools::javac::tree::JCTree$JCEnhancedForLoop* tree) override;
	virtual void visitIf(::com::sun::tools::javac::tree::JCTree$JCIf* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitSwitch(::com::sun::tools::javac::tree::JCTree$JCSwitch* tree) override;
	virtual void visitTry(::com::sun::tools::javac::tree::JCTree$JCTry* tree) override;
	virtual void visitWhileLoop(::com::sun::tools::javac::tree::JCTree$JCWhileLoop* tree) override;
	::com::sun::tools::javac::comp::Analyzer* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* rewritings = nullptr;
	::com::sun::tools::javac::tree::JCTree* originalTree = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Analyzer$StatementScanner_h_