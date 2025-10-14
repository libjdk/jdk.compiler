#ifndef _com_sun_tools_javac_code_Scope$ImportScope$1_h_
#define _com_sun_tools_javac_code_Scope$ImportScope$1_h_
//$ class com.sun.tools.javac.code.Scope$ImportScope$1
//$ extends com.sun.tools.javac.code.Scope$ScopeListener

#include <com/sun/tools/javac/code/Scope$ScopeListener.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$ImportScope;
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

class Scope$ImportScope$1 : public ::com::sun::tools::javac::code::Scope$ScopeListener {
	$class(Scope$ImportScope$1, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$ScopeListener)
public:
	Scope$ImportScope$1();
	void init$(::com::sun::tools::javac::code::Scope$ImportScope* this$0);
	virtual void symbolAdded(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s) override;
	virtual void symbolRemoved(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s) override;
	::com::sun::tools::javac::code::Scope$ImportScope* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ImportScope$1_h_