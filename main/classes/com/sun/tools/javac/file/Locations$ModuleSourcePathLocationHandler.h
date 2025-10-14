#ifndef _com_sun_tools_javac_file_Locations$ModuleSourcePathLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$ModuleSourcePathLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$ModuleSourcePathLocationHandler
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
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
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

class Locations$ModuleSourcePathLocationHandler : public ::com::sun::tools::javac::file::Locations$BasicLocationHandler {
	$class(Locations$ModuleSourcePathLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$BasicLocationHandler)
public:
	Locations$ModuleSourcePathLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0);
	virtual void add(::java::util::Map* map, ::java::nio::file::Path* prefix, ::java::nio::file::Path* suffix);
	::java::util::List* checkPaths(::java::lang::Iterable* paths);
	virtual bool contains(::java::nio::file::Path* file) override;
	void expandBraces($String* value, ::java::util::Collection* results);
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule($String* name) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::java::nio::file::Path* file) override;
	virtual int32_t getMatchingBrace($String* value, int32_t offset);
	virtual ::java::util::Collection* getPaths() override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual void init($String* value);
	virtual void initForModule($String* value);
	virtual void initFromPattern($String* value);
	void initModuleTable(::java::util::Map* map);
	bool isSeparator(char16_t ch);
	virtual bool isSet() override;
	static bool lambda$add$2(::java::nio::file::Path* path);
	void lambda$initModuleTable$0($String* modName, ::java::util::List* modPath);
	static bool lambda$new$1(::java::nio::file::Path* p);
	virtual ::java::lang::Iterable* listLocationsForModules() override;
	virtual void setPaths(::java::lang::Iterable* files) override;
	virtual void setPathsForModule($String* name, ::java::lang::Iterable* paths) override;
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::com::sun::tools::javac::file::Locations$ModuleTable* moduleTable = nullptr;
	::java::util::List* paths = nullptr;
	::java::util::function::Predicate* checkModuleInfo = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$ModuleSourcePathLocationHandler_h_