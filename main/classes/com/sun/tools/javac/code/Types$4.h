#ifndef _com_sun_tools_javac_code_Types$4_h_
#define _com_sun_tools_javac_code_Types$4_h_
//$ class com.sun.tools.javac.code.Types$4
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
					class Type$UndetVar;
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
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$4 : public ::com::sun::tools::javac::code::Types$TypeRelation {
	$class(Types$4, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$TypeRelation)
public:
	Types$4();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	bool containsTypeRecursive(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	::com::sun::tools::javac::code::Type* rewriteSupers(::com::sun::tools::javac::code::Type* t);
	virtual ::java::lang::Boolean* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, ::com::sun::tools::javac::code::Type* s);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* s) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::java::util::Set* cache = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$4_h_