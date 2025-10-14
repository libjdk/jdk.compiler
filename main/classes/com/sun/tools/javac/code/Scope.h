#ifndef _com_sun_tools_javac_code_Scope_h_
#define _com_sun_tools_javac_code_Scope_h_
//$ class com.sun.tools.javac.code.Scope
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$LookupKind;
					class Scope$ScopeListenerList;
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
				namespace util {
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
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

class $export Scope : public ::java::lang::Object {
	$class(Scope, 0, ::java::lang::Object)
public:
	Scope();
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	virtual bool anyMatch(::java::util::function::Predicate* filter);
	::com::sun::tools::javac::code::Symbol* findFirst(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol* findFirst(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf);
	virtual ::com::sun::tools::javac::code::Scope* getOrigin(::com::sun::tools::javac::code::Symbol* byName) {return nullptr;}
	::java::lang::Iterable* getSymbols();
	::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf);
	::java::lang::Iterable* getSymbols(::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) {return nullptr;}
	::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name);
	::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf);
	::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) {return nullptr;}
	virtual bool includes(::com::sun::tools::javac::code::Symbol* sym);
	virtual bool includes(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	virtual bool isEmpty();
	virtual bool isStaticallyImported(::com::sun::tools::javac::code::Symbol* byName) {return false;}
	static bool lambda$includes$0(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol* t);
	::com::sun::tools::javac::code::Symbol* owner = nullptr;
	static ::java::util::function::Predicate* noFilter;
	::com::sun::tools::javac::code::Scope$ScopeListenerList* listeners = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope_h_