#ifndef _com_sun_tools_javac_tree_JCTree$JCDefaultCaseLabel_h_
#define _com_sun_tools_javac_tree_JCTree$JCDefaultCaseLabel_h_
//$ class com.sun.tools.javac.tree.JCTree$JCDefaultCaseLabel
//$ extends com.sun.tools.javac.tree.JCTree$JCCaseLabel
//$ implements com.sun.source.tree.DefaultCaseLabelTree

#include <com/sun/source/tree/DefaultCaseLabelTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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

class $export JCTree$JCDefaultCaseLabel : public ::com::sun::tools::javac::tree::JCTree$JCCaseLabel, public ::com::sun::source::tree::DefaultCaseLabelTree {
	$class(JCTree$JCDefaultCaseLabel, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCCaseLabel, ::com::sun::source::tree::DefaultCaseLabelTree)
public:
	JCTree$JCDefaultCaseLabel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual bool isExpression() override;
	virtual bool isPattern() override;
	virtual $String* toString() override;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCDefaultCaseLabel_h_