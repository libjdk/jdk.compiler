#ifndef _com_sun_source_doctree_AttributeTree_h_
#define _com_sun_source_doctree_AttributeTree_h_
//$ interface com.sun.source.doctree.AttributeTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class AttributeTree$ValueKind;
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
		namespace source {
			namespace doctree {

class $export AttributeTree : public ::com::sun::source::doctree::DocTree {
	$interface(AttributeTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
	virtual ::java::util::List* getValue() {return nullptr;}
	virtual ::com::sun::source::doctree::AttributeTree$ValueKind* getValueKind() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_AttributeTree_h_