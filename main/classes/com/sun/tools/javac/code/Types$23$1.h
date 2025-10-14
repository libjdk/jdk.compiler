#ifndef _com_sun_tools_javac_code_Types$23$1_h_
#define _com_sun_tools_javac_code_Types$23$1_h_
//$ class com.sun.tools.javac.code.Types$23$1
//$ extends com.sun.tools.javac.code.Type$MethodType

#include <com/sun/tools/javac/code/Type$MethodType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class Types$23;
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
				namespace code {

class Types$23$1 : public ::com::sun::tools::javac::code::Type$MethodType {
	$class(Types$23$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$MethodType)
public:
	Types$23$1();
	void init$(::com::sun::tools::javac::code::Types$23* this$1, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::code::Type* restype, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::code::Symbol$TypeSymbol* methodClass, ::com::sun::tools::javac::code::Type$MethodType* val$t);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	::com::sun::tools::javac::code::Types$23* this$1 = nullptr;
	::com::sun::tools::javac::code::Type$MethodType* val$t = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$23$1_h_