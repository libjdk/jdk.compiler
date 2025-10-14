#ifndef _com_sun_tools_javac_comp_Resolve$ReferenceLookupResult_h_
#define _com_sun_tools_javac_comp_Resolve$ReferenceLookupResult_h_
//$ class com.sun.tools.javac.comp.Resolve$ReferenceLookupResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
					class Resolve$MethodResolutionContext;
					class Resolve$MethodResolutionContext$Candidate;
					class Resolve$ReferenceLookupResult$StaticKind;
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

class $export Resolve$ReferenceLookupResult : public ::java::lang::Object {
	$class(Resolve$ReferenceLookupResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Resolve$ReferenceLookupResult();
	void init$(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolutionContext);
	void init$(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* staticKind);
	virtual bool canIgnore();
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult* error(::com::sun::tools::javac::code::Symbol* sym);
	virtual bool hasKind(::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* sk);
	virtual bool isSuccess();
	static bool lambda$staticKind$0(::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolutionContext, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate* c);
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* lambda$staticKind$1(::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate* c);
	static ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* staticKind(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* resolutionContext);
	::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind* staticKind$ = nullptr;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$ReferenceLookupResult_h_