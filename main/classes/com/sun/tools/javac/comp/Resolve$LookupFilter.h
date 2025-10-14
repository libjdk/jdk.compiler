#ifndef _com_sun_tools_javac_comp_Resolve$LookupFilter_h_
#define _com_sun_tools_javac_comp_Resolve$LookupFilter_h_
//$ class com.sun.tools.javac.comp.Resolve$LookupFilter
//$ extends java.util.function.Predicate

#include <java/util/function/Predicate.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
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
				namespace comp {
					class Resolve;
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

class $export Resolve$LookupFilter : public ::java::util::function::Predicate {
	$class(Resolve$LookupFilter, $NO_CLASS_INIT, ::java::util::function::Predicate)
public:
	Resolve$LookupFilter();
	void init$(::com::sun::tools::javac::comp::Resolve* this$0, bool abstractOk);
	virtual bool test(::com::sun::tools::javac::code::Symbol* s);
	virtual bool test(Object$* s) override;
	::com::sun::tools::javac::comp::Resolve* this$0 = nullptr;
	bool abstractOk = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$LookupFilter_h_