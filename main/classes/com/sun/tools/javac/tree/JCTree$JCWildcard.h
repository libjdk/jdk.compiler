#ifndef _com_sun_tools_javac_tree_JCTree$JCWildcard_h_
#define _com_sun_tools_javac_tree_JCTree$JCWildcard_h_
//$ class com.sun.tools.javac.tree.JCTree$JCWildcard
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.WildcardTree

#include <com/sun/source/tree/WildcardTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

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
				namespace tree {
					class JCTree;
					class JCTree$Tag;
					class JCTree$TypeBoundKind;
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

class $export JCTree$JCWildcard : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::WildcardTree {
	$class(JCTree$JCWildcard, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::WildcardTree)
public:
	JCTree$JCWildcard();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$TypeBoundKind* kind, ::com::sun::tools::javac::tree::JCTree* inner);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::tools::javac::tree::JCTree* getBound() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$TypeBoundKind* kind = nullptr;
	::com::sun::tools::javac::tree::JCTree* inner = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCWildcard_h_