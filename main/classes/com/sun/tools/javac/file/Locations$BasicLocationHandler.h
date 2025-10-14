#ifndef _com_sun_tools_javac_file_Locations$BasicLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$BasicLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$BasicLocationHandler
//$ extends com.sun.tools.javac.file.Locations$LocationHandler

#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <java/lang/Array.h>

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
		class Set;
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

class Locations$BasicLocationHandler : public ::com::sun::tools::javac::file::Locations$LocationHandler {
	$class(Locations$BasicLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$LocationHandler)
public:
	Locations$BasicLocationHandler();
	void init$(::javax::tools::JavaFileManager$Location* location, $Array<::com::sun::tools::javac::main::Option>* options);
	virtual ::java::nio::file::Path* checkDirectory(::java::nio::file::Path* path);
	virtual ::java::nio::file::Path* checkSingletonDirectory(::java::lang::Iterable* paths);
	virtual bool isExplicit() override;
	virtual void setPathsForModule($String* moduleName, ::java::lang::Iterable* files) override;
	::javax::tools::JavaFileManager$Location* location = nullptr;
	::java::util::Set* options = nullptr;
	bool explicit$ = false;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$BasicLocationHandler_h_