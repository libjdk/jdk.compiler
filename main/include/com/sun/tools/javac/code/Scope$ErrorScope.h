#ifndef _com_sun_tools_javac_code_Scope$ErrorScope_h_
#define _com_sun_tools_javac_code_Scope$ErrorScope_h_
//$ class com.sun.tools.javac.code.Scope$ErrorScope
//$ extends com.sun.tools.javac.code.Scope$ScopeImpl

#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$Entry;
					class Scope$LookupKind;
					class Scope$WriteableScope;
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

class $import Scope$ErrorScope : public ::com::sun::tools::javac::code::Scope$ScopeImpl {
	$class(Scope$ErrorScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$ScopeImpl)
public:
	Scope$ErrorScope();
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::dup;
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::dupUnshared;
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::getSymbols;
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::getSymbolsByName;
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::findFirst;
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::includes;
	void init$(::com::sun::tools::javac::code::Scope$ScopeImpl* next, ::com::sun::tools::javac::code::Symbol* errSymbol, $Array<::com::sun::tools::javac::code::Scope$Entry>* table);
	void init$(::com::sun::tools::javac::code::Symbol* errSymbol);
	virtual bool anyMatch(::java::util::function::Predicate* sf) override;
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* dup(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* dupUnshared(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual void enter(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual void enterIfAbsent(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::code::Symbol* findFirst(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf) override;
	virtual ::com::sun::tools::javac::code::Scope* getOrigin(::com::sun::tools::javac::code::Symbol* s) override;
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual bool includes(::com::sun::tools::javac::code::Symbol* c) override;
	virtual bool isStaticallyImported(::com::sun::tools::javac::code::Symbol* s) override;
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* leave() override;
	using ::com::sun::tools::javac::code::Scope$ScopeImpl::lookup;
	virtual ::com::sun::tools::javac::code::Scope$Entry* lookup(::com::sun::tools::javac::util::Name* name) override;
	virtual void remove(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual $String* toString() override;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ErrorScope_h_