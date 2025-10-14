#ifndef _com_sun_tools_javac_file_Locations$OutputLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$OutputLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$OutputLocationHandler
//$ extends com.sun.tools.javac.file.Locations$BasicLocationHandler

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
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

class Locations$OutputLocationHandler : public ::com::sun::tools::javac::file::Locations$BasicLocationHandler {
	$class(Locations$OutputLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$BasicLocationHandler)
public:
	Locations$OutputLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0, ::javax::tools::JavaFileManager$Location* location, $Array<::com::sun::tools::javac::main::Option>* options);
	virtual bool contains(::java::nio::file::Path* file) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule($String* name) override;
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::java::nio::file::Path* file) override;
	virtual ::java::util::Collection* getPaths() override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual ::java::lang::Iterable* listLocationsForModules() override;
	virtual void setPaths(::java::lang::Iterable* paths) override;
	virtual void setPathsForModule($String* name, ::java::lang::Iterable* paths) override;
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::java::nio::file::Path* outputDir = nullptr;
	::com::sun::tools::javac::file::Locations$ModuleTable* moduleTable = nullptr;
	bool listed = false;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$OutputLocationHandler_h_