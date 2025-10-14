#ifndef _com_sun_tools_javac_code_Types$TypeProjection$2_h_
#define _com_sun_tools_javac_code_Types$TypeProjection$2_h_
//$ class com.sun.tools.javac.code.Types$TypeProjection$2
//$ extends com.sun.tools.javac.code.Type$ArrayType

#include <com/sun/tools/javac/code/Type$ArrayType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class TypeMetadata;
					class Types$TypeProjection;
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

class Types$TypeProjection$2 : public ::com::sun::tools::javac::code::Type$ArrayType {
	$class(Types$TypeProjection$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ArrayType)
public:
	Types$TypeProjection$2();
	void init$(::com::sun::tools::javac::code::Types$TypeProjection* this$1, ::com::sun::tools::javac::code::Type* elemtype, ::com::sun::tools::javac::code::Symbol$TypeSymbol* arrayClass, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Types$TypeProjection* this$1 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$TypeProjection$2_h_