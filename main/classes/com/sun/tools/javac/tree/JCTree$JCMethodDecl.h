#ifndef _com_sun_tools_javac_tree_JCTree$JCMethodDecl_h_
#define _com_sun_tools_javac_tree_JCTree$JCMethodDecl_h_
//$ class com.sun.tools.javac.tree.JCTree$JCMethodDecl
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.MethodTree

#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class BlockTree;
				class ModifiersTree;
				class Tree$Kind;
				class TreeVisitor;
				class VariableTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
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
					class JCTree$JCBlock;
					class JCTree$JCExpression;
					class JCTree$JCModifiers;
					class JCTree$JCVariableDecl;
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

class $export JCTree$JCMethodDecl : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::MethodTree {
	$class(JCTree$JCMethodDecl, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::MethodTree)
public:
	JCTree$JCMethodDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::tree::JCTree$JCExpression* restype, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::tree::JCTree$JCVariableDecl* recvparam, ::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::tree::JCTree$JCBlock* body, ::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue, ::com::sun::tools::javac::code::Symbol$MethodSymbol* sym);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::BlockTree* getBody() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getDefaultValue() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ModifiersTree* getModifiers() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual ::java::util::List* getParameters() override;
	virtual ::com::sun::source::tree::VariableTree* getReceiverParameter() override;
	virtual ::com::sun::tools::javac::tree::JCTree* getReturnType() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getThrows() override;
	virtual ::java::util::List* getTypeParameters() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCModifiers* mods = nullptr;
	::com::sun::tools::javac::util::Name* name = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* restype = nullptr;
	::com::sun::tools::javac::util::List* typarams = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* recvparam = nullptr;
	::com::sun::tools::javac::util::List* params = nullptr;
	::com::sun::tools::javac::util::List* thrown = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCBlock* body = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* sym = nullptr;
	bool completesNormally = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCMethodDecl_h_