#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ConditionalType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ConditionalType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ConditionalType
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
					class JCTree$JCConditional;
					class JCTree$JCExpression;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import ArgumentAttr$ConditionalType : public ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType {
	$class(ArgumentAttr$ConditionalType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType)
public:
	ArgumentAttr$ConditionalType();
	using ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType::complete;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCConditional* speculativeCond);
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCConditional* speculativeCond, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCConditional* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env) override;
	virtual ::com::sun::tools::javac::code::Type* overloadCheck(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) override;
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ConditionalType_h_