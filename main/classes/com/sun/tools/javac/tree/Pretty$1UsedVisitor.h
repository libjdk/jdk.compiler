#ifndef _com_sun_tools_javac_tree_Pretty$1UsedVisitor_h_
#define _com_sun_tools_javac_tree_Pretty$1UsedVisitor_h_
//$ class com.sun.tools.javac.tree.Pretty$1UsedVisitor
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
				namespace tree {
					class JCTree;
					class JCTree$JCIdent;
					class Pretty;
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

class Pretty$1UsedVisitor : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(Pretty$1UsedVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	Pretty$1UsedVisitor();
	void init$(::com::sun::tools::javac::tree::Pretty* this$0, ::com::sun::tools::javac::code::Symbol* val$t);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitIdent(::com::sun::tools::javac::tree::JCTree$JCIdent* tree) override;
	::com::sun::tools::javac::tree::Pretty* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* val$t = nullptr;
	bool result = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_Pretty$1UsedVisitor_h_