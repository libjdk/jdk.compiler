#ifndef _com_sun_source_doctree_StartElementTree_h_
#define _com_sun_source_doctree_StartElementTree_h_
//$ interface com.sun.source.doctree.StartElementTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

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

class $import StartElementTree : public ::com::sun::source::doctree::DocTree {
	$interface(StartElementTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual ::java::util::List* getAttributes() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getName() {return nullptr;}
	virtual bool isSelfClosing() {return false;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_StartElementTree_h_