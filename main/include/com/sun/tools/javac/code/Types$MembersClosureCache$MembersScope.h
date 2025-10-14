#ifndef _com_sun_tools_javac_code_Types$MembersClosureCache$MembersScope_h_
#define _com_sun_tools_javac_code_Types$MembersClosureCache$MembersScope_h_
//$ class com.sun.tools.javac.code.Types$MembersClosureCache$MembersScope
//$ extends com.sun.tools.javac.code.Scope$CompoundScope

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$LookupKind;
					class Symbol;
					class Types$MembersClosureCache;
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

class $import Types$MembersClosureCache$MembersScope : public ::com::sun::tools::javac::code::Scope$CompoundScope {
	$class(Types$MembersClosureCache$MembersScope, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Scope$CompoundScope)
public:
	Types$MembersClosureCache$MembersScope();
	using ::com::sun::tools::javac::code::Scope$CompoundScope::getSymbols;
	using ::com::sun::tools::javac::code::Scope$CompoundScope::getSymbolsByName;
	void init$(::com::sun::tools::javac::code::Types$MembersClosureCache* this$1, ::com::sun::tools::javac::code::Scope$CompoundScope* scope);
	virtual ::java::util::function::Predicate* combine(::java::util::function::Predicate* sf);
	virtual int32_t getMark() override;
	virtual ::java::lang::Iterable* getSymbols(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	virtual ::java::lang::Iterable* getSymbolsByName(::com::sun::tools::javac::util::Name* name, ::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Scope$LookupKind* lookupKind) override;
	static bool lambda$combine$0(::java::util::function::Predicate* sf, ::com::sun::tools::javac::code::Symbol* s);
	::com::sun::tools::javac::code::Types$MembersClosureCache* this$1 = nullptr;
	::com::sun::tools::javac::code::Scope$CompoundScope* scope = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$MembersClosureCache$MembersScope_h_