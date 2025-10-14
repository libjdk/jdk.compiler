#ifndef _com_sun_tools_sjavac_options_Option$1_h_
#define _com_sun_tools_sjavac_options_Option$1_h_
//$ class com.sun.tools.sjavac.options.Option$1
//$ extends com.sun.tools.sjavac.options.Option

#include <com/sun/tools/sjavac/options/Option.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {
					class ArgumentIterator;
					class OptionHelper;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

class Option$1 : public ::com::sun::tools::sjavac::options::Option {
	$class(Option$1, $NO_CLASS_INIT, ::com::sun::tools::sjavac::options::Option)
public:
	Option$1();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* arg, $String* description);
	virtual void processMatching(::com::sun::tools::sjavac::options::ArgumentIterator* iter, ::com::sun::tools::sjavac::options::OptionHelper* helper) override;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_Option$1_h_