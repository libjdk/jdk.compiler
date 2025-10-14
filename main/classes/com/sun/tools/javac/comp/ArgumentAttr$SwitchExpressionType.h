#ifndef _com_sun_tools_javac_comp_ArgumentAttr$SwitchExpressionType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$SwitchExpressionType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$SwitchExpressionType
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
					class JCTree$JCSwitchExpression;
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

class $export ArgumentAttr$SwitchExpressionType : public ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType {
	$class(ArgumentAttr$SwitchExpressionType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType)
public:
	ArgumentAttr$SwitchExpressionType();
	using ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType::complete;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* speculativeCond);
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* speculativeCond, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env) override;
	::com::sun::tools::javac::util::List* lambda$yieldExpressions$0();
	virtual ::com::sun::tools::javac::code::Type* overloadCheck(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) override;
	virtual ::com::sun::tools::javac::util::List* yieldExpressions();
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
	::java::util::Optional* yieldExpressions$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$SwitchExpressionType_h_