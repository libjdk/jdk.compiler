#ifndef _com_sun_tools_javac_code_Scope$ImportFilter_h_
#define _com_sun_tools_javac_code_Scope$ImportFilter_h_
//$ interface com.sun.tools.javac.code.Scope$ImportFilter
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

class $export Scope$ImportFilter : public ::java::lang::Object {
	$interface(Scope$ImportFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accepts(::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::code::Symbol* sym) {return false;}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ImportFilter_h_