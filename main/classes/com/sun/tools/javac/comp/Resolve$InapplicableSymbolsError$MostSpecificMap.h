#ifndef _com_sun_tools_javac_comp_Resolve$InapplicableSymbolsError$MostSpecificMap_h_
#define _com_sun_tools_javac_comp_Resolve$InapplicableSymbolsError$MostSpecificMap_h_
//$ class com.sun.tools.javac.comp.Resolve$InapplicableSymbolsError$MostSpecificMap
//$ extends java.util.LinkedHashMap

#include <java/util/LinkedHashMap.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Resolve$InapplicableSymbolsError;
					class Resolve$MethodResolutionContext$Candidate;
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

class Resolve$InapplicableSymbolsError$MostSpecificMap : public ::java::util::LinkedHashMap {
	$class(Resolve$InapplicableSymbolsError$MostSpecificMap, $NO_CLASS_INIT, ::java::util::LinkedHashMap)
public:
	Resolve$InapplicableSymbolsError$MostSpecificMap();
	void init$(::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError* this$1);
	using ::java::util::LinkedHashMap::put;
	void put(::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate* c);
	::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError* this$1 = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Resolve$InapplicableSymbolsError$MostSpecificMap_h_