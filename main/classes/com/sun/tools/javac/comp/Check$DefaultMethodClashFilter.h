#ifndef _com_sun_tools_javac_comp_Check$DefaultMethodClashFilter_h_
#define _com_sun_tools_javac_comp_Check$DefaultMethodClashFilter_h_
//$ class com.sun.tools.javac.comp.Check$DefaultMethodClashFilter
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Type;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Check;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Check$DefaultMethodClashFilter : public ::java::util::function::Predicate {
	$class(Check$DefaultMethodClashFilter, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	Check$DefaultMethodClashFilter();
	void init$(::com::sun::tools::javac::comp::Check* this$0, ::com::sun::tools::javac::code::Type* site);
	virtual bool test(::com::sun::tools::javac::code::Symbol* s);
	virtual bool test(Object$* s) override;
	::com::sun::tools::javac::comp::Check* this$0 = nullptr;
	::com::sun::tools::javac::code::Type* site = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Check$DefaultMethodClashFilter_h_