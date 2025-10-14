#ifndef _com_sun_source_util_DocTreePath_h_
#define _com_sun_source_util_DocTreePath_h_
//$ class com.sun.source.util.DocTreePath
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
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
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export DocTreePath : public ::java::lang::Iterable {
	$class(DocTreePath, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	DocTreePath();
	void init$(::com::sun::source::util::TreePath* treePath, ::com::sun::source::doctree::DocCommentTree* t);
	void init$(::com::sun::source::util::DocTreePath* p, ::com::sun::source::doctree::DocTree* t);
	virtual ::com::sun::source::doctree::DocCommentTree* getDocComment();
	virtual ::com::sun::source::doctree::DocTree* getLeaf();
	virtual ::com::sun::source::util::DocTreePath* getParentPath();
	static ::com::sun::source::util::DocTreePath* getPath(::com::sun::source::util::TreePath* treePath, ::com::sun::source::doctree::DocCommentTree* doc, ::com::sun::source::doctree::DocTree* target);
	static ::com::sun::source::util::DocTreePath* getPath(::com::sun::source::util::DocTreePath* path, ::com::sun::source::doctree::DocTree* target);
	virtual ::com::sun::source::util::TreePath* getTreePath();
	virtual ::java::util::Iterator* iterator() override;
	::com::sun::source::util::TreePath* treePath = nullptr;
	::com::sun::source::doctree::DocCommentTree* docComment = nullptr;
	::com::sun::source::doctree::DocTree* leaf = nullptr;
	::com::sun::source::util::DocTreePath* parent = nullptr;
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTreePath_h_