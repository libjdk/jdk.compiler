#ifndef _com_sun_tools_javac_code_Scope$FilterImportScope$2_h_
#define _com_sun_tools_javac_code_Scope$FilterImportScope$2_h_
//$ class com.sun.tools.javac.code.Scope$FilterImportScope$2
//$ extends com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter

#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$FilterImportScope;
					class Scope$LookupKind;
					class Symbol$TypeSymbol;
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

class Scope$FilterImportScope$2 : public ::com::sun::tools::javac::code::Scope$FilterImportScope$SymbolImporter {
	$class(Scope$FilterImportScope$2, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$FilterImportScope$SymbolImporter)
public:
	Scope$FilterImportScope$2();
	void init$(::com::sun::tools::javac::code::Scope$FilterImportScope* this$0, bool inspectSuperTypes, ::com::sun::tools::javac::util::Name* val$name, ::java::util::function::Predicate* val$sf, ::com::sun::tools::javac::code::Scope$LookupKind* val$lookupKind);
	virtual ::java::lang::Iterable* doLookup(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym) override;
	::com::sun::tools::javac::code::Scope$FilterImportScope* this$0 = nullptr;
	::com::sun::tools::javac::code::Scope$LookupKind* val$lookupKind = nullptr;
	::java::util::function::Predicate* val$sf = nullptr;
	::com::sun::tools::javac::util::Name* val$name = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$FilterImportScope$2_h_