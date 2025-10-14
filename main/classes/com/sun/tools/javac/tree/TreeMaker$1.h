#ifndef _com_sun_tools_javac_tree_TreeMaker$1_h_
#define _com_sun_tools_javac_tree_TreeMaker$1_h_
//$ class com.sun.tools.javac.tree.TreeMaker$1
//$ extends com.sun.tools.javac.tree.JCTree$JCNewClass

#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCClassDecl;
					class JCTree$JCExpression;
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

class TreeMaker$1 : public ::com::sun::tools::javac::tree::JCTree$JCNewClass {
	$class(TreeMaker$1, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCNewClass)
public:
	TreeMaker$1();
	void init$(::com::sun::tools::javac::tree::TreeMaker* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* encl, ::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* def);
	virtual bool classDeclRemoved() override;
	::com::sun::tools::javac::tree::TreeMaker* this$0 = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeMaker$1_h_