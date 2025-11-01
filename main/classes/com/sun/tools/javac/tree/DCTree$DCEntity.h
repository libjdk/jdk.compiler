#ifndef _com_sun_tools_javac_tree_DCTree$DCEntity_h_
#define _com_sun_tools_javac_tree_DCTree$DCEntity_h_
//$ class com.sun.tools.javac.tree.DCTree$DCEntity
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.EntityTree

#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>

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

class $export DCTree$DCEntity : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::EntityTree {
	$class(DCTree$DCEntity, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::EntityTree)
public:
	DCTree$DCEntity();
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

#endif // _com_sun_tools_javac_tree_DCTree$DCEntity_h_