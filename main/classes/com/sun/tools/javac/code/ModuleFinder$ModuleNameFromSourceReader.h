#ifndef _com_sun_tools_javac_code_ModuleFinder$ModuleNameFromSourceReader_h_
#define _com_sun_tools_javac_code_ModuleFinder$ModuleNameFromSourceReader_h_
//$ interface com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader
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
				namespace code {

class $export ModuleFinder$ModuleNameFromSourceReader : public ::java::lang::Object {
	$interface(ModuleFinder$ModuleNameFromSourceReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::tools::javac::util::Name* readModuleName(::javax::tools::JavaFileObject* file) {return nullptr;}
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_ModuleFinder$ModuleNameFromSourceReader_h_