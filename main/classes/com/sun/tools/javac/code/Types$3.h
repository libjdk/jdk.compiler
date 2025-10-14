#ifndef _com_sun_tools_javac_code_Types$3_h_
#define _com_sun_tools_javac_code_Types$3_h_
//$ class com.sun.tools.javac.code.Types$3
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace code {

class Types$3 : public ::java::util::function::Predicate {
	$class(Types$3, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	Types$3();
	void init$(::com::sun::tools::javac::code::Types* this$0);
	virtual bool test(::com::sun::tools::javac::code::Symbol* t);
	virtual bool test(Object$* t) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$3_h_