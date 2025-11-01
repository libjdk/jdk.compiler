#ifndef _com_sun_tools_javac_tree_JCTree$JCLiteral_h_
#define _com_sun_tools_javac_tree_JCTree$JCLiteral_h_
//$ class com.sun.tools.javac.tree.JCTree$JCLiteral
//$ extends com.sun.tools.javac.tree.JCTree$JCExpression
//$ implements com.sun.source.tree.LiteralTree

#include <com/sun/source/tree/LiteralTree.h>
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
					class Type;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

class $export JCTree$JCLiteral : public ::com::sun::tools::javac::tree::JCTree$JCExpression, public ::com::sun::source::tree::LiteralTree {
	$class(JCTree$JCLiteral, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCExpression, ::com::sun::source::tree::LiteralTree)
public:
	JCTree$JCLiteral();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::TypeTag* typetag, Object$* value);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual $Object* getValue() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCLiteral* setType(::com::sun::tools::javac::code::Type* type) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::TypeTag* typetag = nullptr;
	$Object* value = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCLiteral_h_