#ifndef _com_sun_tools_javac_code_Scope$CompoundScope_h_
#define _com_sun_tools_javac_code_Scope$CompoundScope_h_
//$ class com.sun.tools.javac.code.Scope$CompoundScope
//$ extends com.sun.tools.javac.code.Scope
//$ implements com.sun.tools.javac.code.Scope$ScopeListener

#include <com/sun/tools/javac/code/Scope$ScopeListener.h>
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
					class ListBuffer;
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

class $export Scope$CompoundScope : public ::com::sun::tools::javac::code::Scope, public ::com::sun::tools::javac::code::Scope$ScopeListener {
	$class(Scope$CompoundScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope, ::com::sun::tools::javac::code::Scope$ScopeListener)
public:
	Scope$CompoundScope();
	using ::com::sun::tools::javac::code::Scope::getSymbols;
	using ::com::sun::tools::javac::code::Scope::getSymbolsByName;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Symbol* owner);
	virtual void appendSubScope(::com::sun::tools::javac::code::Scope* that);
	virtual int32_t getMark();
	virtual ::com::sun::tools::javac::code::Scope* getOrigin(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual bool isStaticallyImported(::com::sun::tools::javac::code::Symbol* sym) override;
	static ::java::util::Iterator* lambda$getSymbols$0(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind, ::com::sun::tools::javac::code::Scope* scope);
	::java::util::Iterator* lambda$getSymbols$1(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	static ::java::util::Iterator* lambda$getSymbolsByName$2(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind, ::com::sun::tools::javac::code::Scope* scope);
	::java::util::Iterator* lambda$getSymbolsByName$3(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind);
	virtual void prependSubScope(::com::sun::tools::javac::code::Scope* that);
	virtual void symbolAdded(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s) override;
	virtual void symbolRemoved(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Scope* s) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::util::ListBuffer* subScopes = nullptr;
	int32_t mark = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$CompoundScope_h_