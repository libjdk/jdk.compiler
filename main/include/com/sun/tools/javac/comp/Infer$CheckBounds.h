#ifndef _com_sun_tools_javac_comp_Infer$CheckBounds_h_
#define _com_sun_tools_javac_comp_Infer$CheckBounds_h_
//$ class com.sun.tools.javac.comp.Infer$CheckBounds
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
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class BiPredicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Infer$CheckBounds : public ::com::sun::tools::javac::comp::Infer$IncorporationAction {
	$class(Infer$CheckBounds, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$IncorporationAction)
public:
	Infer$CheckBounds();
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* from);
	void init$(::com::sun::tools::javac::comp::Infer* this$0, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type* t, ::java::util::function::BiFunction* typeFunc, ::java::util::function::BiPredicate* typeFilter, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* from);
	virtual void apply(::com::sun::tools::javac::comp::InferenceContext* inferenceContext, ::com::sun::tools::javac::util::Warner* warn) override;
	virtual ::java::util::EnumSet* boundsToCheck();
	virtual bool checkBound(::com::sun::tools::javac::code::Type* s, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib_s, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib_t, ::com::sun::tools::javac::util::Warner* warn);
	virtual ::com::sun::tools::javac::comp::Infer$IncorporationAction* dup(::com::sun::tools::javac::code::Type$UndetVar* that) override;
	virtual void report(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* from, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* to);
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
	::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* from = nullptr;
	::java::util::function::BiFunction* typeFunc = nullptr;
	::java::util::function::BiPredicate* optFilter = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$CheckBounds_h_