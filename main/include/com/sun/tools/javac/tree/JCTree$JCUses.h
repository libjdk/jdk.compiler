#ifndef _com_sun_tools_javac_tree_JCTree$JCUses_h_
#define _com_sun_tools_javac_tree_JCTree$JCUses_h_
//$ class com.sun.tools.javac.tree.JCTree$JCUses
//$ extends com.sun.tools.javac.tree.JCTree$JCDirective
//$ implements com.sun.source.tree.UsesTree

#include <com/sun/source/tree/UsesTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCDirective.h>

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

class $import JCTree$JCUses : public ::com::sun::tools::javac::tree::JCTree$JCDirective, public ::com::sun::source::tree::UsesTree {
	$class(JCTree$JCUses, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCDirective, ::com::sun::source::tree::UsesTree)
public:
	JCTree$JCUses();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* qualId);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getServiceName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* qualid = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCUses_h_