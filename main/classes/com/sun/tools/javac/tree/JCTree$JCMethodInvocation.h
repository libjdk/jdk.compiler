#ifndef _com_sun_tools_javac_tree_JCTree$JCMethodInvocation_h_
#define _com_sun_tools_javac_tree_JCTree$JCMethodInvocation_h_
//$ class com.sun.tools.javac.tree.JCTree$JCMethodInvocation
//$ extends com.sun.tools.javac.tree.JCTree$JCPolyExpression
//$ implements com.sun.source.tree.MethodInvocationTree

#include <com/sun/source/tree/MethodInvocationTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
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

class $export JCTree$JCMethodInvocation : public ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, public ::com::sun::source::tree::MethodInvocationTree {
	$class(JCTree$JCMethodInvocation, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCPolyExpression, ::com::sun::source::tree::MethodInvocationTree)
public:
	JCTree$JCMethodInvocation();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* typeargs, ::com::sun::tools::javac::tree::JCTree$JCExpression* meth, ::com::sun::tools::javac::util::List* args);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::java::util::List* getArguments() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::com::sun::source::tree::ExpressionTree* getMethodSelect() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::java::util::List* getTypeArguments() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* setType(::com::sun::tools::javac::code::Type* type) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* typeargs = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* meth = nullptr;
	::com::sun::tools::javac::util::List* args = nullptr;
	::com::sun::tools::javac::code::Type* varargsElement = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCMethodInvocation_h_