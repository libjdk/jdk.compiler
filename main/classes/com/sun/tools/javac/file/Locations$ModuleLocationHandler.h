#ifndef _com_sun_tools_javac_file_Locations$ModuleLocationHandler_h_
#define _com_sun_tools_javac_file_Locations$ModuleLocationHandler_h_
//$ class com.sun.tools.javac.file.Locations$ModuleLocationHandler
//$ extends com.sun.tools.javac.file.Locations$LocationHandler
//$ implements javax.tools.JavaFileManager$Location

#include <com/sun/tools/javac/file/Locations$LocationHandler.h>
#include <javax/tools/JavaFileManager$Location.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class Locations;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$ModuleLocationHandler : public ::com::sun::tools::javac::file::Locations$LocationHandler, public ::javax::tools::JavaFileManager$Location {
	$class(Locations$ModuleLocationHandler, $NO_CLASS_INIT, ::com::sun::tools::javac::file::Locations$LocationHandler, ::javax::tools::JavaFileManager$Location)
public:
	Locations$ModuleLocationHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::file::Locations* this$0, ::com::sun::tools::javac::file::Locations$LocationHandler* parent, $String* name, $String* moduleName, ::java::util::Collection* searchPath, bool output);
	virtual bool contains(::java::nio::file::Path* file) override;
	virtual $String* getName() override;
	virtual ::java::util::Collection* getPaths() override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value) override;
	virtual $String* inferModuleName() override;
	virtual bool isExplicit() override;
	virtual bool isOutputLocation() override;
	virtual void setPaths(::java::lang::Iterable* paths) override;
	virtual void setPathsForModule($String* moduleName, ::java::lang::Iterable* paths) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	::com::sun::tools::javac::file::Locations$LocationHandler* parent = nullptr;
	$String* name = nullptr;
	$String* moduleName = nullptr;
	bool output = false;
	bool explicit$ = false;
	::java::util::Collection* searchPath = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$ModuleLocationHandler_h_