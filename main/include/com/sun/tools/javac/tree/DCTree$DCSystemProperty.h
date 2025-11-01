#ifndef _com_sun_tools_javac_tree_DCTree$DCSystemProperty_h_
#define _com_sun_tools_javac_tree_DCTree$DCSystemProperty_h_
//$ class com.sun.tools.javac.tree.DCTree$DCSystemProperty
//$ extends com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ implements com.sun.source.doctree.SystemPropertyTree

#include <com/sun/source/doctree/SystemPropertyTree.h>
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

class $import DCTree$DCSystemProperty : public ::com::sun::tools::javac::tree::DCTree$DCInlineTag, public ::com::sun::source::doctree::SystemPropertyTree {
	$class(DCTree$DCSystemProperty, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCInlineTag, ::com::sun::source::doctree::SystemPropertyTree)
public:
	DCTree$DCSystemProperty();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::javax::lang::model::element::Name* propertyName);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::javax::lang::model::element::Name* getPropertyName() override;
	virtual $String* toString() override;
	::javax::lang::model::element::Name* propertyName = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCSystemProperty_h_