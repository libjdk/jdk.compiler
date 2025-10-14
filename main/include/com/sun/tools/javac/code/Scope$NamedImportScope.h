#ifndef _com_sun_tools_javac_code_Scope$NamedImportScope_h_
#define _com_sun_tools_javac_code_Scope$NamedImportScope_h_
//$ class com.sun.tools.javac.code.Scope$NamedImportScope
//$ extends com.sun.tools.javac.code.Scope$ImportScope

#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
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
		class Map;
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

class $import Scope$NamedImportScope : public ::com::sun::tools::javac::code::Scope$ImportScope {
	$class(Scope$NamedImportScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$ImportScope)
public:
	Scope$NamedImportScope();
	using ::com::sun::tools::javac::code::Scope$ImportScope::getSymbols;
	using ::com::sun::tools::javac::code::Scope$ImportScope::getSymbolsByName;
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	::com::sun::tools::javac::code::Scope* appendScope(::com::sun::tools::javac::code::Scope* newScope, ::com::sun::tools::javac::util::Name* name);
	virtual void finalizeScope() override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::com::sun::tools::javac::code::Scope* importByName(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Scope$ImportFilter* filter, ::com::sun::tools::javac::tree::JCTree$JCImport* imp, ::java::util::function::BiConsumer* cfHandler);
	virtual ::com::sun::tools::javac::code::Scope* importType(::com::sun::tools::javac::code::Scope* delegate, ::com::sun::tools::javac::code::Scope* origin, ::com::sun::tools::javac::code::Symbol* sym);
	static ::java::util::Iterator* lambda$getSymbolsByName$0(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind, ::com::sun::tools::javac::code::Scope* scope);
	static ::java::util::Iterator* lambda$getSymbolsByName$1($Array<::com::sun::tools::javac::code::Scope>* scopes, ::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	::java::util::Map* name2Scopes = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$NamedImportScope_h_