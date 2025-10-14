#ifndef _com_sun_tools_javac_code_Scope$ScopeImpl$1_h_
#define _com_sun_tools_javac_code_Scope$ScopeImpl$1_h_
//$ class com.sun.tools.javac.code.Scope$ScopeImpl$1
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

class Scope$ScopeImpl$1 : public ::java::util::Iterator {
	$class(Scope$ScopeImpl$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Scope$ScopeImpl$1();
	void init$(::com::sun::tools::javac::code::Scope$ScopeImpl* this$0, ::com::sun::tools::javac::code::Scope$LookupKind* val$lookupKind, ::java::util::function::Predicate* val$sf);
	::com::sun::tools::javac::code::Symbol* doNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void skipToNextMatchingEntry();
	void update();
	::com::sun::tools::javac::code::Scope$ScopeImpl* this$0 = nullptr;
	::java::util::function::Predicate* val$sf = nullptr;
	::com::sun::tools::javac::code::Scope$LookupKind* val$lookupKind = nullptr;
	::com::sun::tools::javac::code::Scope$ScopeImpl* currScope = nullptr;
	::com::sun::tools::javac::code::Scope$Entry* currEntry = nullptr;
	int32_t seenRemoveCount = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Scope$ScopeImpl$1_h_