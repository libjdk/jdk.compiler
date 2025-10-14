#ifndef _com_sun_source_util_TreePath$1PathFinder_h_
#define _com_sun_source_util_TreePath$1PathFinder_h_
//$ class com.sun.source.util.TreePath$1PathFinder
//$ extends com.sun.source.util.TreePathScanner

#include <com/sun/source/util/TreePathScanner.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TreePath;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class TreePath$1PathFinder : public ::com::sun::source::util::TreePathScanner {
	$class(TreePath$1PathFinder, $NO_CLASS_INIT, ::com::sun::source::util::TreePathScanner)
public:
	TreePath$1PathFinder();
	void init$();
	using ::com::sun::source::util::TreePathScanner::scan;
	virtual ::com::sun::source::util::TreePath* scan(::com::sun::source::tree::Tree* tree, ::com::sun::source::tree::Tree* target);
	virtual $Object* scan(::com::sun::source::tree::Tree* tree, Object$* target) override;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TreePath$1PathFinder_h_