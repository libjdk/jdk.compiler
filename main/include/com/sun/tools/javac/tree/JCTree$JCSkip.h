#ifndef _com_sun_tools_javac_tree_JCTree$JCSkip_h_
#define _com_sun_tools_javac_tree_JCTree$JCSkip_h_
//$ class com.sun.tools.javac.tree.JCTree$JCSkip
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.EmptyStatementTree

#include <com/sun/source/tree/EmptyStatementTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

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

class $import JCTree$JCSkip : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::EmptyStatementTree {
	$class(JCTree$JCSkip, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::EmptyStatementTree)
public:
	JCTree$JCSkip();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCSkip_h_