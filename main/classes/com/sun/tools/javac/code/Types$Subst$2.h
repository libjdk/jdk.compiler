#ifndef _com_sun_tools_javac_code_Types$Subst$2_h_
#define _com_sun_tools_javac_code_Types$Subst$2_h_
//$ class com.sun.tools.javac.code.Types$Subst$2
//$ extends com.sun.tools.javac.code.Type$ForAll

#include <com/sun/tools/javac/code/Type$ForAll.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Types$Subst;
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

class Types$Subst$2 : public ::com::sun::tools::javac::code::Type$ForAll {
	$class(Types$Subst$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ForAll)
public:
	Types$Subst$2();
	void init$(::com::sun::tools::javac::code::Types$Subst* this$1, ::com::sun::tools::javac::util::List* tvars, ::com::sun::tools::javac::code::Type* qtype);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Types$Subst* this$1 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$Subst$2_h_