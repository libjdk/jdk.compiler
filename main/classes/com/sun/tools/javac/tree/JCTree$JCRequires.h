#ifndef _com_sun_tools_javac_tree_JCTree$JCRequires_h_
#define _com_sun_tools_javac_tree_JCTree$JCRequires_h_
//$ class com.sun.tools.javac.tree.JCTree$JCRequires
//$ extends com.sun.tools.javac.tree.JCTree$JCDirective
//$ implements com.sun.source.tree.RequiresTree

#include <com/sun/source/tree/RequiresTree.h>
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
				namespace code {
					class Directive$RequiresDirective;
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

class $export JCTree$JCRequires : public ::com::sun::tools::javac::tree::JCTree$JCDirective, public ::com::sun::source::tree::RequiresTree {
	$class(JCTree$JCRequires, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCDirective, ::com::sun::source::tree::RequiresTree)
public:
	JCTree$JCRequires();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool isTransitive, bool isStaticPhase, ::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getModuleName() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual bool isStatic() override;
	virtual bool isTransitive() override;
	virtual $String* toString() override;
	bool isTransitive$ = false;
	bool isStaticPhase = false;
	::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName = nullptr;
	::com::sun::tools::javac::code::Directive$RequiresDirective* directive = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCRequires_h_