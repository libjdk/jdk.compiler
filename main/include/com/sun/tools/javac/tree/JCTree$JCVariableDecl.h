#ifndef _com_sun_tools_javac_tree_JCTree$JCVariableDecl_h_
#define _com_sun_tools_javac_tree_JCTree$JCVariableDecl_h_
//$ class com.sun.tools.javac.tree.JCTree$JCVariableDecl
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.VariableTree

#include <com/sun/source/tree/VariableTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class ModifiersTree;
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
					class Symbol$VarSymbol;
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
					class JCTree;
					class JCTree$JCExpression;
					class JCTree$JCModifiers;
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
				namespace util {
					class Name;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCVariableDecl : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::VariableTree {
	$class(JCTree$JCVariableDecl, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::VariableTree)
public:
	JCTree$JCVariableDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype, ::com::sun::tools::javac::tree::JCTree$JCExpression* init, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym);
	void init$(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype, ::com::sun::tools::javac::tree::JCTree$JCExpression* init, ::com::sun::tools::javac::code::Symbol$VarSymbol* sym, bool declaredUsingVar);
	void init$(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::tree::JCTree$JCExpression* nameexpr, ::com::sun::tools::javac::tree::JCTree$JCExpression* vartype);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual bool declaredUsingVar();
	virtual ::com::sun::source::tree::ExpressionTree* getInitializer() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ModifiersTree* getModifiers() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual ::com::sun::source::tree::ExpressionTree* getNameExpression() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getType() override;
	virtual bool isImplicitlyTyped();
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCModifiers* mods = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* nameexpr = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* vartype = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* init = nullptr;
	::com::sun::tools::javac::code::Symbol$VarSymbol* sym = nullptr;
	int32_t startPos = 0;
	bool declaredUsingVar$ = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCVariableDecl_h_