#ifndef _com_sun_tools_javac_tree_DCTree$DCEndElement_h_
#define _com_sun_tools_javac_tree_DCTree$DCEndElement_h_
//$ class com.sun.tools.javac.tree.DCTree$DCEndElement
//$ extends com.sun.tools.javac.tree.DCTree$DCEndPosTree
//$ implements com.sun.source.doctree.EndElementTree

#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>

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

class $import DCTree$DCEndElement : public ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, public ::com::sun::source::doctree::EndElementTree {
	$class(DCTree$DCEndElement, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, ::com::sun::source::doctree::EndElementTree)
public:
	DCTree$DCEndElement();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::lang::model::element::Name* name);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual $String* toString() override;
	::javax::lang::model::element::Name* name = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCEndElement_h_