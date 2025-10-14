#ifndef _com_sun_tools_javac_code_Type$TypeVar$1_h_
#define _com_sun_tools_javac_code_Type$TypeVar$1_h_
//$ class com.sun.tools.javac.code.Type$TypeVar$1
//$ extends com.sun.tools.javac.code.Type$TypeVar

#include <com/sun/tools/javac/code/Type$TypeVar.h>

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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Type$TypeVar$1 : public ::com::sun::tools::javac::code::Type$TypeVar {
	$class(Type$TypeVar$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$TypeVar)
public:
	Type$TypeVar$1();
	void init$(::com::sun::tools::javac::code::Type$TypeVar* this$0, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type* lower, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* asElement() override;
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$TypeVar* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual ::com::sun::tools::javac::code::Type* getLowerBound() override;
	virtual ::com::sun::tools::javac::code::Type* getUpperBound() override;
	virtual void setUpperBound(::com::sun::tools::javac::code::Type* bound) override;
	::com::sun::tools::javac::code::Type$TypeVar* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$TypeVar$1_h_