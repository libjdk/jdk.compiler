#ifndef _com_sun_tools_javac_code_Types$MethodFilter_h_
#define _com_sun_tools_javac_code_Types$MethodFilter_h_
//$ class com.sun.tools.javac.code.Types$MethodFilter
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
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
				namespace code {

class Types$MethodFilter : public ::java::util::function::Predicate {
	$class(Types$MethodFilter, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	Types$MethodFilter();
	void init$(::com::sun::tools::javac::code::Types* this$0, ::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::code::Type* site);
	virtual bool test(::com::sun::tools::javac::code::Symbol* s);
	virtual bool test(Object$* s) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol* msym = nullptr;
	::com::sun::tools::javac::code::Type* site = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$MethodFilter_h_