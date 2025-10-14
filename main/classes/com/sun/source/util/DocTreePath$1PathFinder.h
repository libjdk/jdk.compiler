#ifndef _com_sun_source_util_DocTreePath$1PathFinder_h_
#define _com_sun_source_util_DocTreePath$1PathFinder_h_
//$ class com.sun.source.util.DocTreePath$1PathFinder
//$ extends com.sun.source.util.DocTreePathScanner

#include <com/sun/source/util/DocTreePathScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class DocTreePath;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class DocTreePath$1PathFinder : public ::com::sun::source::util::DocTreePathScanner {
	$class(DocTreePath$1PathFinder, $NO_CLASS_INIT, ::com::sun::source::util::DocTreePathScanner)
public:
	DocTreePath$1PathFinder();
	void init$();
	using ::com::sun::source::util::DocTreePathScanner::scan;
	virtual ::com::sun::source::util::DocTreePath* scan(::com::sun::source::doctree::DocTree* tree, ::com::sun::source::doctree::DocTree* target);
	virtual $Object* scan(::com::sun::source::doctree::DocTree* tree, Object$* target) override;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTreePath$1PathFinder_h_