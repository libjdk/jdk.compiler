#ifndef _com_sun_tools_javac_tree_DCTree$DCParam_h_
#define _com_sun_tools_javac_tree_DCTree$DCParam_h_
//$ class com.sun.tools.javac.tree.DCTree$DCParam
//$ extends com.sun.tools.javac.tree.DCTree$DCBlockTag
//$ implements com.sun.source.doctree.ParamTree

#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocTree$Kind;
				class DocTreeVisitor;
				class IdentifierTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class DCTree$DCIdentifier;
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

class $export DCTree$DCParam : public ::com::sun::tools::javac::tree::DCTree$DCBlockTag, public ::com::sun::source::doctree::ParamTree {
	$class(DCTree$DCParam, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCBlockTag, ::com::sun::source::doctree::ParamTree)
public:
	DCTree$DCParam();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getTagName() override;
	virtual int32_t hashCode() override;
	void init$(bool isTypeParameter, ::com::sun::tools::javac::tree::DCTree$DCIdentifier* name, ::java::util::List* description);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getDescription() override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual ::com::sun::source::doctree::IdentifierTree* getName() override;
	virtual bool isTypeParameter() override;
	virtual $String* toString() override;
	bool isTypeParameter$ = false;
	::com::sun::tools::javac::tree::DCTree$DCIdentifier* name = nullptr;
	::java::util::List* description = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCParam_h_