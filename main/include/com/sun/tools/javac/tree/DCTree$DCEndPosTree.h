#ifndef _com_sun_tools_javac_tree_DCTree$DCEndPosTree_h_
#define _com_sun_tools_javac_tree_DCTree$DCEndPosTree_h_
//$ class com.sun.tools.javac.tree.DCTree$DCEndPosTree
//$ extends com.sun.tools.javac.tree.DCTree

#include <com/sun/tools/javac/tree/DCTree.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCDocComment;
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

class $import DCTree$DCEndPosTree : public ::com::sun::tools::javac::tree::DCTree {
	$class(DCTree$DCEndPosTree, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree)
public:
	DCTree$DCEndPosTree();
	void init$();
	virtual int32_t getEndPos(::com::sun::tools::javac::tree::DCTree$DCDocComment* dc);
	virtual ::com::sun::tools::javac::tree::DCTree$DCEndPosTree* setEndPos(int32_t endPos);
	int32_t endPos = 0;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCEndPosTree_h_