#ifndef _com_sun_tools_javac_tree_JCTree$JCLambda_h_
#define _com_sun_tools_javac_tree_JCTree$JCLambda_h_
//$ class com.sun.tools.javac.tree.JCTree$JCLambda
//$ extends com.sun.tools.javac.tree.JCTree$JCFunctionalExpression
//$ implements com.sun.source.tree.LambdaExpressionTree

#include <com/sun/source/tree/LambdaExpressionTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class LambdaExpressionTree$BodyKind;
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
					class JCTree;
					class JCTree$JCLambda$ParameterKind;
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

class $import JCTree$JCLambda : public ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression, public ::com::sun::source::tree::LambdaExpressionTree {
	$class(JCTree$JCLambda, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::JCTree$JCFunctionalExpression, ::com::sun::source::tree::LambdaExpressionTree)
public:
	JCTree$JCLambda();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::tree::JCTree* body);
	virtual void accept(::com::sun::tools::javac::tree::JCTree$Visitor* v) override;
	virtual $Object* accept(::com::sun::source::tree::TreeVisitor* v, Object$* d) override;
	virtual ::com::sun::tools::javac::tree::JCTree* getBody() override;
	virtual ::com::sun::source::tree::LambdaExpressionTree$BodyKind* getBodyKind() override;
	virtual ::com::sun::source::tree::Tree$Kind* getKind() override;
	virtual ::java::util::List* getParameters() override;
	virtual ::com::sun::tools::javac::tree::JCTree$Tag* getTag() override;
	virtual ::com::sun::tools::javac::tree::JCTree$JCLambda* setType(::com::sun::tools::javac::code::Type* type) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::List* params = nullptr;
	::com::sun::tools::javac::tree::JCTree* body = nullptr;
	bool canCompleteNormally = false;
	::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind* paramKind = nullptr;
};

				} // tree
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_tree_JCTree$JCLambda_h_