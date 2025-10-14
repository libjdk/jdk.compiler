#ifndef _com_sun_source_doctree_DocTree_h_
#define _com_sun_source_doctree_DocTree_h_
//$ interface com.sun.source.doctree.DocTree
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import DocTree : public ::java::lang::Object {
	$interface(DocTree, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* visitor, Object$* data) {return nullptr;}
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_DocTree_h_