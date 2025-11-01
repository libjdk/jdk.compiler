#ifndef _com_sun_tools_javac_tree_JCTree$JCParenthesizedPattern_h_
#define _com_sun_tools_javac_tree_JCTree$JCParenthesizedPattern_h_
//$ class com.sun.tools.javac.tree.JCTree$JCParenthesizedPattern
//$ extends com.sun.tools.javac.tree.JCTree$JCPattern
//$ implements com.sun.source.tree.ParenthesizedPatternTree

#include <com/sun/source/tree/ParenthesizedPatternTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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

class $import JCTree$JCParenthesizedPattern : public ::com::sun::tools::javac::tree::JCTree$JCPattern, public ::com::sun::source::tree::ParenthesizedPatternTree {
	$class(JCTree$JCParenthesizedPattern, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPattern, ::com::sun::source::tree::ParenthesizedPatternTree)
public:
	JCTree$JCParenthesizedPattern();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCPattern* pattern);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::PatternTree* getPattern() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCPattern* pattern = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCParenthesizedPattern_h_