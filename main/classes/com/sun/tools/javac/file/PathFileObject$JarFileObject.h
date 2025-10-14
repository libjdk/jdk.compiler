#ifndef _com_sun_tools_javac_file_PathFileObject$JarFileObject_h_
#define _com_sun_tools_javac_file_PathFileObject$JarFileObject_h_
//$ class com.sun.tools.javac.file.PathFileObject$JarFileObject
//$ extends com.sun.tools.javac.file.PathFileObject

#include <com/sun/tools/javac/file/PathFileObject.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class BaseFileManager;
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
	namespace net {
		class URI;
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

class PathFileObject$JarFileObject : public ::com::sun::tools::javac::file::PathFileObject {
	$class(PathFileObject$JarFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::file::PathFileObject)
public:
	PathFileObject$JarFileObject();
	void init$(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path, ::java::nio::file::Path* userJarPath);
	static ::java::net::URI* createJarUri(::java::nio::file::Path* jarFile, $String* entryName);
	virtual $String* getName() override;
	virtual ::com::sun::tools::javac::file::PathFileObject* getSibling($String* baseName) override;
	virtual $String* inferBinaryName(::java::lang::Iterable* paths) override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	::java::nio::file::Path* userJarPath = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_PathFileObject$JarFileObject_h_