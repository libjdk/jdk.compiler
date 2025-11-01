#ifndef _com_sun_tools_javac_tree_DCTree$DCThrows_h_
#define _com_sun_tools_javac_tree_DCTree$DCThrows_h_
//$ class com.sun.tools.javac.tree.DCTree$DCThrows
//$ extends com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ implements com.sun.source.doctree.ThrowsTree

#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>

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

class $import DCTree$DCThrows : public ::com::sun::tools::javac::tree::DCTree$DCBlockTag, public ::com::sun::source::doctree::ThrowsTree {
	$class(DCTree$DCThrows, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCBlockTag, ::com::sun::source::doctree::ThrowsTree)
public:
	DCTree$DCThrows();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::source::doctree::DocTree$Kind* kind, ::com::sun::tools::javac::tree::DCTree$DCReference* name, ::java::util::List* description);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getDescription() override;
	virtual ::com::sun::source::doctree::ReferenceTree* getExceptionName() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* toString() override;
	::com::sun::source::doctree::DocTree$Kind* kind = nullptr;
	::com::sun::tools::javac::tree::DCTree$DCReference* name = nullptr;
	::java::util::List* description = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCThrows_h_