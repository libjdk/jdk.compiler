#ifndef _com_sun_tools_javac_file_Locations$ModulePathLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$ModulePathLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$ModulePathLocationHandler
//$ extends com.sun.tools.javac.file.Locations$SimpleLocationHandler

#include <com/sun/tools/javac/file/Locations$SimpleLocationHandler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class Locations;
					class Locations$ModuleTable;
				}
			}
		}
	}
}
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
		class Iterator;
		class List;
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

class Locations$ModulePathLocationHandler : public ::com::sun::tools::javac::file::Locations$SimpleLocationHandler {
	$class(Locations$ModulePathLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$SimpleLocationHandler)
public:
	Locations$ModulePathLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0, ::javax::tools::JavaFileManager$Location* location, $Array<::com::sun::tools::javac::main::Option>* options);
	::java::util::List* checkPaths(::java::lang::Iterable* paths);
	void checkValidModulePathEntry(::java::nio::file::Path* p);
	virtual bool contains(::java::nio::file::Path* file) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule($String* moduleName) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::java::nio::file::Path* file) override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	void initModuleLocations();
	bool isModuleName($String* name);
	::java::util::Iterator* lambda$listLocationsForModules$0();
	static ::java::util::Iterator* lambda$listLocationsForModules$1(::java::lang::Iterable* explicitLocationsList, ::java::lang::Iterable* searchPathLocations);
	virtual ::java::lang::Iterable* listLocationsForModules() override;
	virtual void setPaths(::java::lang::Iterable* paths) override;
	virtual void setPathsForModule($String* name, ::java::lang::Iterable* paths) override;
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::com::sun::tools::javac::file::Locations$ModuleTable* moduleTable = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$ModulePathLocationHandler_h_