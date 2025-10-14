#ifndef _com_sun_tools_javac_code_Type$StructuralTypeMapping$3_h_
#define _com_sun_tools_javac_code_Type$StructuralTypeMapping$3_h_
//$ class com.sun.tools.javac.code.Type$StructuralTypeMapping$3
//$ extends com.sun.tools.javac.code.Type$ArrayType

#include <com/sun/tools/javac/code/Type$ArrayType.h>

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
				namespace code {

class Type$StructuralTypeMapping$3 : public ::com::sun::tools::javac::code::Type$ArrayType {
	$class(Type$StructuralTypeMapping$3, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ArrayType)
public:
	Type$StructuralTypeMapping$3();
	void init$(::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0, ::com::sun::tools::javac::code::Type* elemtype, ::com::sun::tools::javac::code::Symbol$TypeSymbol* arrayClass, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$StructuralTypeMapping$3_h_