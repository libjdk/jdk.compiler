#ifndef _com_sun_tools_javac_tree_JCTree$JCTypeCast_h_
#define _com_sun_tools_javac_tree_JCTree$JCTypeCast_h_
//$ class com.sun.tools.javac.tree.JCTree$JCTypeCast
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.TypeCastTree

#include <com/sun/source/tree/TypeCastTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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
					class JCTree;
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

class $export JCTree$JCTypeCast : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::TypeCastTree {
	$class(JCTree$JCTypeCast, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::TypeCastTree)
public:
	JCTree$JCTypeCast();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree* clazz, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getType() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree* clazz = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCTypeCast_h_