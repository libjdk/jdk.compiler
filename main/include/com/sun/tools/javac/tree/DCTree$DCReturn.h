#ifndef _com_sun_tools_javac_tree_DCTree$DCReturn_h_
#define _com_sun_tools_javac_tree_DCTree$DCReturn_h_
//$ class com.sun.tools.javac.tree.DCTree$DCReturn
//$ extends com.sun.tools.javac.tree.DCTree$DCEndPosTree
//$ implements com.sun.source.doctree.ReturnTree

#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCEndPosTree.h>

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

class $import DCTree$DCReturn : public ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, public ::com::sun::source::doctree::ReturnTree {
	$class(DCTree$DCReturn, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, ::com::sun::source::doctree::ReturnTree)
public:
	DCTree$DCReturn();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool inline$, ::java::util::List* description);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getDescription() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* getTagName() override;
	virtual bool isInline() override;
	virtual $String* toString() override;
	bool inline$ = false;
	::java::util::List* description = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCReturn_h_