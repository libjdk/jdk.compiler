#ifndef _com_sun_tools_javac_code_Scope$FilterImportScope_h_
#define _com_sun_tools_javac_code_Scope$FilterImportScope_h_
//$ class com.sun.tools.javac.code.Scope$FilterImportScope
//$ extends com.sun.tools.javac.code.Scope

#include <com/sun/tools/javac/code/Scope.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$ImportFilter;
					class Scope$LookupKind;
					class Symbol;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCImport;
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
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class Scope$FilterImportScope : public ::com::sun::tools::javac::code::Scope {
	$class(Scope$FilterImportScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope)
public:
	Scope$FilterImportScope();
	using ::com::sun::tools::javac::code::Scope::getSymbols;
	using ::com::sun::tools::javac::code::Scope::getSymbolsByName;
	void init$(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::util::Name* filterName, ::com::sun::tools::javac::code::Scope$ImportFilter* filter, ::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::java::util::function::BiConsumer* cfHandler);
	virtual ::com::sun::tools::javac::code::Scope* getOrigin(::com::sun::tools::javac::code::Symbol* byName) override;
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual bool isStaticallyImported(::com::sun::tools::javac::code::Symbol* byName) override;
	virtual bool isStaticallyImported();
	bool lambda$getSymbols$0(::com::sun::tools::javac::code::Symbol* s);
	::java::util::Iterator* lambda$getSymbols$1(::com::sun::tools::javac::util::List* results);
	::java::util::Iterator* lambda$getSymbolsByName$3(::com::sun::tools::javac::util::List* results);
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Scope* origin = nullptr;
	::com::sun::tools::javac::util::Name* filterName = nullptr;
	::com::sun::tools::javac::code::Scope$ImportFilter* filter = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCImport* imp = nullptr;
	::java::util::function::BiConsumer* cfHandler = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$FilterImportScope_h_