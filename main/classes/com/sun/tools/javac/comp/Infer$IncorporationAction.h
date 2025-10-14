#ifndef _com_sun_tools_javac_comp_Infer$IncorporationAction_h_
#define _com_sun_tools_javac_comp_Infer$IncorporationAction_h_
//$ class com.sun.tools.javac.comp.Infer$IncorporationAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$UndetVar;
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
					class Infer;
					class InferenceContext;
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
					class Warner;
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

class $export Infer$IncorporationAction : public ::java::lang::Object {
	$class(Infer$IncorporationAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Infer$IncorporationAction();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type* t);
	virtual void apply(::com::sun::tools::javac::comp::InferenceContext* ic, ::com::sun::tools::javac::util::Warner* warn) {}
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) {return nullptr;}
	virtual bool isSameType(::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::code::Type* t);
	virtual bool isSubtype(::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::util::Warner* warn);
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::code::Type$UndetVar* uv = nullptr;
	::com::sun::tools::javac::code::Type* t = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$IncorporationAction_h_