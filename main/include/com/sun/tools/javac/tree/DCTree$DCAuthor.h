#ifndef _com_sun_tools_javac_tree_DCTree$DCAuthor_h_
#define _com_sun_tools_javac_tree_DCTree$DCAuthor_h_
//$ class com.sun.tools.javac.tree.DCTree$DCAuthor
//$ extends com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ implements com.sun.source.doctree.AuthorTree

#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $import DCTree$DCAuthor : public ::com::sun::tools::javac::tree::DCTree$DCBlockTag, public ::com::sun::source::doctree::AuthorTree {
	$class(DCTree$DCAuthor, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCBlockTag, ::com::sun::source::doctree::AuthorTree)
public:
	DCTree$DCAuthor();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::List* name);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::java::util::List* getName() override;
	virtual $String* toString() override;
	::java::util::List* name = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCAuthor_h_