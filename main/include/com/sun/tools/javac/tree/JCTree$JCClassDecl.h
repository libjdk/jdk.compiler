#ifndef _com_sun_tools_javac_tree_JCTree$JCClassDecl_h_
#define _com_sun_tools_javac_tree_JCTree$JCClassDecl_h_
//$ class com.sun.tools.javac.tree.JCTree$JCClassDecl
//$ extends com.sun.tools.javac.tree.JCTree$JCStatement
//$ implements com.sun.source.tree.ClassTree

#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ModifiersTree;
				class Tree;
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
					class Symbol$ClassSymbol;
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
					class List;
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class $import JCTree$JCClassDecl : public ::com::sun::tools::javac::tree::JCTree$JCStatement, public ::com::sun::source::tree::ClassTree {
	$class(JCTree$JCClassDecl, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCStatement, ::com::sun::source::tree::ClassTree)
public:
	JCTree$JCClassDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCExpression* extending, ::com::sun::tools::javac::util::List* implementing, ::com::sun::tools::javac::util::List* permitting, ::com::sun::tools::javac::util::List* defs, ::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree* getExtendsClause() override;
	virtual ::java::util::List* getImplementsClause() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::java::util::List* getMembers() override;
	virtual ::com::sun::source::tree::ModifiersTree* getModifiers() override;
	virtual ::java::util::List* getPermitsClause() override;
	virtual ::javax::lang::model::element::Name* getSimpleName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getTypeParameters() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCModifiers* mods = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::util::List* typarams = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* extending = nullptr;
	::com::sun::tools::javac::util::List* implementing = nullptr;
	::com::sun::tools::javac::util::List* permitting = nullptr;
	::com::sun::tools::javac::util::List* defs = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* sym = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCClassDecl_h_