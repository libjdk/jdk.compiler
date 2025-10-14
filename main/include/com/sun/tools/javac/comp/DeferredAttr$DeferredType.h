#ifndef _com_sun_tools_javac_comp_DeferredAttr$DeferredType_h_
#define _com_sun_tools_javac_comp_DeferredAttr$DeferredType_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$DeferredType
//$ extends com.sun.tools.javac.code.Type

#include <com/sun/tools/javac/code/Type.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class TypeMetadata;
					class TypeTag;
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
					class Attr$ResultInfo;
					class DeferredAttr;
					class DeferredAttr$AttrMode;
					class DeferredAttr$DeferredAttrContext;
					class DeferredAttr$DeferredStuckPolicy;
					class DeferredAttr$DeferredType$SpeculativeCache;
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
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$DeferredType : public ::com::sun::tools::javac::code::Type {
	$class(DeferredAttr$DeferredType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type)
public:
	DeferredAttr$DeferredType();
	using ::com::sun::tools::javac::code::Type::complete;
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo);
	::com::sun::tools::javac::code::Type* check(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy* deferredStuckPolicy);
	virtual ::com::sun::tools::javac::comp::DeferredAttr$DeferredType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* complete(::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext);
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() override;
	virtual ::com::sun::tools::javac::tree::JCTree* speculativeTree(::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext* deferredAttrContext);
	virtual ::com::sun::tools::javac::code::Type* speculativeType(::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* phase);
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCExpression* tree = nullptr;
	::com::sun::tools::javac::comp::Env* env = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$AttrMode* mode = nullptr;
	::java::util::Set* notPertinentToApplicability = nullptr;
	::com::sun::tools::javac::comp::DeferredAttr$DeferredType$SpeculativeCache* speculativeCache = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$DeferredType_h_