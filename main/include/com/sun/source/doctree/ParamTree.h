#ifndef _com_sun_source_doctree_ParamTree_h_
#define _com_sun_source_doctree_ParamTree_h_
//$ interface com.sun.source.doctree.ParamTree
//$ extends com.sun.source.doctree.BlockTagTree

#include <com/sun/source/doctree/BlockTagTree.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class IdentifierTree;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import ParamTree : public ::com::sun::source::doctree::BlockTagTree {
	$interface(ParamTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree)
public:
	virtual ::java::util::List* getDescription() {return nullptr;}
	virtual ::com::sun::source::doctree::IdentifierTree* getName() {return nullptr;}
	virtual bool isTypeParameter() {return false;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ParamTree_h_