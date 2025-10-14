#ifndef _com_sun_tools_javac_tree_TreeInfo$TypeAnnotationFinder_h_
#define _com_sun_tools_javac_tree_TreeInfo$TypeAnnotationFinder_h_
//$ class com.sun.tools.javac.tree.TreeInfo$TypeAnnotationFinder
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCAnnotation;
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

class TreeInfo$TypeAnnotationFinder : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(TreeInfo$TypeAnnotationFinder, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	TreeInfo$TypeAnnotationFinder();
	void init$();
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void visitAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree) override;
	bool foundTypeAnno = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$TypeAnnotationFinder_h_