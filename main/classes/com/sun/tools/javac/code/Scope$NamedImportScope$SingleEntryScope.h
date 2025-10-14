#ifndef _com_sun_tools_javac_code_Scope$NamedImportScope$SingleEntryScope_h_
#define _com_sun_tools_javac_code_Scope$NamedImportScope$SingleEntryScope_h_
//$ class com.sun.tools.javac.code.Scope$NamedImportScope$SingleEntryScope
//$ extends com.sun.tools.javac.code.Scope

#include <com/sun/tools/javac/code/Scope.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$LookupKind;
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
					class List;
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

class Scope$NamedImportScope$SingleEntryScope : public ::com::sun::tools::javac::code::Scope {
	$class(Scope$NamedImportScope$SingleEntryScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope)
public:
	Scope$NamedImportScope$SingleEntryScope();
	using ::com::sun::tools::javac::code::Scope::getSymbols;
	using ::com::sun::tools::javac::code::Scope::getSymbolsByName;
	void init$(::com::sun::tools::javac::code::Symbol* owner, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* origin);
	virtual ::com::sun::tools::javac::code::Scope* getOrigin(::com::sun::tools::javac::code::Symbol* byName) override;
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual bool isStaticallyImported(::com::sun::tools::javac::code::Symbol* byName) override;
	::com::sun::tools::javac::code::Symbol* sym = nullptr;
	::com::sun::tools::javac::util::List* content = nullptr;
	::com::sun::tools::javac::code::Scope* origin = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$NamedImportScope$SingleEntryScope_h_