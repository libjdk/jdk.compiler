#ifndef _com_sun_tools_javac_code_Type$WildcardType$1_h_
#define _com_sun_tools_javac_code_Type$WildcardType$1_h_
//$ class com.sun.tools.javac.code.Type$WildcardType$1
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
					class Type$TypeVar;
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

class Type$WildcardType$1 : public ::com::sun::tools::javac::code::Type$WildcardType {
	$class(Type$WildcardType$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$WildcardType)
public:
	Type$WildcardType$1();
	void init$(::com::sun::tools::javac::code::Type$WildcardType* this$0, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::BoundKind* kind, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type$TypeVar* bound, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$WildcardType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::javax::lang::model::type::TypeMirror* getExtendsBound() override;
	virtual ::javax::lang::model::type::TypeMirror* getSuperBound() override;
	::com::sun::tools::javac::code::Type$WildcardType* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$WildcardType$1_h_