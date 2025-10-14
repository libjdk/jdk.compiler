#ifndef _com_sun_tools_javac_tree_TreeInfo$1PathFinder_h_
#define _com_sun_tools_javac_tree_TreeInfo$1PathFinder_h_
//$ class com.sun.tools.javac.tree.TreeInfo$1PathFinder
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
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
					class List;
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

class TreeInfo$1PathFinder : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(TreeInfo$1PathFinder, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	TreeInfo$1PathFinder();
	void init$(::com::sun::tools::javac::tree::JCTree* val$node);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	::com::sun::tools::javac::tree::JCTree* val$node = nullptr;
	::com::sun::tools::javac::util::List* path = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$1PathFinder_h_