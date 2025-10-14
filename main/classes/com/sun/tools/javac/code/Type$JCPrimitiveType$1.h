#ifndef _com_sun_tools_javac_code_Type$JCPrimitiveType$1_h_
#define _com_sun_tools_javac_code_Type$JCPrimitiveType$1_h_
//$ class com.sun.tools.javac.code.Type$JCPrimitiveType$1
//$ extends com.sun.tools.javac.code.Type$JCPrimitiveType

#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class TypeMetadata;
					class TypeTag;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$JCPrimitiveType$1 : public ::com::sun::tools::javac::code::Type$JCPrimitiveType {
	$class(Type$JCPrimitiveType$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$JCPrimitiveType)
public:
	Type$JCPrimitiveType$1();
	using ::com::sun::tools::javac::code::Type$JCPrimitiveType::accept;
	void init$(::com::sun::tools::javac::code::Type$JCPrimitiveType* this$0, ::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$JCPrimitiveType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$JCPrimitiveType$1_h_