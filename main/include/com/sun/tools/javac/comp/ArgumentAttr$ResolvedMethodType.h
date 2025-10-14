#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ResolvedMethodType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ResolvedMethodType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ResolvedMethodType
//$ extends com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType

#include <com/sun/tools/javac/comp/ArgumentAttr$ResolvedMemberType.h>

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
					class ArgumentAttr$ArgumentType;
					class Attr$ResultInfo;
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
					class JCTree$JCMethodInvocation;
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

class $import ArgumentAttr$ResolvedMethodType : public ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType {
	$class(ArgumentAttr$ResolvedMethodType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType)
public:
	ArgumentAttr$ResolvedMethodType();
	using ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType::complete;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* speculativeTree);
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* speculativeTree, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCMethodInvocation* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env) override;
	virtual ::com::sun::tools::javac::code::Type* methodType() override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo) override;
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ResolvedMethodType_h_