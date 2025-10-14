#ifndef _com_sun_source_util_TreePath_h_
#define _com_sun_source_util_TreePath_h_
//$ class com.sun.source.util.TreePath
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
				class Tree;
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import TreePath : public ::java::lang::Iterable {
	$class(TreePath, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	TreePath();
	void init$(::com::sun::source::tree::CompilationUnitTree* node);
	void init$(::com::sun::source::util::TreePath* path, ::com::sun::source::tree::Tree* tree);
	virtual ::com::sun::source::tree::CompilationUnitTree* getCompilationUnit();
	virtual ::com::sun::source::tree::Tree* getLeaf();
	virtual ::com::sun::source::util::TreePath* getParentPath();
	static ::com::sun::source::util::TreePath* getPath(::com::sun::source::tree::CompilationUnitTree* unit, ::com::sun::source::tree::Tree* target);
	static ::com::sun::source::util::TreePath* getPath(::com::sun::source::util::TreePath* path, ::com::sun::source::tree::Tree* target);
	virtual ::java::util::Iterator* iterator() override;
	::com::sun::source::tree::CompilationUnitTree* compilationUnit = nullptr;
	::com::sun::source::tree::Tree* leaf = nullptr;
	::com::sun::source::util::TreePath* parent = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_TreePath_h_