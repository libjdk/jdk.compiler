#ifndef _com_sun_tools_javac_code_Types$24_h_
#define _com_sun_tools_javac_code_Types$24_h_
//$ class com.sun.tools.javac.code.Types$24
//$ extends com.sun.tools.javac.code.Types$HashCodeVisitor

#include <com/sun/tools/javac/code/Types$HashCodeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type$TypeVar;
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

class Types$24 : public ::com::sun::tools::javac::code::Types$HashCodeVisitor {
	$class(Types$24, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$HashCodeVisitor)
public:
	Types$24();
	void init$();
	using ::com::sun::tools::javac::code::Types$HashCodeVisitor::visit;
	virtual ::java::lang::Integer* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* ignored) override;
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* ignored) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$24_h_