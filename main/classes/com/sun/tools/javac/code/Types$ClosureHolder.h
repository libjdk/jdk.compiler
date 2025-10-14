#ifndef _com_sun_tools_javac_code_Types$ClosureHolder_h_
#define _com_sun_tools_javac_code_Types$ClosureHolder_h_
//$ class com.sun.tools.javac.code.Types$ClosureHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
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
				namespace util {
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiPredicate;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Types$ClosureHolder : public ::java::lang::Object {
	$class(Types$ClosureHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types$ClosureHolder();
	void init$(::com::sun::tools::javac::code::Types* this$0, bool minClosure, ::java::util::function::BiPredicate* shouldSkip);
	virtual void add(::com::sun::tools::javac::code::Type* type);
	virtual ::com::sun::tools::javac::util::List* closure();
	virtual ::com::sun::tools::javac::code::Types$ClosureHolder* merge(::com::sun::tools::javac::code::Types$ClosureHolder* other);
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::util::List* closure$ = nullptr;
	bool minClosure = false;
	::java::util::function::BiPredicate* shouldSkip = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$ClosureHolder_h_