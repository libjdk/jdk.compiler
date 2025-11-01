#ifndef _com_sun_tools_javac_tree_DCTree$DCUnknownInlineTag_h_
#define _com_sun_tools_javac_tree_DCTree$DCUnknownInlineTag_h_
//$ class com.sun.tools.javac.tree.DCTree$DCUnknownInlineTag
//$ extends com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ implements com.sun.source.doctree.UnknownInlineTagTree

#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
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

class $import DCTree$DCUnknownInlineTag : public ::com::sun::tools::javac::tree::DCTree$DCInlineTag, public ::com::sun::source::doctree::UnknownInlineTagTree {
	$class(DCTree$DCUnknownInlineTag, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCInlineTag, ::com::sun::source::doctree::UnknownInlineTagTree)
public:
	DCTree$DCUnknownInlineTag();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::lang::model::element::Name* name, ::java::util::List* content);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getContent() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* getTagName() override;
	virtual $String* toString() override;
	::javax::lang::model::element::Name* name = nullptr;
	::java::util::List* content = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCUnknownInlineTag_h_