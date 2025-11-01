#ifndef _com_sun_tools_javac_tree_JCTree$JCPrimitiveTypeTree_h_
#define _com_sun_tools_javac_tree_JCTree$JCPrimitiveTypeTree_h_
//$ class com.sun.tools.javac.tree.JCTree$JCPrimitiveTypeTree
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.PrimitiveTypeTree

#include <com/sun/source/tree/PrimitiveTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class Tree$Kind;
				class TreeVisitor;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TypeTag;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$Tag;
					class JCTree$Visitor;
				}
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCPrimitiveTypeTree : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::PrimitiveTypeTree {
	$class(JCTree$JCPrimitiveTypeTree, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::PrimitiveTypeTree)
public:
	JCTree$JCPrimitiveTypeTree();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::TypeTag* typetag);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::javax::lang::model::type::TypeKind* getPrimitiveTypeKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::TypeTag* typetag = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCPrimitiveTypeTree_h_