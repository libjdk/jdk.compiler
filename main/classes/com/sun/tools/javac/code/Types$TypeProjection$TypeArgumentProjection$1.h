#ifndef _com_sun_tools_javac_code_Types$TypeProjection$TypeArgumentProjection$1_h_
#define _com_sun_tools_javac_code_Types$TypeProjection$TypeArgumentProjection$1_h_
//$ class com.sun.tools.javac.code.Types$TypeProjection$TypeArgumentProjection$1
//$ extends com.sun.tools.javac.code.Type$WildcardType

#include <com/sun/tools/javac/code/Type$WildcardType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class BoundKind;
					class Symbol$TypeSymbol;
					class Type;
					class Types$TypeProjection$TypeArgumentProjection;
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

class Types$TypeProjection$TypeArgumentProjection$1 : public ::com::sun::tools::javac::code::Type$WildcardType {
	$class(Types$TypeProjection$TypeArgumentProjection$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$WildcardType)
public:
	Types$TypeProjection$TypeArgumentProjection$1();
	void init$(::com::sun::tools::javac::code::Types$TypeProjection$TypeArgumentProjection* this$2, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Types$TypeProjection$TypeArgumentProjection* this$2 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypeProjection$TypeArgumentProjection$1_h_