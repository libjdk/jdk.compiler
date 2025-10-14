#ifndef _com_sun_tools_javac_code_Types$DescriptorFilter_h_
#define _com_sun_tools_javac_code_Types$DescriptorFilter_h_
//$ class com.sun.tools.javac.code.Types$DescriptorFilter
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$TypeSymbol;
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

class $export Types$DescriptorFilter : public ::java::util::function::Predicate {
	$class(Types$DescriptorFilter, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	Types$DescriptorFilter();
	void init$(::com::sun::tools::javac::code::Types* this$0, ::com::sun::tools::javac::code::Symbol$TypeSymbol* origin);
	virtual bool test(::com::sun::tools::javac::code::Symbol* sym);
	virtual bool test(Object$* sym) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* origin = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$DescriptorFilter_h_