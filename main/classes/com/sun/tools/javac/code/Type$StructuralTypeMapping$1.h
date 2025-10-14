#ifndef _com_sun_tools_javac_code_Type$StructuralTypeMapping$1_h_
#define _com_sun_tools_javac_code_Type$StructuralTypeMapping$1_h_
//$ class com.sun.tools.javac.code.Type$StructuralTypeMapping$1
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class Type$StructuralTypeMapping;
					class TypeMetadata;
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

class Type$StructuralTypeMapping$1 : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(Type$StructuralTypeMapping$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	Type$StructuralTypeMapping$1();
	void init$(::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0, ::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::util::List* typarams, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$StructuralTypeMapping$1_h_