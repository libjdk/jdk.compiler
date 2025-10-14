#ifndef _com_sun_tools_javac_file_PathFileObject$DirectoryFileObject_h_
#define _com_sun_tools_javac_file_PathFileObject$DirectoryFileObject_h_
//$ class com.sun.tools.javac.file.PathFileObject$DirectoryFileObject
//$ extends com.sun.tools.javac.file.PathFileObject

#include <com/sun/tools/javac/file/PathFileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class BaseFileManager;
					class RelativePath;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class PathFileObject$DirectoryFileObject : public ::com::sun::tools::javac::file::PathFileObject {
	$class(PathFileObject$DirectoryFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::file::PathFileObject)
public:
	PathFileObject$DirectoryFileObject();
	void init$(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path, ::java::nio::file::Path* userPackageRootDir, ::com::sun::tools::javac::file::RelativePath* relativePath);
	virtual $String* getName() override;
	virtual ::com::sun::tools::javac::file::PathFileObject* getSibling($String* baseName) override;
	virtual $String* inferBinaryName(::java::lang::Iterable* paths) override;
	virtual $String* toString() override;
	::java::nio::file::Path* userPackageRootDir = nullptr;
	::com::sun::tools::javac::file::RelativePath* relativePath = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_PathFileObject$DirectoryFileObject_h_