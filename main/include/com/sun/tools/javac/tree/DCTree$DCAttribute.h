#ifndef _com_sun_tools_javac_tree_DCTree$DCAttribute_h_
#define _com_sun_tools_javac_tree_DCTree$DCAttribute_h_
//$ class com.sun.tools.javac.tree.DCTree$DCAttribute
//$ extends com.sun.tools.javac.tree.DCTree
//$ implements com.sun.source.doctree.AttributeTree

#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/tools/javac/tree/DCTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class AttributeTree$ValueKind;
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

class $import DCTree$DCAttribute : public ::com::sun::tools::javac::tree::DCTree, public ::com::sun::source::doctree::AttributeTree {
	$class(DCTree$DCAttribute, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree, ::com::sun::source::doctree::AttributeTree)
public:
	DCTree$DCAttribute();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::lang::model::element::Name* name, ::com::sun::source::doctree::AttributeTree$ValueKind* vkind, ::java::util::List* value);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::javax::lang::model::element::Name* getName() override;
	virtual ::java::util::List* getValue() override;
	virtual ::com::sun::source::doctree::AttributeTree$ValueKind* getValueKind() override;
	virtual $String* toString() override;
	::javax::lang::model::element::Name* name = nullptr;
	::com::sun::source::doctree::AttributeTree$ValueKind* vkind = nullptr;
	::java::util::List* value = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCAttribute_h_