#ifndef _com_sun_tools_javac_comp_Modules$PackageNameFinder_h_
#define _com_sun_tools_javac_comp_Modules$PackageNameFinder_h_
//$ interface com.sun.tools.javac.comp.Modules$PackageNameFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
				}
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export Modules$PackageNameFinder : public ::java::lang::Object {
	$interface(Modules$PackageNameFinder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::util::Name* findPackageNameOf(::javax::tools::JavaFileObject* jfo) {return nullptr;}
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Modules$PackageNameFinder_h_