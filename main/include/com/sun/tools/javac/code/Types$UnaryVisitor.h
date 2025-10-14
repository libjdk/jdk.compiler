#ifndef _com_sun_tools_javac_code_Types$UnaryVisitor_h_
#define _com_sun_tools_javac_code_Types$UnaryVisitor_h_
//$ class com.sun.tools.javac.code.Types$UnaryVisitor
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

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

class $import Types$UnaryVisitor : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Types$UnaryVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Types$UnaryVisitor();
	void init$();
	using ::com::sun::tools::javac::code::Types$SimpleVisitor::visit;
	$Object* visit(::com::sun::tools::javac::code::Type* t);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$UnaryVisitor_h_