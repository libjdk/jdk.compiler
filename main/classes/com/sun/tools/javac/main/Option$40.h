#ifndef _com_sun_tools_javac_main_Option$40_h_
#define _com_sun_tools_javac_main_Option$40_h_
//$ class com.sun.tools.javac.main.Option$40
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option;
				}
			}
		}
	}
}
namespace java {
	namespace text {
		class Collator;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$40 : public ::java::util::Comparator {
	$class(Option$40, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	Option$40();
	void init$();
	virtual int32_t compare(::com::sun::tools::javac::main::Option* o1, ::com::sun::tools::javac::main::Option* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
	::java::text::Collator* collator = nullptr;
};

				} // main
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_main_Option$40_h_