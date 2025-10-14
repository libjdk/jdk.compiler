#ifndef _com_sun_tools_javac_comp_DeferredAttr$FilterScanner_h_
#define _com_sun_tools_javac_comp_DeferredAttr$FilterScanner_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$FilterScanner
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$FilterScanner : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(DeferredAttr$FilterScanner, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	DeferredAttr$FilterScanner();
	void init$(::java::util::Set* validTags);
	static bool lambda$new$0(::java::util::Set* validTags, ::com::sun::tools::javac::tree::JCTree* t);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	virtual void skip(::com::sun::tools::javac::tree::JCTree* tree);
	::java::util::function::Predicate* treeFilter = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$FilterScanner_h_