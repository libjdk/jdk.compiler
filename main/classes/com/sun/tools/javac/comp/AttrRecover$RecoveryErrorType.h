#ifndef _com_sun_tools_javac_comp_AttrRecover$RecoveryErrorType_h_
#define _com_sun_tools_javac_comp_AttrRecover$RecoveryErrorType_h_
//$ class com.sun.tools.javac.comp.AttrRecover$RecoveryErrorType
//$ extends com.sun.tools.javac.code.Type$ErrorType

#include <com/sun/tools/javac/code/Type$ErrorType.h>

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

class AttrRecover$RecoveryErrorType : public ::com::sun::tools::javac::code::Type$ErrorType {
	$class(AttrRecover$RecoveryErrorType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ErrorType)
public:
	AttrRecover$RecoveryErrorType();
	void init$(::com::sun::tools::javac::code::Type$ErrorType* original, ::com::sun::tools::javac::code::Symbol* candidateSymbol);
	::com::sun::tools::javac::code::Symbol* candidateSymbol = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_AttrRecover$RecoveryErrorType_h_