#ifndef _com_sun_tools_javac_code_Scope$ScopeListener_h_
#define _com_sun_tools_javac_code_Scope$ScopeListener_h_
//$ interface com.sun.tools.javac.code.Scope$ScopeListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Symbol;
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

class $import Scope$ScopeListener : public ::java::lang::Object {
	$interface(Scope$ScopeListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void symbolAdded(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s) {}
	virtual void symbolRemoved(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s) {}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ScopeListener_h_