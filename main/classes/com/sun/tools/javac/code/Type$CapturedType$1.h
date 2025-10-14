#ifndef _com_sun_tools_javac_code_Type$CapturedType$1_h_
#define _com_sun_tools_javac_code_Type$CapturedType$1_h_
//$ class com.sun.tools.javac.code.Type$CapturedType$1
//$ extends com.sun.tools.javac.code.Type$CapturedType

#include <com/sun/tools/javac/code/Type$CapturedType.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type;
					class Type$WildcardType;
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

class Type$CapturedType$1 : public ::com::sun::tools::javac::code::Type$CapturedType {
	$class(Type$CapturedType$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$CapturedType)
public:
	Type$CapturedType$1();
	using ::com::sun::tools::javac::code::Type$CapturedType::accept;
	void init$(::com::sun::tools::javac::code::Type$CapturedType* this$0, ::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type* upper, ::com::sun::tools::javac::code::Type* lower, ::com::sun::tools::javac::code::Type$WildcardType* wildcard, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$CapturedType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual ::com::sun::tools::javac::code::Type* getUpperBound() override;
	virtual void setUpperBound(::com::sun::tools::javac::code::Type* bound) override;
	::com::sun::tools::javac::code::Type$CapturedType* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$CapturedType$1_h_