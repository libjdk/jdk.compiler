#ifndef _com_sun_tools_javac_comp_MatchBindingsComputer$MatchBindings_h_
#define _com_sun_tools_javac_comp_MatchBindingsComputer$MatchBindings_h_
//$ class com.sun.tools.javac.comp.MatchBindingsComputer$MatchBindings
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import MatchBindingsComputer$MatchBindings : public ::java::lang::Object {
	$class(MatchBindingsComputer$MatchBindings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MatchBindingsComputer$MatchBindings();
	void init$(::com::sun::tools::javac::util::List* bindingsWhenTrue, ::com::sun::tools::javac::util::List* bindingsWhenFalse);
	void init$(::com::sun::tools::javac::util::List* bindingsWhenTrue, ::com::sun::tools::javac::util::List* bindingsWhenFalse, bool nullPattern);
	::com::sun::tools::javac::util::List* bindingsWhenTrue = nullptr;
	::com::sun::tools::javac::util::List* bindingsWhenFalse = nullptr;
	bool nullPattern = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_MatchBindingsComputer$MatchBindings_h_