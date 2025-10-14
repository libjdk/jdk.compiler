#ifndef _com_sun_tools_javac_code_Type$ArrayType$2_h_
#define _com_sun_tools_javac_code_Type$ArrayType$2_h_
//$ class com.sun.tools.javac.code.Type$ArrayType$2
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
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$ArrayType$2 : public ::com::sun::tools::javac::code::Type$ArrayType {
	$class(Type$ArrayType$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$ArrayType)
public:
	Type$ArrayType$2();
	void init$(::com::sun::tools::javac::code::Type$ArrayType* this$0, ::com::sun::tools::javac::code::Type* elemtype, ::com::sun::tools::javac::code::Symbol$TypeSymbol* arrayClass, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::code::Type$ArrayType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeMirror* getComponentType() override;
	virtual bool isVarargs() override;
	::com::sun::tools::javac::code::Type$ArrayType* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$ArrayType$2_h_