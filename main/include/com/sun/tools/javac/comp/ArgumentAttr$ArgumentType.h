#ifndef _com_sun_tools_javac_comp_ArgumentAttr$ArgumentType_h_
#define _com_sun_tools_javac_comp_ArgumentAttr$ArgumentType_h_
//$ class com.sun.tools.javac.comp.ArgumentAttr$ArgumentType
//$ extends com.sun.tools.javac.comp.DeferredAttr$DeferredType

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>

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
				namespace comp {
					class ArgumentAttr;
					class Attr$ResultInfo;
					class DeferredAttr$DeferredAttrContext;
					class Env;
					class Resolve$MethodResolutionPhase;
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

class $import ArgumentAttr$ArgumentType : public ::com::sun::tools::javac::comp::DeferredAttr$DeferredType {
	$class(ArgumentAttr$ArgumentType, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$DeferredType)
public:
	ArgumentAttr$ArgumentType();
	using ::com::sun::tools::javac::comp::DeferredAttr$DeferredType::complete;
	void init$(::com::sun::tools::javac::comp::ArgumentAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCExpression* speculativeTree, ::java::util::Map* speculativeTypes);
	virtual ::com::sun::tools::javac::code::Type* complete(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) override;
	virtual ::com::sun::tools::javac::comp::ArgumentAttr$ArgumentType* dup(::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env) {return nullptr;}
	virtual ::com::sun::tools::javac::code::Type* overloadCheck(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) {return nullptr;}
	virtual ::com::sun::tools::javac::tree::JCTree* speculativeTree(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext) override;
	virtual ::com::sun::tools::javac::code::Type* speculativeType(::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase) override;
	::com::sun::tools::javac::comp::ArgumentAttr* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* speculativeTree$ = nullptr;
	::java::util::Map* speculativeTypes = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ArgumentAttr$ArgumentType_h_