#ifndef _com_sun_tools_javac_file_Locations_h_
#define _com_sun_tools_javac_file_Locations_h_
//$ class com.sun.tools.javac.file.Locations
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class FSInfo;
					class Locations$LocationHandler;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ModuleNameReader;
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
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ListBuffer;
					class Log;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Closeable;
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
		class Map;
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager$Location;
		class StandardJavaFileManager$PathFactory;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import Locations : public ::java::lang::Object {
	$class(Locations, 0, ::java::lang::Object)
public:
	Locations();
	void init$();
	virtual void close();
	bool contains(::java::util::Collection* searchPath, ::java::nio::file::Path* file);
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::java::nio::file::Path* file);
	virtual ::com::sun::tools::javac::file::Locations$LocationHandler* getHandler(::javax::tools::JavaFileManager$Location* location);
	virtual ::java::util::Collection* getLocation(::javax::tools::JavaFileManager$Location* location);
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* name);
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, ::java::nio::file::Path* file);
	virtual ::java::nio::file::Path* getOutputLocation(::javax::tools::JavaFileManager$Location* location);
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more);
	::java::lang::Iterable* getPathEntries($String* searchPath);
	::java::lang::Iterable* getPathEntries($String* searchPath, ::java::nio::file::Path* emptyPathDefault);
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value);
	virtual bool hasExplicitLocation(::javax::tools::JavaFileManager$Location* location);
	virtual bool hasLocation(::javax::tools::JavaFileManager$Location* location);
	virtual $String* inferModuleName(::javax::tools::JavaFileManager$Location* location);
	virtual void initHandlers();
	bool isArchive(::java::nio::file::Path* file);
	virtual bool isDefaultBootClassPath();
	virtual bool isDefaultSystemModulesPath();
	static void lambda$close$0(::com::sun::tools::javac::util::ListBuffer* list, ::java::io::Closeable* closeable);
	virtual ::java::lang::Iterable* listLocationsForModules(::javax::tools::JavaFileManager$Location* location);
	static ::java::nio::file::Path* normalize(::java::nio::file::Path* p);
	virtual void setLocation(::javax::tools::JavaFileManager$Location* location, ::java::lang::Iterable* files);
	virtual void setLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName, ::java::lang::Iterable* files);
	virtual void setMultiReleaseValue($String* multiReleaseValue);
	virtual void setPathFactory(::javax::tools::StandardJavaFileManager$PathFactory* f);
	virtual void update(::com::sun::tools::javac::util::Log* log, bool warn, ::com::sun::tools::javac::file::FSInfo* fsInfo);
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::file::FSInfo* fsInfo = nullptr;
	bool warn = false;
	::com::sun::tools::javac::jvm::ModuleNameReader* moduleNameReader = nullptr;
	::javax::tools::StandardJavaFileManager$PathFactory* pathFactory = nullptr;
	static ::java::nio::file::Path* javaHome;
	static ::java::nio::file::Path* thisSystemModules;
	::java::util::Map* fileSystems = nullptr;
	::java::util::List* closeables = nullptr;
	::java::util::Map* fsEnv = nullptr;
	::java::util::Map* handlersForLocation = nullptr;
	::java::util::Map* handlersForOption = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations_h_