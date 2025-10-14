#ifndef _com_sun_tools_javac_code_Attribute$TypeCompound_h_
#define _com_sun_tools_javac_code_Attribute$TypeCompound_h_
//$ class com.sun.tools.javac.code.Attribute$TypeCompound
//$ extends com.sun.tools.javac.code.Attribute$Compound

#include <com/sun/tools/javac/code/Attribute$Compound.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class TypeAnnotationPosition;
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

class $import Attribute$TypeCompound : public ::com::sun::tools::javac::code::Attribute$Compound {
	$class(Attribute$TypeCompound, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute$Compound)
public:
	Attribute$TypeCompound();
	void init$(::com::sun::tools::javac::code::Attribute$Compound* compound, ::com::sun::tools::javac::code::TypeAnnotationPosition* position);
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* values, ::com::sun::tools::javac::code::TypeAnnotationPosition* position);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$TypeCompound_h_