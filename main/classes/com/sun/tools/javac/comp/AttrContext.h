#ifndef _com_sun_tools_javac_comp_AttrContext_h_
#define _com_sun_tools_javac_comp_AttrContext_h_
//$ class com.sun.tools.javac.comp.AttrContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
					class Scope$WriteableScope;
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
					class Attr$ResultInfo;
					class DeferredAttr$AttributionMode;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export AttrContext : public ::java::lang::Object {
	$class(AttrContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AttrContext();
	void init$();
	virtual ::com::sun::tools::javac::comp::AttrContext* dup(::com::sun::tools::javac::code::Scope$WriteableScope* scope);
	virtual ::com::sun::tools::javac::comp::AttrContext* dup();
	virtual ::java::lang::Iterable* getLocalElements();
	virtual bool lastResolveVarargs();
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Scope$WriteableScope* scope = nullptr;
	int32_t staticLevel = 0;
	bool isSelfCall = false;
	bool selectSuper = false;
	bool isSerializable = false;
	bool isSerializableLambda = false;
	bool isLambda = false;
	::com::sun::tools::javac::comp::DeferredAttr$AttributionMode* attributionMode = nullptr;
	bool isAnonymousDiamond = false;
	bool isNewClass = false;
	bool visitingServiceImplementation = false;
	::com::sun::tools::javac::comp::Resolve$MethodResolutionPhase* pendingResolutionPhase = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	::com::sun::tools::javac::code::Symbol* enclVar = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* returnResult = nullptr;
	::com::sun::tools::javac::comp::Attr$ResultInfo* yieldResult = nullptr;
	::com::sun::tools::javac::code::Type* defaultSuperCallSite = nullptr;
	::com::sun::tools::javac::tree::JCTree* preferredTreeForDiagnostics = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrContext_h_