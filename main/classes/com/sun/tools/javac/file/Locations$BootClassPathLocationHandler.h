#ifndef _com_sun_tools_javac_file_Locations$BootClassPathLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$BootClassPathLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$BootClassPathLocationHandler
//$ extends com.sun.tools.javac.file.Locations$BasicLocationHandler

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class Locations;
					class Locations$SearchPath;
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
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$BootClassPathLocationHandler : public ::com::sun::tools::javac::file::Locations$BasicLocationHandler {
	$class(Locations$BootClassPathLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$BasicLocationHandler)
public:
	Locations$BootClassPathLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0);
	::com::sun::tools::javac::main::Option* canonicalize(::com::sun::tools::javac::main::Option* option);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* computePath();
	virtual bool contains(::java::nio::file::Path* file) override;
	virtual ::java::util::Collection* getPaths() override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual bool isDefault();
	void lazy();
	virtual void setPaths(::java::lang::Iterable* files) override;
	::java::util::Collection* systemClasses();
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::java::util::Collection* searchPath = nullptr;
	::java::util::Map* optionValues = nullptr;
	bool isDefault$ = false;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$BootClassPathLocationHandler_h_