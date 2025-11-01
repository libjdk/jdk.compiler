#ifndef _com_sun_tools_javac_tree_JCTree$JCModuleDecl_h_
#define _com_sun_tools_javac_tree_JCTree$JCModuleDecl_h_
//$ class com.sun.tools.javac.tree.JCTree$JCModuleDecl
//$ extends com.sun.tools.javac.tree.JCTree
//$ implements com.sun.source.tree.ModuleTree

#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/tools/javac/tree/JCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class ModuleTree$ModuleKind;
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
					class Symbol$ModuleSymbol;
					class Type$ModuleType;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import JCTree$JCModuleDecl : public ::com::sun::tools::javac::tree::JCTree, public ::com::sun::source::tree::ModuleTree {
	$class(JCTree$JCModuleDecl, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree, ::com::sun::source::tree::ModuleTree)
public:
	JCTree$JCModuleDecl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCModifiers* mods, ::com::sun::source::tree::ModuleTree$ModuleKind* kind, ::com::sun::tools::javac::tree::JCTree$JCExpression* qualId, ::com::sun::tools::javac::util::List* directives);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAnnotations() override;
	virtual ::java::util::List* getDirectives() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ModuleTree$ModuleKind* getModuleType() override;
	virtual ::com::sun::source::tree::ExpressionTree* getName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCModifiers* mods = nullptr;
	::com::sun::tools::javac::code::Type$ModuleType* type = nullptr;
	::com::sun::source::tree::ModuleTree$ModuleKind* kind = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* qualId = nullptr;
	::com::sun::tools::javac::util::List* directives = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* sym = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCModuleDecl_h_