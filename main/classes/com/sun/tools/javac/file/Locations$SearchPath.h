#ifndef _com_sun_tools_javac_file_Locations$SearchPath_h_
#define _com_sun_tools_javac_file_Locations$SearchPath_h_
//$ class com.sun.tools.javac.file.Locations$SearchPath
//$ extends java.util.LinkedHashSet

#include <java/util/LinkedHashSet.h>

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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class Locations$SearchPath : public ::java::util::LinkedHashSet {
	$class(Locations$SearchPath, $NO_CLASS_INIT, ::java::util::LinkedHashSet)
public:
	Locations$SearchPath();
	void init$(::com::sun::tools::javac::file::Locations* this$0);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* addDirectories($String* dirs, bool warn);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* addDirectories($String* dirs);
	void addDirectory(::java::nio::file::Path* dir, bool warn);
	virtual void addFile(::java::nio::file::Path* file, bool warn);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* addFiles($String* files, bool warn);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* addFiles($String* files);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* addFiles(::java::lang::Iterable* files, bool warn);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* addFiles(::java::lang::Iterable* files);
	void addJarClassPath(::java::nio::file::Path* jarFile, bool warn);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* emptyPathDefault(::java::nio::file::Path* x);
	virtual ::com::sun::tools::javac::file::Locations$SearchPath* expandJarClassPaths(bool x);
	void lambda$addDirectory$0(bool warn, ::java::nio::file::Path* dirEntry);
	using ::java::util::LinkedHashSet::toArray;
	::com::sun::tools::javac::file::Locations* this$0 = nullptr;
	static const int64_t serialVersionUID = 0;
	bool expandJarClassPaths$ = false;
	::java::util::Set* canonicalValues = nullptr;
	::java::nio::file::Path* emptyPathDefault$ = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_Locations$SearchPath_h_