#ifndef _com_sun_tools_javac_tree_DCTree$DCLiteral_h_
#define _com_sun_tools_javac_tree_DCTree$DCLiteral_h_
//$ class com.sun.tools.javac.tree.DCTree$DCLiteral
//$ extends com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ implements com.sun.source.doctree.LiteralTree

#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
				class TextTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCText;
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

class $import DCTree$DCLiteral : public ::com::sun::tools::javac::tree::DCTree$DCInlineTag, public ::com::sun::source::doctree::LiteralTree {
	$class(DCTree$DCLiteral, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCInlineTag, ::com::sun::source::doctree::LiteralTree)
public:
	DCTree$DCLiteral();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::source::doctree::DocTree$Kind* kind, ::com::sun::tools::javac::tree::DCTree$DCText* body);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::TextTree* getBody() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* toString() override;
	::com::sun::source::doctree::DocTree$Kind* kind = nullptr;
	::com::sun::tools::javac::tree::DCTree$DCText* body = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCLiteral_h_