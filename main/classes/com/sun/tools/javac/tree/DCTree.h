#ifndef _com_sun_tools_javac_tree_DCTree_h_
#define _com_sun_tools_javac_tree_DCTree_h_
//$ class com.sun.tools.javac.tree.DCTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

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
				namespace util {
					class JCDiagnostic$DiagnosticPosition;
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

class $export DCTree : public ::com::sun::source::doctree::DocTree {
	$class(DCTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	DCTree();
	void init$();
	virtual int64_t getSourcePosition(::com::sun::tools::javac::tree::DCTree$DCDocComment* dc);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos(::com::sun::tools::javac::tree::DCTree$DCDocComment* dc);
	virtual $String* toString() override;
	int32_t pos$ = 0;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree_h_