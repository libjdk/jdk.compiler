#ifndef _com_sun_tools_javac_tree_JCTree$JCBindingPattern_h_
#define _com_sun_tools_javac_tree_JCTree$JCBindingPattern_h_
//$ class com.sun.tools.javac.tree.JCTree$JCBindingPattern
//$ extends com.sun.tools.javac.tree.JCTree$JCPattern
//$ implements com.sun.source.tree.BindingPatternTree

#include <com/sun/source/tree/BindingPatternTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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
				namespace tree {
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
				namespace tree {

class $export JCTree$JCBindingPattern : public ::com::sun::tools::javac::tree::JCTree$JCPattern, public ::com::sun::source::tree::BindingPatternTree {
	$class(JCTree$JCBindingPattern, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPattern, ::com::sun::source::tree::BindingPatternTree)
public:
	JCTree$JCBindingPattern();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::source::tree::VariableTree* getVariable() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCVariableDecl* var = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCBindingPattern_h_