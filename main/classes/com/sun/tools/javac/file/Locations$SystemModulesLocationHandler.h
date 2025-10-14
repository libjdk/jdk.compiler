#ifndef _com_sun_tools_javac_file_Locations$SystemModulesLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$SystemModulesLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$SystemModulesLocationHandler
//$ extends com.sun.tools.javac.file.Locations$BasicLocationHandler

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>

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
		class Collection;
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

class Locations$SystemModulesLocationHandler : public ::com::sun::tools::javac::file::Locations$BasicLocationHandler {
	$class(Locations$SystemModulesLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$BasicLocationHandler)
public:
	Locations$SystemModulesLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0);
	::java::util::List* checkPaths(::java::lang::Iterable* paths);
	virtual bool contains(::java::nio::file::Path* file) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule($String* name) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::java::nio::file::Path* file) override;
	virtual ::java::util::Collection* getPaths() override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	void initSystemModules();
	bool isCurrentPlatform(::java::nio::file::Path* p);
	static bool lambda$initSystemModules$0(::java::nio::file::Path* x$0);
	virtual ::java::lang::Iterable* listLocationsForModules() override;
	virtual void setPaths(::java::lang::Iterable* files) override;
	virtual void setPathsForModule($String* name, ::java::lang::Iterable* paths) override;
	void update(::java::nio::file::Path* p);
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::java::nio::file::Path* systemJavaHome = nullptr;
	::java::nio::file::Path* modules = nullptr;
	::com::sun::tools::javac::file::Locations$ModuleTable* moduleTable = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$SystemModulesLocationHandler_h_