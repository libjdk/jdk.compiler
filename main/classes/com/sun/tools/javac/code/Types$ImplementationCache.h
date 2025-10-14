#ifndef _com_sun_tools_javac_code_Types$ImplementationCache_h_
#define _com_sun_tools_javac_code_Types$ImplementationCache_h_
//$ class com.sun.tools.javac.code.Types$ImplementationCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
					class Types;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class WeakHashMap;
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

class $export Types$ImplementationCache : public ::java::lang::Object {
	$class(Types$ImplementationCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$ImplementationCache();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* get(::com::sun::tools::javac::code::Symbol$MethodSymbol* ms, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, bool checkResult, ::java::util::function::Predicate* implFilter);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* implementationInternal(::com::sun::tools::javac::code::Symbol$MethodSymbol* ms, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin, bool checkResult, ::java::util::function::Predicate* implFilter);
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::java::util::WeakHashMap* _map = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$ImplementationCache_h_