#ifndef _com_sun_tools_javac_file_PathFileObject$SimpleFileObject_h_
#define _com_sun_tools_javac_file_PathFileObject$SimpleFileObject_h_
//$ class com.sun.tools.javac.file.PathFileObject$SimpleFileObject
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
namespace javax {
	namespace tools {
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class PathFileObject$SimpleFileObject : public ::com::sun::tools::javac::file::PathFileObject {
	$class(PathFileObject$SimpleFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::file::PathFileObject)
public:
	PathFileObject$SimpleFileObject();
	void init$(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path, ::java::nio::file::Path* userPath);
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual $String* getName() override;
	virtual $String* getShortName() override;
	virtual ::com::sun::tools::javac::file::PathFileObject* getSibling($String* baseName) override;
	virtual $String* inferBinaryName(::java::lang::Iterable* paths) override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::java::net::URI* toUri() override;
	::java::nio::file::Path* userPath = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_PathFileObject$SimpleFileObject_h_