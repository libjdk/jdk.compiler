#ifndef _com_sun_tools_javac_code_Type$ErasedClassType_h_
#define _com_sun_tools_javac_code_Type$ErasedClassType_h_
//$ class com.sun.tools.javac.code.Type$ErasedClassType
//$ extends com.sun.tools.javac.code.Type$ClassType

#include <com/sun/tools/javac/code/Type$ClassType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
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

class $import Type$ErasedClassType : public ::com::sun::tools::javac::code::Type$ClassType {
	$class(Type$ErasedClassType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ClassType)
public:
	Type$ErasedClassType();
	void init$(::com::sun::tools::javac::code::Type* outer, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual bool hasErasedSupertypes() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ErasedClassType_h_