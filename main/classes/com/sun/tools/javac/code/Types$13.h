#ifndef _com_sun_tools_javac_code_Types$13_h_
#define _com_sun_tools_javac_code_Types$13_h_
//$ class com.sun.tools.javac.code.Types$13
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
					class Type$ClassType;
					class Type$ErrorType;
					class Type$TypeVar;
					class Type$WildcardType;
					class Types;
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

class Types$13 : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Types$13, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Types$13();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* sym) override;
	virtual ::com::sun::tools::javac::code::Type* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* sym) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* sym) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* sym) override;
	virtual ::com::sun::tools::javac::code::Type* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::com::sun::tools::javac::code::Symbol* sym);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* sym) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$13_h_