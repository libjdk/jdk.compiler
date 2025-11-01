#ifndef _com_sun_tools_javac_tree_JCTree$JCGuardPattern_h_
#define _com_sun_tools_javac_tree_JCTree$JCGuardPattern_h_
//$ class com.sun.tools.javac.tree.JCTree$JCGuardPattern
//$ extends com.sun.tools.javac.tree.JCTree$JCPattern
//$ implements com.sun.source.tree.GuardedPatternTree

#include <com/sun/source/tree/GuardedPatternTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ExpressionTree;
				class PatternTree;
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

class $import JCTree$JCGuardPattern : public ::com::sun::tools::javac::tree::JCTree$JCPattern, public ::com::sun::source::tree::GuardedPatternTree {
	$class(JCTree$JCGuardPattern, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPattern, ::com::sun::source::tree::GuardedPatternTree)
public:
	JCTree$JCGuardPattern();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCPattern* patt, ::com::sun::tools::javac::tree::JCTree$JCExpression* expr);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::ExpressionTree* getExpression() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::PatternTree* getPattern() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCPattern* patt = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* expr = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCGuardPattern_h_