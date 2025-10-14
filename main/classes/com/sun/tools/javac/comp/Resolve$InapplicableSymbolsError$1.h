#ifndef _com_sun_tools_javac_comp_Resolve$InapplicableSymbolsError$1_h_
#define _com_sun_tools_javac_comp_Resolve$InapplicableSymbolsError$1_h_
//$ class com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$1
//$ extends com.sun.tools.javac.comp.Resolve$InapplicableSymbolError

#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Resolve$InapplicableSymbolsError;
					class Resolve$MethodResolutionContext;
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
					class Pair;
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

class Resolve$InapplicableSymbolsError$1 : public ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError {
	$class(Resolve$InapplicableSymbolsError$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError)
public:
	Resolve$InapplicableSymbolsError$1();
	using ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError::accept;
	using ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError::clone;
	void init$(::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError* this$1, ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext* context, ::com::sun::tools::javac::util::Pair* val$p);
	virtual ::com::sun::tools::javac::util::Pair* errCandidate() override;
	::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError* this$1 = nullptr;
	::com::sun::tools::javac::util::Pair* val$p = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$InapplicableSymbolsError$1_h_