#ifndef _com_sun_tools_javac_code_Type$StructuralTypeMapping$4_h_
#define _com_sun_tools_javac_code_Type$StructuralTypeMapping$4_h_
//$ class com.sun.tools.javac.code.Type$StructuralTypeMapping$4
//$ extends com.sun.tools.javac.code.Type$MethodType

#include <com/sun/tools/javac/code/Type$MethodType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class Type$StructuralTypeMapping;
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

class Type$StructuralTypeMapping$4 : public ::com::sun::tools::javac::code::Type$MethodType {
	$class(Type$StructuralTypeMapping$4, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$MethodType)
public:
	Type$StructuralTypeMapping$4();
	void init$(::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0, ::com::sun::tools::javac::util::List* argtypes, ::com::sun::tools::javac::code::Type* restype, ::com::sun::tools::javac::util::List* thrown, ::com::sun::tools::javac::code::Symbol$TypeSymbol* methodClass);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$StructuralTypeMapping$4_h_