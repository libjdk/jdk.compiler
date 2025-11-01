#ifndef _com_sun_tools_javac_tree_DCTree$DCIndex_h_
#define _com_sun_tools_javac_tree_DCTree$DCIndex_h_
//$ class com.sun.tools.javac.tree.DCTree$DCIndex
//$ extends com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ implements com.sun.source.doctree.IndexTree

#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree;
				class DocTree$Kind;
				class DocTreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree;
				}
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

class $import DCTree$DCIndex : public ::com::sun::tools::javac::tree::DCTree$DCInlineTag, public ::com::sun::source::doctree::IndexTree {
	$class(DCTree$DCIndex, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCInlineTag, ::com::sun::source::doctree::IndexTree)
public:
	DCTree$DCIndex();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::DCTree* term, ::java::util::List* description);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getDescription() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::com::sun::source::doctree::DocTree* getSearchTerm() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::DCTree* term = nullptr;
	::java::util::List* description = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCIndex_h_