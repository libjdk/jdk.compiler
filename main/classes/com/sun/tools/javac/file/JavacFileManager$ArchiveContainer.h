#ifndef _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer_h_
#define _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer_h_
//$ class com.sun.tools.javac.file.JavacFileManager$ArchiveContainer
//$ extends com.sun.tools.javac.file.JavacFileManager$Container

#include <com/sun/tools/javac/file/JavacFileManager$Container.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JavacFileManager;
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
			class FileSystem;
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class JavacFileManager$ArchiveContainer : public ::com::sun::tools::javac::file::JavacFileManager$Container {
	$class(JavacFileManager$ArchiveContainer, $NO_CLASS_INIT, ::com::sun::tools::javac::file::JavacFileManager$Container)
public:
	JavacFileManager$ArchiveContainer();
	void init$(::com::sun::tools::javac::file::JavacFileManager* this$0, ::java::nio::file::Path* archivePath);
	virtual void close() override;
	virtual ::javax::tools::JavaFileObject* getFileObject(::java::nio::file::Path* userPath, ::com::sun::tools::javac::file::RelativePath$RelativeFile* name) override;
	virtual ::java::lang::Iterable* indexedDirectories() override;
	bool isValid(::java::nio::file::Path* fileName);
	virtual void list(::java::nio::file::Path* userPath, ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* subdirectory, ::java::util::Set* fileKinds, bool recurse, ::com::sun::tools::javac::util::ListBuffer* resultList) override;
	virtual bool maintainsDirectoryIndex() override;
	::com::sun::tools::javac::file::JavacFileManager* this$0 = nullptr;
	::java::nio::file::Path* archivePath = nullptr;
	::java::nio::file::FileSystem* fileSystem = nullptr;
	::java::util::Map* packages = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer_h_