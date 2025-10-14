#ifndef _com_sun_tools_javac_comp_Infer$PropagateBounds_h_
#define _com_sun_tools_javac_comp_Infer$PropagateBounds_h_
//$ class com.sun.tools.javac.comp.Infer$PropagateBounds
//$ extends com.sun.tools.javac.comp.Infer$IncorporationAction

#include <com/sun/tools/javac/comp/Infer$IncorporationAction.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
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
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Infer$PropagateBounds : public ::com::sun::tools::javac::comp::Infer$IncorporationAction {
	$class(Infer$PropagateBounds, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$IncorporationAction)
public:
	Infer$PropagateBounds();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib);
	virtual void apply(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::Warner* warner) override;
	virtual ::java::util::EnumSet* backwards();
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) override;
	virtual ::java::util::EnumSet* forward();
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$PropagateBounds_h_