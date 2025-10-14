#ifndef _com_sun_tools_javac_code_Types$HashCodeVisitor_h_
#define _com_sun_tools_javac_code_Types$HashCodeVisitor_h_
//$ class com.sun.tools.javac.code.Types$HashCodeVisitor
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$ErrorType;
					class Type$MethodType;
					class Type$TypeVar;
					class Type$UndetVar;
					class Type$WildcardType;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$HashCodeVisitor : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(Types$HashCodeVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	Types$HashCodeVisitor();
	void init$();
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::java::lang::Integer* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* ignored);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* ignored);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::java::lang::Void* ignored);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, ::java::lang::Void* ignored);
	virtual $Object* visitMethodType(::com::sun::tools::javac::code::Type$MethodType* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* ignored);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* ignored);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, ::java::lang::Void* ignored);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* ignored) override;
	virtual ::java::lang::Integer* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* ignored);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* ignored) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$HashCodeVisitor_h_