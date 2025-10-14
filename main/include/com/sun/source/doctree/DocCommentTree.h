#ifndef _com_sun_source_doctree_DocCommentTree_h_
#define _com_sun_source_doctree_DocCommentTree_h_
//$ interface com.sun.source.doctree.DocCommentTree
//$ extends com.sun.source.doctree.DocTree

#include <com/sun/source/doctree/DocTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $import DocCommentTree : public ::com::sun::source::doctree::DocTree {
	$interface(DocCommentTree, $NO_CLASS_INIT, ::com::sun::source::doctree::DocTree)
public:
	virtual ::java::util::List* getBlockTags() {return nullptr;}
	virtual ::java::util::List* getBody() {return nullptr;}
	virtual ::java::util::List* getFirstSentence() {return nullptr;}
	virtual ::java::util::List* getFullBody();
	virtual ::java::util::List* getPostamble();
	virtual ::java::util::List* getPreamble();
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_DocCommentTree_h_