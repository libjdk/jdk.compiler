#ifndef _com_sun_tools_javac_file_PathFileObject$JRTFileObject_h_
#define _com_sun_tools_javac_file_PathFileObject$JRTFileObject_h_
//$ class com.sun.tools.javac.file.PathFileObject$JRTFileObject
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

class PathFileObject$JRTFileObject : public ::com::sun::tools::javac::file::PathFileObject {
	$class(PathFileObject$JRTFileObject, $NO_CLASS_INIT, ::com::sun::tools::javac::file::PathFileObject)
public:
	PathFileObject$JRTFileObject();
	void init$(::com::sun::tools::javac::file::BaseFileManager* fileManager, ::java::nio::file::Path* path);
	virtual $String* getName() override;
	virtual ::com::sun::tools::javac::file::PathFileObject* getSibling($String* baseName) override;
	virtual $String* inferBinaryName(::java::lang::Iterable* paths) override;
	virtual $String* toString() override;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_PathFileObject$JRTFileObject_h_