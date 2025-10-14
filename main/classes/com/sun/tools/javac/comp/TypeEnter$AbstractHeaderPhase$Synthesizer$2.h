#ifndef _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$Synthesizer$2_h_
#define _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$Synthesizer$2_h_
//$ class com.sun.tools.javac.comp.TypeEnter$AbstractHeaderPhase$Synthesizer$2
//$ extends com.sun.tools.javac.code.Type$ErrorType

#include <com/sun/tools/javac/code/Type$ErrorType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
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
					class TypeEnter$AbstractHeaderPhase$Synthesizer;
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

class TypeEnter$AbstractHeaderPhase$Synthesizer$2 : public ::com::sun::tools::javac::code::Type$ErrorType {
	$class(TypeEnter$AbstractHeaderPhase$Synthesizer$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ErrorType)
public:
	TypeEnter$AbstractHeaderPhase$Synthesizer$2();
	void init$(::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer* this$2, ::com::sun::tools::javac::code::Type* originalType, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	::com::sun::tools::javac::comp::TypeEnter$AbstractHeaderPhase$Synthesizer* this$2 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_TypeEnter$AbstractHeaderPhase$Synthesizer$2_h_