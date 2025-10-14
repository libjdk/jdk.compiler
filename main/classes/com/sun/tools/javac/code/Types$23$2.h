#ifndef _com_sun_tools_javac_code_Types$23$2_h_
#define _com_sun_tools_javac_code_Types$23$2_h_
//$ class com.sun.tools.javac.code.Types$23$2
//$ extends com.sun.tools.javac.code.Type$ForAll

#include <com/sun/tools/javac/code/Type$ForAll.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class Types$23$2 : public ::com::sun::tools::javac::code::Type$ForAll {
	$class(Types$23$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ForAll)
public:
	Types$23$2();
	void init$(::com::sun::tools::javac::code::Types$23* this$1, ::com::sun::tools::javac::util::List* tvars, ::com::sun::tools::javac::code::Type* qtype, ::com::sun::tools::javac::code::Type$ForAll* val$t);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	::com::sun::tools::javac::code::Types$23* this$1 = nullptr;
	::com::sun::tools::javac::code::Type$ForAll* val$t = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$23$2_h_