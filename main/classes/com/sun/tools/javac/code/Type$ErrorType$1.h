#ifndef _com_sun_tools_javac_code_Type$ErrorType$1_h_
#define _com_sun_tools_javac_code_Type$ErrorType$1_h_
//$ class com.sun.tools.javac.code.Type$ErrorType$1
//$ extends com.sun.tools.javac.code.Type$ErrorType

#include <com/sun/tools/javac/code/Type$ErrorType.h>

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

class Type$ErrorType$1 : public ::com::sun::tools::javac::code::Type$ErrorType {
	$class(Type$ErrorType$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ErrorType)
public:
	Type$ErrorType$1();
	void init$(::com::sun::tools::javac::code::Type$ErrorType* this$0, ::com::sun::tools::javac::code::Type* originalType, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$ErrorType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType() override;
	virtual ::com::sun::tools::javac::util::List* getTypeArguments() override;
	::com::sun::tools::javac::code::Type$ErrorType* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ErrorType$1_h_