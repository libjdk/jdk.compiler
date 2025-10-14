#ifndef _com_sun_tools_javac_code_Scope$FilterImportScope$SymbolImporter_h_
#define _com_sun_tools_javac_code_Scope$FilterImportScope$SymbolImporter_h_
//$ class com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$FilterImportScope;
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
					class List;
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
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$FilterImportScope$SymbolImporter : public ::java::lang::Object {
	$class(Scope$FilterImportScope$SymbolImporter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Scope$FilterImportScope$SymbolImporter();
	void init$(::com::sun::tools::javac::code::Scope$FilterImportScope* this$0, bool inspectSuperTypes);
	virtual ::java::lang::Iterable* doLookup(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym) {return nullptr;}
	virtual ::com::sun::tools::javac::util::List* importFrom(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::util::List* results);
	::com::sun::tools::javac::code::Scope$FilterImportScope* this$0 = nullptr;
	::java::util::Set* processed = nullptr;
	::com::sun::tools::javac::util::List* delegates = nullptr;
	bool inspectSuperTypes = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$FilterImportScope$SymbolImporter_h_