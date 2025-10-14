#ifndef _com_sun_source_util_TreePathScanner_h_
#define _com_sun_source_util_TreePathScanner_h_
//$ class com.sun.source.util.TreePathScanner
//$ extends com.sun.source.util.TreeScanner

#include <com/sun/source/util/TreeScanner.h>

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

class $import TreePathScanner : public ::com::sun::source::util::TreeScanner {
	$class(TreePathScanner, $NO_CLASS_INIT, ::com::sun::source::util::TreeScanner)
public:
	TreePathScanner();
	void init$();
	virtual ::com::sun::source::util::TreePath* getCurrentPath();
	using ::com::sun::source::util::TreeScanner::scan;
	virtual $Object* scan(::com::sun::source::util::TreePath* path, Object$* p);
	virtual $Object* scan(::com::sun::source::tree::Tree* tree, Object$* p) override;
	::com::sun::source::util::TreePath* path = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TreePathScanner_h_