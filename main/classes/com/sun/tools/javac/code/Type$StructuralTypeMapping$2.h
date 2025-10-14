#ifndef _com_sun_tools_javac_code_Type$StructuralTypeMapping$2_h_
#define _com_sun_tools_javac_code_Type$StructuralTypeMapping$2_h_
//$ class com.sun.tools.javac.code.Type$StructuralTypeMapping$2
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
					class Type$StructuralTypeMapping;
					class Type$TypeVar;
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

class Type$StructuralTypeMapping$2 : public ::com::sun::tools::javac::code::Type$WildcardType {
	$class(Type$StructuralTypeMapping$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$WildcardType)
public:
	Type$StructuralTypeMapping$2();
	void init$(::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type$TypeVar* bound, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual bool needsStripping() override;
	::com::sun::tools::javac::code::Type$StructuralTypeMapping* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$StructuralTypeMapping$2_h_