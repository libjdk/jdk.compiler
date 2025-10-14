#ifndef _com_sun_tools_sjavac_Source$1_h_
#define _com_sun_tools_sjavac_Source$1_h_
//$ class com.sun.tools.sjavac.Source$1
//$ extends java.nio.file.SimpleFileVisitor

#include <java/nio/file/SimpleFileVisitor.h>

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
	namespace io {
		class File;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileVisitResult;
			class Path;
			class PathMatcher;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
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

class Source$1 : public ::java::nio::file::SimpleFileVisitor {
	$class(Source$1, $NO_CLASS_INIT, ::java::nio::file::SimpleFileVisitor)
public:
	Source$1();
	void init$(::java::io::File* val$root, ::java::util::List* val$includeMatchers, ::java::util::List* val$excludeMatchers, ::java::util::Set* val$suffixes, ::java::util::Map* val$foundFiles, ::com::sun::tools::sjavac::Module* val$currentModule, bool val$inLinksrc, bool val$inGensrc);
	static bool lambda$visitFile$0(::java::nio::file::Path* relToRoot, ::java::nio::file::PathMatcher* im);
	virtual ::java::nio::file::FileVisitResult* visitFile(::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	bool val$inGensrc = false;
	bool val$inLinksrc = false;
	::com::sun::tools::sjavac::Module* val$currentModule = nullptr;
	::java::util::Map* val$foundFiles = nullptr;
	::java::util::Set* val$suffixes = nullptr;
	::java::util::List* val$excludeMatchers = nullptr;
	::java::util::List* val$includeMatchers = nullptr;
	::java::io::File* val$root = nullptr;
};

			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_Source$1_h_