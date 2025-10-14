#ifndef _com_sun_tools_javac_code_Types$MapVisitor_h_
#define _com_sun_tools_javac_code_Types$MapVisitor_h_
//$ class com.sun.tools.javac.code.Types$MapVisitor
//$ extends com.sun.tools.javac.code.Types$DefaultTypeVisitor

#include <com/sun/tools/javac/code/Types$DefaultTypeVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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

class $export Types$MapVisitor : public ::com::sun::tools::javac::code::Types$DefaultTypeVisitor {
	$class(Types$MapVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$DefaultTypeVisitor)
public:
	Types$MapVisitor();
	void init$();
	using ::com::sun::tools::javac::code::Types$DefaultTypeVisitor::visit;
	::com::sun::tools::javac::code::Type* visit(::com::sun::tools::javac::code::Type* t);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* s) override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$MapVisitor_h_