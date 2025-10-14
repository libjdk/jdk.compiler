#ifndef _com_sun_tools_javac_tree_TreeInfo$1DiagScanner_h_
#define _com_sun_tools_javac_tree_TreeInfo$1DiagScanner_h_
//$ class com.sun.tools.javac.tree.TreeInfo$1DiagScanner
//$ extends com.sun.tools.javac.tree.TreeInfo$DeclScanner

#include <com/sun/tools/javac/tree/TreeInfo$DeclScanner.h>

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
				namespace tree {
					class JCTree$JCFieldAccess;
					class JCTree$JCIdent;
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

class TreeInfo$1DiagScanner : public ::com::sun::tools::javac::tree::TreeInfo$DeclScanner {
	$class(TreeInfo$1DiagScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeInfo$DeclScanner)
public:
	TreeInfo$1DiagScanner();
	void init$(::com::sun::tools::javac::code::Symbol* sym);
	using ::com::sun::tools::javac::tree::TreeInfo$DeclScanner::scan;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* that) override;
	virtual void visitSelect(::com::sun::tools::javac::tree::JCTree$JCFieldAccess* that) override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$1DiagScanner_h_