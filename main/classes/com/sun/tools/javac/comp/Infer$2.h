#ifndef _com_sun_tools_javac_comp_Infer$2_h_
#define _com_sun_tools_javac_comp_Infer$2_h_
//$ class com.sun.tools.javac.comp.Infer$2
//$ extends com.sun.tools.javac.comp.Infer$AbstractIncorporationEngine

#include <com/sun/tools/javac/comp/Infer$AbstractIncorporationEngine.h>

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
					class List;
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

class Infer$2 : public ::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine {
	$class(Infer$2, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Infer$AbstractIncorporationEngine)
public:
	Infer$2();
	void init$(::com::sun::tools::javac::comp::Infer* this$0);
	virtual ::com::sun::tools::javac::util::List* getIncorporationActions(::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* t, bool update) override;
	::com::sun::tools::javac::comp::Infer* this$0 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Infer$2_h_