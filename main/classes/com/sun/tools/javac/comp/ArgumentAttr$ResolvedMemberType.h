#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ResolvedMemberType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ResolvedMemberType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ResolvedMemberType
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

class $export ArgumentAttr$ResolvedMemberType : public ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType {
	$class(ArgumentAttr$ResolvedMemberType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType)
public:
	ArgumentAttr$ResolvedMemberType();
	using ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType::complete;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCExpression* speculativeMethod, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::code::Type* methodType() {return nullptr;}
	virtual ::com::sun::tools::javac::code::Type* overloadCheck(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) override;
	virtual ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo) {return nullptr;}
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ResolvedMemberType_h_