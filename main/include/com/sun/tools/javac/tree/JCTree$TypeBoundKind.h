#ifndef _com_sun_tools_javac_tree_JCTree$TypeBoundKind_h_
#define _com_sun_tools_javac_tree_JCTree$TypeBoundKind_h_
//$ class com.sun.tools.javac.tree.JCTree$TypeBoundKind
//$ extends com.sun.tools.javac.tree.JCTree

#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class BoundKind;
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
					class JCTree$Tag;
					class JCTree$Visitor;
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

class $import JCTree$TypeBoundKind : public ::com::sun::tools::javac::tree::JCTree {
	$class(JCTree$TypeBoundKind, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree)
public:
	JCTree$TypeBoundKind();
	void init$(::com::sun::tools::javac::code::BoundKind* kind);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	::com::sun::tools::javac::code::BoundKind* kind = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$TypeBoundKind_h_