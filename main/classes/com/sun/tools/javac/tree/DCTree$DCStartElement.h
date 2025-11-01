#ifndef _com_sun_tools_javac_tree_DCTree$DCStartElement_h_
#define _com_sun_tools_javac_tree_DCTree$DCStartElement_h_
//$ class com.sun.tools.javac.tree.DCTree$DCStartElement
//$ extends com.sun.tools.javac.tree.DCTree$DCEndPosTree
//$ implements com.sun.source.doctree.StartElementTree

#include <com/sun/source/doctree/StartElementTree.h>
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

class $export DCTree$DCStartElement : public ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, public ::com::sun::source::doctree::StartElementTree {
	$class(DCTree$DCStartElement, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, ::com::sun::source::doctree::StartElementTree)
public:
	DCTree$DCStartElement();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::lang::model::element::Name* name, ::java::util::List* attrs, bool selfClosing);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getAttributes() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual bool isSelfClosing() override;
	virtual $String* toString() override;
	::javax::lang::model::element::Name* name = nullptr;
	::java::util::List* attrs = nullptr;
	bool selfClosing = false;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCStartElement_h_