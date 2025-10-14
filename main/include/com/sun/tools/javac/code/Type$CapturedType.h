#ifndef _com_sun_tools_javac_code_Type$CapturedType_h_
#define _com_sun_tools_javac_code_Type$CapturedType_h_
//$ class com.sun.tools.javac.code.Type$CapturedType
//$ extends com.sun.tools.javac.code.Type$TypeVar

#include <com/sun/tools/javac/code/Type$TypeVar.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$TypeSymbol;
					class Type;
					class Type$Visitor;
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
				namespace util {
					class Name;
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

class $import Type$CapturedType : public ::com::sun::tools::javac::code::Type$TypeVar {
	$class(Type$CapturedType, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$TypeVar)
public:
	Type$CapturedType();
	using ::com::sun::tools::javac::code::Type$TypeVar::accept;
	void init$(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Type* upper, ::com::sun::tools::javac::code::Type* lower, ::com::sun::tools::javac::code::Type$WildcardType* wildcard);
	void init$(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Type* upper, ::com::sun::tools::javac::code::Type* lower, ::com::sun::tools::javac::code::Type$WildcardType* wildcard, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	virtual ::com::sun::tools::javac::code::Type$CapturedType* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual bool isCaptured() override;
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Type$WildcardType* wildcard = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$CapturedType_h_