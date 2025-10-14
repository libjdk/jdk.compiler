#ifndef _com_sun_tools_javac_code_Scope$ImportScope_h_
#define _com_sun_tools_javac_code_Scope$ImportScope_h_
//$ class com.sun.tools.javac.code.Scope$ImportScope
//$ extends com.sun.tools.javac.code.Scope$CompoundScope

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>

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

class $import Scope$ImportScope : public ::com::sun::tools::javac::code::Scope$CompoundScope {
	$class(Scope$ImportScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$CompoundScope)
public:
	Scope$ImportScope();
	using ::com::sun::tools::javac::code::Scope$CompoundScope::getSymbols;
	using ::com::sun::tools::javac::code::Scope$CompoundScope::getSymbolsByName;
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	virtual void finalizeScope();
	virtual ::com::sun::tools::javac::code::Scope* finalizeSingleScope(::com::sun::tools::javac::code::Scope* impScope);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ImportScope_h_