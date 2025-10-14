#ifndef _com_sun_tools_javac_code_Scope$WriteableScope_h_
#define _com_sun_tools_javac_code_Scope$WriteableScope_h_
//$ class com.sun.tools.javac.code.Scope$WriteableScope
//$ extends com.sun.tools.javac.code.Scope

#include <com/sun/tools/javac/code/Scope.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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

class $export Scope$WriteableScope : public ::com::sun::tools::javac::code::Scope {
	$class(Scope$WriteableScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope)
public:
	Scope$WriteableScope();
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	static ::com::sun::tools::javac::code::Scope$WriteableScope* create(::com::sun::tools::javac::code::Symbol* owner);
	::com::sun::tools::javac::code::Scope$WriteableScope* dup();
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* dup(::com::sun::tools::javac::code::Symbol* newOwner) {return nullptr;}
	::com::sun::tools::javac::code::Scope$WriteableScope* dupUnshared();
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* dupUnshared(::com::sun::tools::javac::code::Symbol* newOwner) {return nullptr;}
	virtual void enter(::com::sun::tools::javac::code::Symbol* c) {}
	virtual void enterIfAbsent(::com::sun::tools::javac::code::Symbol* c) {}
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* leave() {return nullptr;}
	virtual void remove(::com::sun::tools::javac::code::Symbol* c) {}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$WriteableScope_h_