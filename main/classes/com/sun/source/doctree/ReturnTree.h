#ifndef _com_sun_source_doctree_ReturnTree_h_
#define _com_sun_source_doctree_ReturnTree_h_
//$ interface com.sun.source.doctree.ReturnTree
//$ extends com.sun.source.doctree.BlockTagTree,com.sun.source.doctree.InlineTagTree

#include <com/sun/source/doctree/BlockTagTree.h>
#include <com/sun/source/doctree/InlineTagTree.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

class $export ReturnTree : public ::com::sun::source::doctree::BlockTagTree, public ::com::sun::source::doctree::InlineTagTree {
	$interface(ReturnTree, $NO_CLASS_INIT, ::com::sun::source::doctree::BlockTagTree, ::com::sun::source::doctree::InlineTagTree)
public:
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* visitor, Object$* data) override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::util::List* getDescription() {return nullptr;}
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override {return nullptr;}
	virtual $String* getTagName() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isInline();
	virtual $String* toString() override;
};

			} // doctree
		} // source
	} // sun
} // com

#endif // _com_sun_source_doctree_ReturnTree_h_