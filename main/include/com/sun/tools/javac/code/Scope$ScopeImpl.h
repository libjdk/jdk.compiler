#ifndef _com_sun_tools_javac_code_Scope$ScopeImpl_h_
#define _com_sun_tools_javac_code_Scope$ScopeImpl_h_
//$ class com.sun.tools.javac.code.Scope$ScopeImpl
//$ extends com.sun.tools.javac.code.Scope$WriteableScope

#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <java/lang/Array.h>

#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope;
					class Scope$Entry;
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
			class Predicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Scope$ScopeImpl : public ::com::sun::tools::javac::code::Scope$WriteableScope {
	$class(Scope$ScopeImpl, 0, ::com::sun::tools::javac::code::Scope$WriteableScope)
public:
	Scope$ScopeImpl();
	using ::com::sun::tools::javac::code::Scope$WriteableScope::dup;
	using ::com::sun::tools::javac::code::Scope$WriteableScope::dupUnshared;
	using ::com::sun::tools::javac::code::Scope$WriteableScope::getSymbols;
	using ::com::sun::tools::javac::code::Scope$WriteableScope::getSymbolsByName;
	using ::com::sun::tools::javac::code::Scope$WriteableScope::findFirst;
	using ::com::sun::tools::javac::code::Scope$WriteableScope::includes;
	void init$(::com::sun::tools::javac::code::Scope$ScopeImpl* next, ::com::sun::tools::javac::code::Symbol* owner, $Array<::com::sun::tools::javac::code::Scope$Entry>* table);
	void init$(::com::sun::tools::javac::code::Scope$ScopeImpl* next, ::com::sun::tools::javac::code::Symbol* owner, $Array<::com::sun::tools::javac::code::Scope$Entry>* table, int32_t nelems);
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	virtual bool anyMatch(::java::util::function::Predicate* sf) override;
	void dble();
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* dup(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* dupUnshared(::com::sun::tools::javac::code::Symbol* newOwner) override;
	virtual void enter(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual void enterIfAbsent(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::com::sun::tools::javac::code::Symbol* findFirst(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf) override;
	virtual int32_t getIndex(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Scope* getOrigin(::com::sun::tools::javac::code::Symbol* s) override;
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual bool includes(::com::sun::tools::javac::code::Symbol* c) override;
	virtual bool isStaticallyImported(::com::sun::tools::javac::code::Symbol* s) override;
	::java::util::Iterator* lambda$getSymbols$1(::com::sun::tools::javac::code::Scope$LookupKind* lookupKind, ::java::util::function::Predicate* sf);
	::java::util::Iterator* lambda$getSymbolsByName$2(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	static bool lambda$remove$0(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Symbol* candidate);
	virtual ::com::sun::tools::javac::code::Scope$WriteableScope* leave() override;
	virtual ::com::sun::tools::javac::code::Scope$Entry* lookup(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Scope$Entry* lookup(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf);
	virtual void remove(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual $String* toString() override;
	int32_t shared = 0;
	::com::sun::tools::javac::code::Scope$ScopeImpl* next = nullptr;
	$Array<::com::sun::tools::javac::code::Scope$Entry>* table = nullptr;
	int32_t hashMask = 0;
	::com::sun::tools::javac::code::Scope$Entry* elems = nullptr;
	int32_t nelems = 0;
	int32_t removeCount = 0;
	static ::com::sun::tools::javac::code::Scope$Entry* sentinel;
	static const int32_t INITIAL_SIZE = 16;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("INITIAL_SIZE")

#endif // _com_sun_tools_javac_code_Scope$ScopeImpl_h_