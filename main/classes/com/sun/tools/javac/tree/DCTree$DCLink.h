#ifndef _com_sun_tools_javac_tree_DCTree$DCLink_h_
#define _com_sun_tools_javac_tree_DCTree$DCLink_h_
//$ class com.sun.tools.javac.tree.DCTree$DCLink
//$ extends com.sun.tools.javac.tree.DCTree$DCInlineTag
//$ implements com.sun.source.doctree.LinkTree

#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
				class ReferenceTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCReference;
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

class $export DCTree$DCLink : public ::com::sun::tools::javac::tree::DCTree$DCInlineTag, public ::com::sun::source::doctree::LinkTree {
	$class(DCTree$DCLink, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCInlineTag, ::com::sun::source::doctree::LinkTree)
public:
	DCTree$DCLink();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::source::doctree::DocTree$Kind* kind, ::com::sun::tools::javac::tree::DCTree$DCReference* ref, ::java::util::List* label);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::java::util::List* getLabel() override;
	virtual ::com::sun::source::doctree::ReferenceTree* getReference() override;
	virtual $String* toString() override;
	::com::sun::source::doctree::DocTree$Kind* kind = nullptr;
	::com::sun::tools::javac::tree::DCTree$DCReference* ref = nullptr;
	::java::util::List* label = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCLink_h_