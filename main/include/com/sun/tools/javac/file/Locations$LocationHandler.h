#ifndef _com_sun_tools_javac_file_Locations$LocationHandler_h_
#define _com_sun_tools_javac_file_Locations$LocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$LocationHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager$Location;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import Locations$LocationHandler : public ::java::lang::Object {
	$class(Locations$LocationHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Locations$LocationHandler();
	void init$();
	virtual bool contains(::java::nio::file::Path* file) {return false;}
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule($String* moduleName);
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::java::nio::file::Path* file);
	virtual ::java::util::Collection* getPaths() {return nullptr;}
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) {return false;}
	virtual $String* inferModuleName();
	virtual bool isExplicit() {return false;}
	virtual bool isSet();
	virtual ::java::lang::Iterable* listLocationsForModules();
	virtual void setPaths(::java::lang::Iterable* paths) {}
	virtual void setPathsForModule($String* moduleName, ::java::lang::Iterable* paths) {}
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$LocationHandler_h_