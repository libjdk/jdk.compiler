#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ResolvedConstructorType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ResolvedConstructorType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ResolvedConstructorType
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
					class JCTree$JCNewClass;
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

class $export ArgumentAttr$ResolvedConstructorType : public ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType {
	$class(ArgumentAttr$ResolvedConstructorType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType)
public:
	ArgumentAttr$ResolvedConstructorType();
	using ::com::sun::tools::javac::comp::ArgumentAttr$ResolvedMemberType::complete;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCNewClass* speculativeTree);
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCNewClass* speculativeTree, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree, ::com::sun::tools::javac::comp::Env* env);
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

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ResolvedConstructorType_h_