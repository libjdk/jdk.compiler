#ifndef _com_sun_tools_javac_code_Type$JCPrimitiveType$2_h_
#define _com_sun_tools_javac_code_Type$JCPrimitiveType$2_h_
//$ class com.sun.tools.javac.code.Type$JCPrimitiveType$2
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

class Type$JCPrimitiveType$2 : public ::com::sun::tools::javac::code::Type$JCPrimitiveType {
	$class(Type$JCPrimitiveType$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$JCPrimitiveType)
public:
	Type$JCPrimitiveType$2();
	using ::com::sun::tools::javac::code::Type$JCPrimitiveType::accept;
	void init$(::com::sun::tools::javac::code::Type$JCPrimitiveType* this$0, ::com::sun::tools::javac::code::TypeTag* tag, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata, Object$* val$value);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$JCPrimitiveType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual $Object* constValue() override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* this$0 = nullptr;
	$Object* val$value = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$JCPrimitiveType$2_h_