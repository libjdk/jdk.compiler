#ifndef _com_sun_tools_javac_file_JavacFileManager$Container_h_
#define _com_sun_tools_javac_file_JavacFileManager$Container_h_
//$ interface com.sun.tools.javac.file.JavacFileManager$Container
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class RelativePath$RelativeDirectory;
					class RelativePath$RelativeFile;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ListBuffer;
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
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class JavacFileManager$Container : public ::java::lang::Object {
	$interface(JavacFileManager$Container, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
	virtual ::javax::tools::JavaFileObject* getFileObject(::java::nio::file::Path* userPath, ::com::sun::tools::javac::file::RelativePath$RelativeFile* name) {return nullptr;}
	virtual ::java::lang::Iterable* indexedDirectories() {return nullptr;}
	virtual void list(::java::nio::file::Path* userPath, ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* subdirectory, ::java::util::Set* fileKinds, bool recurse, ::com::sun::tools::javac::util::ListBuffer* resultList) {}
	virtual bool maintainsDirectoryIndex() {return false;}
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$Container_h_