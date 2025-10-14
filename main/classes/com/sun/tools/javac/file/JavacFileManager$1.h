#ifndef _com_sun_tools_javac_file_JavacFileManager$1_h_
#define _com_sun_tools_javac_file_JavacFileManager$1_h_
//$ class com.sun.tools.javac.file.JavacFileManager$1
//$ extends com.sun.tools.javac.file.JavacFileManager$Container

#include <com/sun/tools/javac/file/JavacFileManager$Container.h>

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

class JavacFileManager$1 : public ::com::sun::tools::javac::file::JavacFileManager$Container {
	$class(JavacFileManager$1, $NO_CLASS_INIT, ::com::sun::tools::javac::file::JavacFileManager$Container)
public:
	JavacFileManager$1();
	void init$();
	virtual void close() override;
	virtual ::javax::tools::JavaFileObject* getFileObject(::java::nio::file::Path* userPath, ::com::sun::tools::javac::file::RelativePath$RelativeFile* name) override;
	virtual ::java::lang::Iterable* indexedDirectories() override;
	virtual void list(::java::nio::file::Path* userPath, ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* subdirectory, ::java::util::Set* fileKinds, bool recurse, ::com::sun::tools::javac::util::ListBuffer* resultList) override;
	virtual bool maintainsDirectoryIndex() override;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$1_h_