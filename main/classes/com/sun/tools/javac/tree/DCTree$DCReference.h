#ifndef _com_sun_tools_javac_tree_DCTree$DCReference_h_
#define _com_sun_tools_javac_tree_DCTree$DCReference_h_
//$ class com.sun.tools.javac.tree.DCTree$DCReference
//$ extends com.sun.tools.javac.tree.DCTree$DCEndPosTree
//$ implements com.sun.source.doctree.ReferenceTree

#include <com/sun/source/doctree/ReferenceTree.h>
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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCExpression;
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
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export DCTree$DCReference : public ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, public ::com::sun::source::doctree::ReferenceTree {
	$class(DCTree$DCReference, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::DCTree$DCEndPosTree, ::com::sun::source::doctree::ReferenceTree)
public:
	DCTree$DCReference();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* signature, ::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName, ::com::sun::tools::javac::tree::JCTree* qualExpr, ::javax::lang::model::element::Name* member, ::java::util::List* paramTypes);
	virtual $Object* accept(::com::sun::source::doctree::DocTreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::doctree::DocTree$Kind* getKind() override;
	virtual $String* getSignature() override;
	virtual $String* toString() override;
	$String* signature = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* moduleName = nullptr;
	::com::sun::tools::javac::tree::JCTree* qualifierExpression = nullptr;
	::javax::lang::model::element::Name* memberName = nullptr;
	::java::util::List* paramTypes = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_DCTree$DCReference_h_