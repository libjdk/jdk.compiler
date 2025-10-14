#ifndef _com_sun_tools_sjavac_options_SourceLocation_h_
#define _com_sun_tools_sjavac_options_SourceLocation_h_
//$ class com.sun.tools.sjavac.options.SourceLocation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				class Module;
			}
		}
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
		class List;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

class SourceLocation : public ::java::lang::Object {
	$class(SourceLocation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SourceLocation();
	void init$(::java::nio::file::Path* path, ::java::util::List* includes, ::java::util::List* excludes);
	virtual void findSourceFiles(::java::util::Set* suffixes, ::java::util::Map* foundFiles, ::java::util::Map* foundModules, ::com::sun::tools::sjavac::Module* currentModule, bool permitSourcesInDefaultPackage, bool inLinksrc);
	virtual ::java::util::List* getExcludes();
	virtual ::java::util::List* getIncludes();
	virtual ::java::nio::file::Path* getPath();
	virtual $String* toString() override;
	::java::nio::file::Path* path = nullptr;
	::java::util::List* includes = nullptr;
	::java::util::List* excludes = nullptr;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_SourceLocation_h_