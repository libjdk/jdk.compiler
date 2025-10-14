#ifndef _com_sun_tools_javac_file_Locations$SimpleLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$SimpleLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$SimpleLocationHandler
//$ extends com.sun.tools.javac.file.Locations$BasicLocationHandler

#include <com/sun/tools/javac/file/Locations$BasicLocationHandler.h>
#include <java/lang/Array.h>

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

class Locations$SimpleLocationHandler : public ::com::sun::tools::javac::file::Locations$BasicLocationHandler {
	$class(Locations$SimpleLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$BasicLocationHandler)
public:
	Locations$SimpleLocationHandler();
	void init$(::com::sun::tools::javac::file::Locations* this$0, ::javax::tools::JavaFileManager$Location* location, $Array<::com::sun::tools::javac::main::Option>* options);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* computePath($String* value);
	virtual bool contains(::java::nio::file::Path* file) override;
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* createPath();
	virtual ::java::util::Collection* getPaths() override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual void setPaths(::java::lang::Iterable* files) override;
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::java::util::Collection* searchPath = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$SimpleLocationHandler_h_