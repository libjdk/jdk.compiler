#ifndef _com_sun_source_doctree_ErroneousTree_h_
#define _com_sun_source_doctree_ErroneousTree_h_
//$ interface com.sun.source.doctree.ErroneousTree
//$ extends com.sun.source.doctree.TextTree

#include <com/sun/source/doctree/TextTree.h>

namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export ErroneousTree : public ::com::sun::source::doctree::TextTree {
	$interface(ErroneousTree, $NO_CLASS_INIT, ::com::sun::source::doctree::TextTree)
public:
	virtual ::javax::tools::Diagnostic* getDiagnostic() {return nullptr;}
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ErroneousTree_h_