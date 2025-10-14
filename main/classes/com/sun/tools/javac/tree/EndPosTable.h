#ifndef _com_sun_tools_javac_tree_EndPosTable_h_
#define _com_sun_tools_javac_tree_EndPosTable_h_
//$ interface com.sun.tools.javac.tree.EndPosTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
				namespace tree {

class $export EndPosTable : public ::java::lang::Object {
	$interface(EndPosTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getEndPos(::com::sun::tools::javac::tree::JCTree* tree) {return 0;}
	virtual int32_t replaceTree(::com::sun::tools::javac::tree::JCTree* oldtree, ::com::sun::tools::javac::tree::JCTree* newtree) {return 0;}
	virtual void storeEnd(::com::sun::tools::javac::tree::JCTree* tree, int32_t endpos) {}
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_EndPosTable_h_