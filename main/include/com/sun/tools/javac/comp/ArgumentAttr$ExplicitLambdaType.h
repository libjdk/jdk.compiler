#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ExplicitLambdaType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ExplicitLambdaType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ExplicitLambdaType
//$ extends com.sun.tools.javac.comp.ArgumentAttr$ArgumentType

#include <com/sun/tools/javac/comp/ArgumentAttr$ArgumentType.h>

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
				namespace comp {
					class ArgumentAttr;
					class Attr$ResultInfo;
					class DeferredAttr$DeferredAttrContext;
					class Env;
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
					class JCTree$JCLambda;
					class JCTree$JCReturn;
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
		class Map;
		class Optional;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import ArgumentAttr$ExplicitLambdaType : public ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType {
	$class(ArgumentAttr$ExplicitLambdaType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType)
public:
	ArgumentAttr$ExplicitLambdaType();
	using ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType::complete;
	using ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType::argtypes;
	using ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType::getReturnType;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCLambda* originalLambda, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCLambda* speculativeLambda);
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCLambda* originalLambda, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCLambda* speculativeLambda, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::util::List* argtypes();
	void checkLambdaCompatible(::com::sun::tools::javac::code::Type* descriptor, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual void checkReturnInStatementLambda(::com::sun::tools::javac::tree::JCTree$JCReturn* ret, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCLambda* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env) override;
	virtual ::com::sun::tools::javac::code::Type* getReturnType(::com::sun::tools::javac::tree::JCTree$JCReturn* ret);
	::com::sun::tools::javac::util::List* lambda$argtypes$0();
	::com::sun::tools::javac::util::List* lambda$returnExpressions$1();
	virtual ::com::sun::tools::javac::code::Type* overloadCheck(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) override;
	virtual ::com::sun::tools::javac::util::List* returnExpressions();
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
	::java::util::Optional* argtypes$ = nullptr;
	::java::util::Optional* returnExpressions$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ExplicitLambdaType_h_