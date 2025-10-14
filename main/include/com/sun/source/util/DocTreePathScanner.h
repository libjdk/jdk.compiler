#ifndef _com_sun_source_util_DocTreePathScanner_h_
#define _com_sun_source_util_DocTreePathScanner_h_
//$ class com.sun.source.util.DocTreePathScanner
//$ extends com.sun.source.util.DocTreeScanner

#include <com/sun/source/util/DocTreeScanner.h>

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

class $import DocTreePathScanner : public ::com::sun::source::util::DocTreeScanner {
	$class(DocTreePathScanner, $NO_CLASS_INIT, ::com::sun::source::util::DocTreeScanner)
public:
	DocTreePathScanner();
	void init$();
	virtual ::com::sun::source::util::DocTreePath* getCurrentPath();
	using ::com::sun::source::util::DocTreeScanner::scan;
	virtual $Object* scan(::com::sun::source::util::DocTreePath* path, Object$* p);
	virtual $Object* scan(::com::sun::source::doctree::DocTree* tree, Object$* p) override;
	::com::sun::source::util::DocTreePath* path = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTreePathScanner_h_