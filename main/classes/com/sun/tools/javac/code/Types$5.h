#ifndef _com_sun_tools_javac_code_Types$5_h_
#define _com_sun_tools_javac_code_Types$5_h_
//$ class com.sun.tools.javac.code.Types$5
//$ extends com.sun.tools.javac.code.Types$TypeRelation

#include <com/sun/tools/javac/code/Types$TypeRelation.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$ErrorType;
					class Type$ForAll;
					class Type$MethodType;
					class Type$PackageType;
					class Type$UndetVar;
					class Type$WildcardType;
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

class Types$5 : public ::com::sun::tools::javac::code::Types$TypeRelation {
	$class(Types$5, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeRelation)
public:
	Types$5();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual ::java::lang::Boolean* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitForAll(::com::sun::tools::javac::code::Type$ForAll* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitPackageType(::com::sun::tools::javac::code::Type$PackageType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$5_h_