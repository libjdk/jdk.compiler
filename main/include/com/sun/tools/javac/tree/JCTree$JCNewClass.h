#ifndef _com_sun_tools_javac_tree_JCTree$JCNewClass_h_
#define _com_sun_tools_javac_tree_JCTree$JCNewClass_h_
//$ class com.sun.tools.javac.tree.JCTree$JCNewClass
//$ extends com.sun.tools.javac.tree.JCTree$JCPolyExpression
//$ implements com.sun.source.tree.NewClassTree

#include <com/sun/source/tree/NewClassTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class ClassTree;
				class ExpressionTree;
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
					class Symbol;
					class Type;
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
					class JCTree$JCClassDecl;
					class JCTree$JCExpression;
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
				namespace util {
					class List;
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

class $import JCTree$JCNewClass : public ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, public ::com::sun::source::tree::NewClassTree {
	$class(JCTree$JCNewClass, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, ::com::sun::source::tree::NewClassTree)
public:
	JCTree$JCNewClass();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::tree::JCTree$JCExpression* encl, ::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* clazz, ::com::sun::tools::javac::util::List* args, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* def);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual bool classDeclRemoved();
	virtual ::java::util::List* getArguments() override;
	virtual ::com::sun::source::tree::ClassTree* getClassBody() override;
	virtual ::com::sun::source::tree::ExpressionTree* getEnclosingExpression() override;
	virtual ::com::sun::source::tree::ExpressionTree* getIdentifier() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getTypeArguments() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::tree::JCTree$JCExpression* encl = nullptr;
	::com::sun::tools::javac::util::List* typeargs = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* clazz = nullptr;
	::com::sun::tools::javac::util::List* args = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCClassDecl* def = nullptr;
	::com::sun::tools::javac::code::Symbol* constructor = nullptr;
	::com::sun::tools::javac::code::Type* varargsElement = nullptr;
	::com::sun::tools::javac::code::Type* constructorType = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCNewClass_h_