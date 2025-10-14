#ifndef _com_sun_tools_javac_code_Types$HasSameArgs_h_
#define _com_sun_tools_javac_code_Types$HasSameArgs_h_
//$ class com.sun.tools.javac.code.Types$HasSameArgs
//$ extends com.sun.tools.javac.code.Types$TypeRelation

#include <com/sun/tools/javac/code/Types$TypeRelation.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ErrorType;
					class Type$ForAll;
					class Type$MethodType;
					class Types;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$HasSameArgs : public ::com::sun::tools::javac::code::Types$TypeRelation {
	$class(Types$HasSameArgs, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeRelation)
public:
	Types$HasSameArgs();
	void init$(::com::sun::tools::javac::code::Types* this$0, bool strict);
	virtual ::java::lang::Boolean* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	bool strict = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$HasSameArgs_h_