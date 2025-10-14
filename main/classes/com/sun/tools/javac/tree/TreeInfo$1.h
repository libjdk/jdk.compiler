#ifndef _com_sun_tools_javac_tree_TreeInfo$1_h_
#define _com_sun_tools_javac_tree_TreeInfo$1_h_
//$ class com.sun.tools.javac.tree.TreeInfo$1
//$ extends com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition

#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class EndPosTable;
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

class TreeInfo$1 : public ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition {
	$class(TreeInfo$1, $NO_CLASS_INIT, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition)
public:
	TreeInfo$1();
	void init$(::com::sun::tools::javac::tree::JCTree* val$tree, int32_t val$endPos);
	virtual int32_t getEndPosition(::com::sun::tools::javac::tree::EndPosTable* endPosTable) override;
	virtual int32_t getPreferredPosition() override;
	virtual int32_t getStartPosition() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getTree() override;
	int32_t val$endPos = 0;
	::com::sun::tools::javac::tree::JCTree* val$tree = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_TreeInfo$1_h_