#ifndef _com_sun_tools_javac_comp_Flow$BaseAnalyzer_h_
#define _com_sun_tools_javac_comp_Flow$BaseAnalyzer_h_
//$ class com.sun.tools.javac.comp.Flow$BaseAnalyzer
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Flow$BaseAnalyzer$JumpKind;
					class Flow$BaseAnalyzer$PendingExit;
					class Flow$Liveness;
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
					class JCTree$JCPackageDecl;
					class TreeMaker;
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

class $import Flow$BaseAnalyzer : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Flow$BaseAnalyzer, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Flow$BaseAnalyzer();
	void init$();
	virtual void markDead() {}
	virtual void recordExit(::com::sun::tools::javac::comp::Flow$BaseAnalyzer$PendingExit* pe);
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* resolveBreaks(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::ListBuffer* oldPendingExits);
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* resolveContinues(::com::sun::tools::javac::tree::JCTree* tree);
	::com::sun::tools::javac::comp::Flow$Liveness* resolveJump(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::ListBuffer* oldPendingExits, ::com::sun::tools::javac::comp::Flow$BaseAnalyzer$JumpKind* jk);
	virtual ::com::sun::tools::javac::comp::Flow$Liveness* resolveYields(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::ListBuffer* oldPendingExits);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void scanSyntheticBreak(::com::sun::tools::javac::tree::TreeMaker* make, ::com::sun::tools::javac::tree::JCTree* swtch);
	virtual void visitPackageDef(::com::sun::tools::javac::tree::JCTree$JCPackageDecl* tree) override;
	::com::sun::tools::javac::util::ListBuffer* pendingExits = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Flow$BaseAnalyzer_h_