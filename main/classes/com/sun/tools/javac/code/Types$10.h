#ifndef _com_sun_tools_javac_code_Types$10_h_
#define _com_sun_tools_javac_code_Types$10_h_
//$ class com.sun.tools.javac.code.Types$10
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
					class Type$TypeVar;
					class Types;
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
				namespace code {

class Types$10 : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(Types$10, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	Types$10();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::java::lang::Boolean* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* ignored);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* ignored) override;
	virtual ::java::lang::Boolean* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* ignored);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* ignored) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* ignored);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* ignored) override;
	virtual ::java::lang::Boolean* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* ignored);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* ignored) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$10_h_