#ifndef _com_sun_tools_javac_comp_Check$2_h_
#define _com_sun_tools_javac_comp_Check$2_h_
//$ class com.sun.tools.javac.comp.Check$2
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$CapturedType;
					class Type$ClassType;
					class Type$TypeVar;
					class Type$WildcardType;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Check$2 : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Check$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Check$2();
	void init$();
	virtual ::java::lang::Boolean* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* s);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, ::java::lang::Void* s);
	virtual $Object* visitCapturedType(::com::sun::tools::javac::code::Type$CapturedType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* s);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* s);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* s);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* s) override;
	virtual ::java::lang::Boolean* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* s);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* s) override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$2_h_