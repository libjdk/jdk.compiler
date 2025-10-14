#ifndef _com_sun_tools_javac_code_Scope$ScopeImpl$2_h_
#define _com_sun_tools_javac_code_Scope$ScopeImpl$2_h_
//$ class com.sun.tools.javac.code.Scope$ScopeImpl$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Scope$Entry;
					class Scope$LookupKind;
					class Scope$ScopeImpl;
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

class Scope$ScopeImpl$2 : public ::java::util::Iterator {
	$class(Scope$ScopeImpl$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Scope$ScopeImpl$2();
	void init$(::com::sun::tools::javac::code::Scope$ScopeImpl* this$0, ::com::sun::tools::javac::util::Name* val$name, ::java::util::function::Predicate* val$sf, ::com::sun::tools::javac::code::Scope$LookupKind* val$lookupKind);
	::com::sun::tools::javac::code::Symbol* doNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::tools::javac::code::Scope$ScopeImpl* this$0 = nullptr;
	::com::sun::tools::javac::code::Scope$LookupKind* val$lookupKind = nullptr;
	::java::util::function::Predicate* val$sf = nullptr;
	::com::sun::tools::javac::util::Name* val$name = nullptr;
	::com::sun::tools::javac::code::Scope$Entry* currentEntry = nullptr;
	int32_t seenRemoveCount = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ScopeImpl$2_h_