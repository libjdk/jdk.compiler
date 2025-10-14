#ifndef _com_sun_tools_javac_comp_Lower$AssignopDependencyScanner_h_
#define _com_sun_tools_javac_comp_Lower$AssignopDependencyScanner_h_
//$ class com.sun.tools.javac.comp.Lower$AssignopDependencyScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Lower;
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
					class JCTree$JCAssignOp;
					class JCTree$JCUnary;
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

class $import Lower$AssignopDependencyScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Lower$AssignopDependencyScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Lower$AssignopDependencyScanner();
	void init$(::com::sun::tools::javac::comp::Lower* this$0, ::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitAssignop(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) override;
	virtual void visitUnary(::com::sun::tools::javac::tree::JCTree$JCUnary* tree) override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	bool dependencyFound = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$AssignopDependencyScanner_h_