#ifndef _com_sun_tools_javac_tree_JCTree$JCSynchronized_h_
#define _com_sun_tools_javac_tree_JCTree$JCSynchronized_h_
//$ class com.sun.tools.javac.tree.JCTree$JCSynchronized
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.SynchronizedTree

#include <com/sun/source/tree/SynchronizedTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
				class ExpressionTree;
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
					class JCTree$JCBlock;
					class JCTree$JCExpression;
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

class $import JCTree$JCSynchronized : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::SynchronizedTree {
	$class(JCTree$JCSynchronized, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::SynchronizedTree)
public:
	JCTree$JCSynchronized();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* lock, ::com::sun::tools::javac::tree::JCTree$JCBlock* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::BlockTree* getBlock() override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* lock = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCBlock* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCSynchronized_h_