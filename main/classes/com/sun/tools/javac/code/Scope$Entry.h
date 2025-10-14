#ifndef _com_sun_tools_javac_code_Scope$Entry_h_
#define _com_sun_tools_javac_code_Scope$Entry_h_
//$ class com.sun.tools.javac.code.Scope$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$ScopeImpl;
					class Symbol;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$Entry : public ::java::lang::Object {
	$class(Scope$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Scope$Entry();
	void init$(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope$Entry* shadowed, ::com::sun::tools::javac::code::Scope$Entry* nextSibling, ::com::sun::tools::javac::code::Scope$ScopeImpl* scope);
	virtual ::com::sun::tools::javac::code::Scope$Entry* next();
	virtual ::com::sun::tools::javac::code::Scope$Entry* next(::java::util::function::Predicate* sf);
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::code::Scope$Entry* shadowed = nullptr;
	::com::sun::tools::javac::code::Scope$Entry* nextSibling = nullptr;
	::com::sun::tools::javac::code::Scope$Entry* prevSibling = nullptr;
	::com::sun::tools::javac::code::Scope$ScopeImpl* scope = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$Entry_h_