#ifndef _com_sun_tools_javac_code_Types$18_h_
#define _com_sun_tools_javac_code_Types$18_h_
//$ class com.sun.tools.javac.code.Types$18
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ClassType;
					class Type$ErrorType;
					class Type$TypeVar;
					class Types;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Types$18 : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(Types$18, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	Types$18();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::com::sun::tools::javac::code::Type* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* ignored);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* ignored) override;
	virtual ::com::sun::tools::javac::code::Type* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, ::java::lang::Void* ignored);
	virtual $Object* visitErrorType(::com::sun::tools::javac::code::Type$ErrorType* t, Object$* ignored) override;
	virtual ::com::sun::tools::javac::code::Type* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* ignored);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* ignored) override;
	virtual ::com::sun::tools::javac::code::Type* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* ignored);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* ignored) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$18_h_