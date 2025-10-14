#ifndef _com_sun_tools_javac_code_Types$1_h_
#define _com_sun_tools_javac_code_Types$1_h_
//$ class com.sun.tools.javac.code.Types$1
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ClassType;
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

class Types$1 : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(Types$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	Types$1();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::java::lang::Boolean* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* ignored);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* ignored) override;
	virtual ::java::lang::Boolean* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* ignored);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* ignored) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$1_h_