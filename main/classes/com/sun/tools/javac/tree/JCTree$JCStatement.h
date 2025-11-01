#ifndef _com_sun_tools_javac_tree_JCTree$JCStatement_h_
#define _com_sun_tools_javac_tree_JCTree$JCStatement_h_
//$ class com.sun.tools.javac.tree.JCTree$JCStatement
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.StatementTree

#include <com/sun/source/tree/StatementTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $export JCTree$JCStatement : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::StatementTree {
	$class(JCTree$JCStatement, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::StatementTree)
public:
	JCTree$JCStatement();
	using ::com::sun::tools::javac::tree::JCTree::accept;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* setPos(int32_t pos) override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCStatement* setType(::com::sun::tools::javac::code::Type* type) override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCStatement_h_