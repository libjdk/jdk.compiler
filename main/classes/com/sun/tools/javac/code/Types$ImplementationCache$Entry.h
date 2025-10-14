#ifndef _com_sun_tools_javac_code_Types$ImplementationCache$Entry_h_
#define _com_sun_tools_javac_code_Types$ImplementationCache$Entry_h_
//$ class com.sun.tools.javac.code.Types$ImplementationCache$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$MethodSymbol;
					class Types$ImplementationCache;
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

class $export Types$ImplementationCache$Entry : public ::java::lang::Object {
	$class(Types$ImplementationCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$ImplementationCache$Entry();
	void init$(::com::sun::tools::javac::code::Types$ImplementationCache* this$1, ::com::sun::tools::javac::code::Symbol$MethodSymbol* cachedImpl, ::java::util::function::Predicate* scopeFilter, bool checkResult, int32_t prevMark);
	virtual bool matches(::java::util::function::Predicate* scopeFilter, bool checkResult, int32_t mark);
	::com::sun::tools::javac::code::Types$ImplementationCache* this$1 = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* cachedImpl = nullptr;
	::java::util::function::Predicate* implFilter = nullptr;
	bool checkResult = false;
	int32_t prevMark = 0;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$ImplementationCache$Entry_h_